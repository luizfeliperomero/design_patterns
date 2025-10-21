#include "include/interfaces/animal.h"
#include "src/factories/random_animal_factory.h"

int main() {
	RandomAnimalFactory raf;
	for(int i = 0; i < 20; i++) {
		auto animal = raf.CreateAnimal();
		animal->MakeNoise();
	}
}
