#ifndef INCLUDE_INTERFACES_ANIMAL_FACTORY_H_
#define INCLUDE_INTERFACES_ANIMAL_FACTORY_H_

#include "include/interfaces/animal.h"
#include <memory>

class AnimalFactory {
	public:
		virtual std::unique_ptr<Animal> CreateAnimal() = 0;
		virtual ~AnimalFactory() = default;
};

#endif
