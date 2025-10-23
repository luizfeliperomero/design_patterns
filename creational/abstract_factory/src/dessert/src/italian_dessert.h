#pragma once

#include "dessert.h"
#include <string>

class ItalianDessert : public Dessert {
	std::string name_;
	public:
		ItalianDessert(std::string name) : name_(name) {}
		std::string GetName() const override {
			return name_;
		}

};
