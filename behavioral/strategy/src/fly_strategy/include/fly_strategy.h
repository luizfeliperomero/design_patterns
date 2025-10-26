#pragma once

#include <memory>

class FlyStrategy {
	public:
		FlyStrategy() = default;
		virtual void Fly() = 0;
		static std::unique_ptr<FlyStrategy> GetElegant();
		static std::unique_ptr<FlyStrategy> GetSimple();
};
