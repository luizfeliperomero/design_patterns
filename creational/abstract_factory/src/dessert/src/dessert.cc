#include <memory>

#include "american_dessert.h"
#include "brazilian_dessert.h"
#include "italian_dessert.h"
#include "dessert.h"

std::unique_ptr<Dessert> Dessert::CreateAmerican(const std::string &name) {
	return std::make_unique<AmericanDessert>(name);
}

std::unique_ptr<Dessert> Dessert::CreateBrazilian(const std::string &name) {
	return std::make_unique<BrazilianDessert>(name);
}

std::unique_ptr<Dessert> Dessert::CreateItalian(const std::string &name) {
	return std::make_unique<ItalianDessert>(name);
}
