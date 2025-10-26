#pragma once

#include <print>

#include "src/fly_strategy/include/fly_strategy.h"

class ElegantFlyStrategy : public FlyStrategy {
	public:
		void Fly() override {
			std::println("Elegantly flying");
		}
};
