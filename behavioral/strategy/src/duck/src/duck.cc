#include <print>
#include <memory>

#include "src/duck/include/duck.h"
#include "src/fly_strategy/include/fly_strategy.h"

struct Duck::Impl {
	std::unique_ptr<FlyStrategy> fly_strategy_;
	void Fly() {
		fly_strategy_->Fly();
	}
};

Duck::Duck(std::unique_ptr<FlyStrategy> fly_strategy) 
	: pimpl_(std::make_unique<Impl>())
	  {
		  pimpl_->fly_strategy_ = std::move(fly_strategy);
	  }

Duck::~Duck() = default;

void Duck::Fly() {
	pimpl_->Fly();
}
