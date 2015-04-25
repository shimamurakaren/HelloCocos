#include "SceneCreator.h"

#include "common.h"

// Scene
#include "HelloWorld/HelloWorldScene.h"
#include "LifeGame/LifeGameScene.h"
#include "Shooting/ShootingScene.h"
#include "LifeGame2/LifeGame2Scene.h"

#ifndef NDEBUG
#include "DebugScene.h"
#endif

GameScene *SceneCreator::create( SceneID scene )
{
	GameScene *pScene = nullptr;

	switch( scene )
	{
		case SceneID::HELLO_WORLD: pScene = HelloWorldScene::create(); break;
		case SceneID::LIFE_GAME: pScene = LifeGameScene::create(); break;
		case SceneID::SHOOTING: pScene = ShootingScene::create(); break;
		case SceneID::LIFE_GAME2: pScene = LifeGame2Scene::create(); break;
		
#ifndef NDEBUG
		case SceneID::DEBUG: pScene = DebugScene::create(); break;
#endif

	}

	return pScene;
}
