#ifndef SRC_FACTORIES_RANDOM_ANIMAL_FACTORY_H_
#define SRC_FACTORIES_RANDOM_ANIMAL_FACTORY_H_

#include "src/factories/include/animal_factory.h"
#include "src/animal/include/animal.h"
#include "src/animal/src/cat.h"
#include "src/animal/src/dog.h"
#include <cstdlib>
#include <memory>

class RandomAnimalFactory : public AnimalFactory {
	public:
		std::unique_ptr<Animal> CreateAnimal() override {
			if(rand() % 2 == 0) {
				return std::make_unique<Dog>();
			}
			return std::make_unique<Cat>();
		}
};


#endif
