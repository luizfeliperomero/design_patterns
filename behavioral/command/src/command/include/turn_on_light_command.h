#pragma once

#include <memory>

#include "src/command/include/command.h"
#include "src/light_bulb/include/light_bulb.h"

class TurnOnLightCommand : public Command {
	private:
		std::shared_ptr<LightBulb> light_bulb_;
	public:
		TurnOnLightCommand(std::shared_ptr<LightBulb> bulb);

		void Execute() override;
		void Unexecute() override;
};
