#include <memory>

#include "src/light_bulb/include/light_bulb.h"
#include "src/command/include/turn_on_light_command.h"

struct Remote {
	std::shared_ptr<Command> turn_on_;
	void PressTurnOn() {
		turn_on_->Execute();
	}
	void UndoTurnOn() {
		turn_on_->Unexecute();
	}
};

int main() {
	auto bulb = std::make_shared<LightBulb>();
	auto command = std::make_shared<TurnOnLightCommand>(bulb);	
	Remote remote;
	remote.turn_on_ = command;

	remote.PressTurnOn();
	remote.UndoTurnOn();
}
