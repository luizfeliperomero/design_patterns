#include <print>
#include <memory>
#include "duck/duck.h"
#include "src/strategy/fly/simple_fly_strategy.h"
#include "src/strategy/fly/elegant_fly_strategy.h"

int main() {
	auto duck = Duck(std::make_unique<SimpleFlyStrategy>());
	auto duck2 = Duck(std::make_unique<ElegantFlyStrategy>());
	auto duck3 = Duck(std::make_unique<ElegantFlyStrategy>());

	duck.Fly();
	duck2.Fly();
	duck3.Fly();
}
