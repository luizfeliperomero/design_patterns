#ifndef DUCK_DUCK_H_ 
#define DUCK_DUCK_H_ 

#include <print>
#include "src/strategy/fly/fly_strategy.h"
#include <memory>

class Duck {
	private:
		std::unique_ptr<FlyStrategy> fly_strategy_;
	public:
		explicit Duck(std::unique_ptr<FlyStrategy> fly_strategy) : fly_strategy_(std::move(fly_strategy)) {}
		void Fly() {
			fly_strategy_->Fly();
		}
};

#endif
