#include"SceneManager.h"
#include"../TitleScene/TitleScene.h"
#include"../MainScene/MainScene.h"
BaseScene *SceneManager::m_pScene = nullptr;

void SceneManager::ChangeScene(SCENE scene) {

	if (m_pScene != nullptr) {
		delete m_pScene;
	}
	switch (scene) {          
	case SCENE::TITLE:
		m_pScene = new TitleScene;
		break;
	case SCENE::MAIN:
		m_pScene = new MainScene;
		break;
	/*case SCENE::RESULT:
		m_pScene = new GameResultScene;
		break;
	case SCENE::GAME_OVER:
		m_pScene = new GameOverScene;
		break;
	case SCENE::GAME_CLEAR:
		m_pScene = new GameClearScene;
		break;*/
	}
	m_pScene->Initialize();
}

void SceneManager::Update() {
	m_pScene->Update();       
}

void SceneManager::Draw3D() {
	m_pScene->Draw3D();           
}

void SceneManager::DrawAlpha3D() {
	m_pScene->DrawAlpha3D();
}

void SceneManager::DrawEnd()
{
	m_pScene->DrawEnd();
}

void SceneManager::Draw2D() {
	m_pScene->Draw2D();
}
