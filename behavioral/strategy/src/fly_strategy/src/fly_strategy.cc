#include <memory>

#include "src/fly_strategy/include/fly_strategy.h"
#include "src/fly_strategy/src/elegant_fly_strategy.h"
#include "src/fly_strategy/src/simple_fly_strategy.h"

std::unique_ptr<FlyStrategy> FlyStrategy::GetElegant() {
	return std::make_unique<ElegantFlyStrategy>();
}

std::unique_ptr<FlyStrategy> FlyStrategy::GetSimple() {
	return std::make_unique<SimpleFlyStrategy>();
}
