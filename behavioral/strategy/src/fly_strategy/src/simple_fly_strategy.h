#pragma once

#include <print>

#include "src/fly_strategy/include/fly_strategy.h"

class SimpleFlyStrategy : public FlyStrategy {
	public:
		void Fly() override {
			std::println("Simply flying");
		}
};
