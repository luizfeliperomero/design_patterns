#pragma once

#include "src/animal/include/animal.h"
#include <print>

class Dog : public Animal {
	public:
		void MakeNoise() override {
			std::println("Barking");
		}
};
