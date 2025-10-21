#ifndef SRC_DOG_DOG_H_
#define SRC_DOG_DOG_H_

#include "include/interfaces/animal.h"
#include <print>

class Dog : public Animal {
	public:
		void MakeNoise() override {
			std::println("Barking");
		}
};

#endif
