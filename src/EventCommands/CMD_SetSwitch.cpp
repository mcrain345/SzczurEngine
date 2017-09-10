#include <Szczur/Events/Commands/CMD_SetSwitch.h>
#include <Szczur/System/Game.h>

namespace Szczur {
	CMD_SetSwitch::CMD_SetSwitch(int id, bool val) :EventCommand("SetSwitch") {
		this->id = id;
		this->val = val;
	}
	
	void CMD_SetSwitch::run() {
		Game::switches[id] = val;
	}
}
