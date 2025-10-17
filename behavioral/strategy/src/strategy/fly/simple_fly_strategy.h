#ifndef DUCK_SIMPLE_FLY_STRATEGY_H_
#define DUCK_SIMPLE_FLY_STRATEGY_H_

#include "fly_strategy.h"
#include <print>

class SimpleFlyStrategy : public FlyStrategy {
	public:
		void Fly() override {
			std::println("Simply flying");
		}
};

#endif
