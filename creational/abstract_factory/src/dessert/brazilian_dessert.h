#ifndef SRC_DESSERT_BRAZILIAN_DESSERT_H_
#define SRC_DESSERT_BRAZILIAN_DESSERT_H_

#include "include/interfaces/dessert.h"
#include <string>

class BrazilianDessert : public Dessert {
	std::string name_;
	public:
		BrazilianDessert(std::string name) : name_(name) {}
		std::string GetName() const override {
			return name_;
		}

};

#endif
