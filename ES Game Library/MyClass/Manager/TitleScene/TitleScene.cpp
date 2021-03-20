#include "TitleScene.h"
#include "../SceneManager/SceneManager.h"

void TitleScene::Initialize()
{
	
}

void TitleScene::Update()
{
	if(Input.GetKeybordInputDown(Keys_Space))
	{
		SceneManager::ChangeScene(SceneManager::SCENE::MAIN);
	}
	
	
}

void TitleScene::Draw2D()
{

}
