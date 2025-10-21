#ifndef SRC_CAT_CAT_H_
#define SRC_CAT_CAT_H_

#include "include/interfaces/animal.h"
#include <print>

class Cat : public Animal {
	public:
		void MakeNoise() override {
			std::println("Meow");
		}
};

#endif
