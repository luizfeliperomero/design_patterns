#include <memory>

#include "american_meal_factory.h"
#include "italian_meal_factory.h"
#include "brazilian_meal_factory.h"
#include "meal_factory.h"

std::unique_ptr<MealFactory> MealFactory::CreateAmerican() {
	return std::make_unique<AmericanMealFactory>();
}

std::unique_ptr<MealFactory> MealFactory::CreateBrazilian() {
	return std::make_unique<BrazilianMealFactory>();
}

std::unique_ptr<MealFactory> MealFactory::CreateItalian() {
	return std::make_unique<ItalianMealFactory>();
}
