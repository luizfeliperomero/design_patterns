#pragma once

#include "src/animal/include/animal.h"
#include <memory>

class AnimalFactory {
	public:
		virtual std::unique_ptr<Animal> CreateAnimal() = 0;
		virtual ~AnimalFactory() = default;
		static std::unique_ptr<AnimalFactory> GetRandomAnimalFactory();
};

