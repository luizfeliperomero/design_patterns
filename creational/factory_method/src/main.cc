#include "src/factories/include/animal_factory.h"

int main() {
	auto raf = AnimalFactory::GetRandomAnimalFactory();
	for(int i = 0; i < 20; i++) {
		auto animal = raf->CreateAnimal();
		animal->MakeNoise();
	}
}
