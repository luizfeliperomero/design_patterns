#include <memory>

#include "src/command/include/turn_on_light_command.h"

TurnOnLightCommand::TurnOnLightCommand(std::shared_ptr<LightBulb> bulb) 
	: light_bulb_(bulb) {}

void TurnOnLightCommand::Execute() {
	light_bulb_->TurnOn();
}

void TurnOnLightCommand::Unexecute() {
	light_bulb_->TurnOff();
}
