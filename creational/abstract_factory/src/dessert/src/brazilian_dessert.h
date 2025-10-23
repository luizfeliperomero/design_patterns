#pragma once

#include "dessert.h"
#include <string>

class BrazilianDessert : public Dessert {
	std::string name_;
	public:
		BrazilianDessert(std::string name) : name_(name) {}
		std::string GetName() const override {
			return name_;
		}

};
