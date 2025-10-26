#include <print>
#include <memory>

#include "src/duck/include/duck.h"
#include "src/fly_strategy/include/fly_strategy.h"

int main() {
	auto duck = Duck(FlyStrategy::GetSimple());
	auto duck2 = Duck(FlyStrategy::GetElegant());
	auto duck3 = Duck(FlyStrategy::GetElegant());

	duck.Fly();
	duck2.Fly();
	duck3.Fly();
}
