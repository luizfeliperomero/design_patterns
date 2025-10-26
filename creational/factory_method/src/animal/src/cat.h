#pragma once

#include "src/animal/include/animal.h"
#include <print>

class Cat : public Animal {
	public:
		void MakeNoise() override {
			std::println("Meow");
		}
};
