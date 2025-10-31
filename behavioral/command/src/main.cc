#include <memory>

#include "src/light_bulb/include/light_bulb.h"
#include "src/command/include/turn_on_light_command.h"

int main() {
	auto bulb = std::make_shared<LightBulb>();
	TurnOnLightCommand command(bulb);	
	command.Execute();
	command.Unexecute();
}
