#ifndef SRC_DESSERT_AMERICAN_DESSERT_H_
#define SRC_DESSERT_AMERICAN_DESSERT_H_

#include "include/interfaces/dessert.h"
#include <string>

class AmericanDessert : public Dessert {
	std::string name_;
	public:
		AmericanDessert(std::string name) : name_(name) {}
		std::string GetName() const override {
			return name_;
		}

};

#endif
