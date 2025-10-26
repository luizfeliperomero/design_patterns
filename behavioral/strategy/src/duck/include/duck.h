#pragma once

#include "src/fly_strategy/include/fly_strategy.h"
#include <memory>

class Duck {
	public:
		explicit Duck(std::unique_ptr<FlyStrategy> fly_strategy);
		~Duck();
		void Fly();
	private:
		struct Impl;
		std::unique_ptr<Impl> pimpl_;
};
