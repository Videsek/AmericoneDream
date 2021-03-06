#include <sdl.h>
#include <math.h>
#include "Main.h"
#include "Simulation.h"

GLuint card=NULL; // Water texture

static bool enableGravity = true;
static Vec2 grav(0, 175);

static bool drawLines = true;


Simulation Simulation::singleton;

Simulation::Simulation()
{
}

void Simulation::Shutdown()
{
	glDeleteTextures( 1, &card );
}



// Draw all the sprites
void Simulation::DrawFrame()
{
//	DrawImage( card, Color(1, 1, 1), grav.y, 200, 50, 50 );

	static float rot = 0;
	rot+= 0.01f;
	if(rot >= 2.0f * 3.1415926f)
		rot -= 2.0f * 3.1415926f;

	DrawImage( card, Color(1, 1, 1), grav.y, 200, 50, 50,rot);
}

void Simulation::SimulateOneFrame(float deltaTime)
{
	// Drag balls with mouse
	static int prevX = 0;
	static int prevY = 0;
	int currX, currY;
	unsigned char buttons = SDL_GetMouseState( &currX, &currY );
	Vec2 dragDelta( (float)(currX - prevX), (float)(currY - prevY) );
	Vec2 mousePos( (float)currX, (float)currY );
	prevX = currX;
	prevY = currY;
	if( drawLines )
	{
		if( buttons & SDL_BUTTON(1) )
			DrawLine( Vec2(SCREEN_W/2.0f, SCREEN_H/2.0f), mousePos, Color(1, 0, 0) );
		else
			DrawLine( Vec2(SCREEN_W/2.0f, SCREEN_H/2.0f), mousePos, Color(0, 1, 0) );
	}
}

void Log(const char *fmt, ...)
{
#if _DEBUG
	static char buf[1024];
	va_list args;
	va_start(args,fmt);
	vsprintf_s(buf,fmt,args);
	va_end(args);
	OutputDebugStringA(buf);
#endif
}

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

void Simulation::Init()
{
	card = LoadImage("tankTurret.png");

#if TWEAK_MENU
#define TWEAK_SEPERATOR()	TwAddSeparator(TwkBar(), "", "")

	TwAddVarRW(TwkBar(), "Gravity On",		TW_TYPE_BOOL8, &enableGravity,			"");
	TwAddVarRW(TwkBar(), "Gravity",			TW_TYPE_FLOAT, &grav.y,					"min=0 max=200");

	TWEAK_SEPERATOR();
	TwAddVarRW(TwkBar(), "Draw Lines",		TW_TYPE_BOOL8, &drawLines,				"");
#endif // TWEAK_MENU
}


