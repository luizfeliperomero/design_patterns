#ifndef DUCK_ELEGANT_FLY_STRATEGY_H_
#define DUCK_ELEGANT_FLY_STRATEGY_H_

#include "fly_strategy.h"
#include <print>

class ElegantFlyStrategy : public FlyStrategy {
	public:
		void Fly() override {
			std::println("Elegantly flying");
		}
};

#endif
