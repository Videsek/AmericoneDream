#include "GameWorld.h"
//#include "source/main.h"


bool GameWorld::drawGrid =true;
GameWorld::GameWorld(void)
{

}

GameWorld::~GameWorld(void)
{

}
void GameWorld::Init()
{
	#if TWEAK_MENU
	#define TWEAK_SEPERATOR()	TwAddSeparator(TwkBar(), "", "")
		//TWEAK_SEPERATOR();
		TwAddVarRW(TwkBar(), "Draw Grid",		TW_TYPE_BOOL8, &drawGrid,				"");
	#endif // TWEAK_MENU
	enemies = new Enemy();
	m_player = new Player();
	enemies->Init();
	m_player->Init();
	
}
void GameWorld::GetInput(SDL_Event event)
{
	m_player->Input(event);
}
void GameWorld::Draw()
{
	if(drawGrid)
	{
		DrawGrid();
	}
	enemies->Draw();
	m_player->Draw();
	
}
void GameWorld::Update(float dt)
{
	enemies->Update(dt);
	m_player->Update(dt);
}
void GameWorld::CheckCollision()
{
	Vec2 closestPoint;
	//horrible collision blame ED
	closestPoint = m_player->GetClosestPoint(enemies->Get());
}
void GameWorld::DrawGrid()
{
	for(int i = 0; i < WORLDHEIGHT/50; i++)
	{
		DrawLine( Vec2(i*GRIDSIZE, 0), Vec2(i*GRIDSIZE, WORLDLENGTH), Color(1, 0, 0) );
	}
	for(int j = 0; j < WORLDLENGTH/50; j++)
	{
		DrawLine( Vec2(0, j*GRIDSIZE), Vec2(WORLDHEIGHT, j*GRIDSIZE), Color(1, 0, 0) );
	}
}
