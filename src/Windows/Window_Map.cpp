#include <Szczur/Map/MapManager.h>
#include <Windows/Window_Map.h>
#include <Windows/Window_Menu.h>

namespace Szczur {
	Window_Map::Window_Map() {
		MapManager::Init();
		SetActive();
	}
	
	void Window_Map::Refresh() {
		MapManager::DrawBack();
		
		player.Draw();
		
		MapManager::DrawFront();
	}
	
	void Window_Map::OnKeyPress(Input::Key key) {
		if (key == Input::KEY_Escape) new Window_Menu();
	}
	
	void Window_Map::OnLostActive() {
		player.lockMove = true;
	}
	
	void Window_Map::OnGainActive() {
		player.lockMove = false;
	}
	
	void Window_Map::OnClosed() {
		MapManager::Close();
	}
}
