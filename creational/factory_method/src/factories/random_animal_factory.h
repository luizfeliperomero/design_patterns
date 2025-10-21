#ifndef SRC_FACTORIES_RANDOM_ANIMAL_FACTORY_H_
#define SRC_FACTORIES_RANDOM_ANIMAL_FACTORY_H_

#include "include/interfaces/animal_factory.h"
#include "include/interfaces/animal.h"
#include "src/cat/cat.h"
#include "src/dog/dog.h"
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
