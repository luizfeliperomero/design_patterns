#pragma once
#include "dessert.h"
#include <string>

class AmericanDessert : public Dessert {
	std::string name_;
	public:
		AmericanDessert(std::string name) : name_(name) {}
		std::string GetName() const override {
			return name_;
		}
};
