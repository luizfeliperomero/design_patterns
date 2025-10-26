#include "src/factories/include/animal_factory.h"
#include "src/factories/src/random_animal_factory.h"

std::unique_ptr<AnimalFactory> AnimalFactory::GetRandomAnimalFactory() {
	return std::make_unique<RandomAnimalFactory>();
}
