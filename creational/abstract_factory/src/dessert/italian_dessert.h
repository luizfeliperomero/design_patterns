#ifndef SRC_DESSERT_ITALIAN_DESSERT_H_
#define SRC_DESSERT_ITALIAN_DESSERT_H_

#include "include/interfaces/dessert.h"
#include <string>

class ItalianDessert : public Dessert {
	std::string name_;
	public:
		ItalianDessert(std::string name) : name_(name) {}
		std::string GetName() const override {
			return name_;
		}

};

#endif
