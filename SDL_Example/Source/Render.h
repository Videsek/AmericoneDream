#ifndef __RENDER_H__
#define __RENDER_H__

#include "SDL.h"
#include "SDL_image.h"
#include "SDL_opengl.h"

struct Color
{
	Color( float _r, float _g, float _b ) : r(_r), g(_g), b(_b) {}
	float r, g, b;
};

void init_GL();
void DrawImage( GLuint sourceTexture, Color& color, float xPos, float yPos, float width, float height );
void DrawImage( GLuint sourceTexture, Color& color, float xPos, float yPos, float width, float height,float radRotation);
void DrawLine( Vec2& start, Vec2& end, Color& color );
GLuint LoadImage( char* filename );

#endif // __RENDER_H__