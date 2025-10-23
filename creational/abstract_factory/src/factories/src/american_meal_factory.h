#ifndef SRC_FACTORIES_AMERICAN_MEAL_FACTORY_H_
#define SRC_FACTORIES_AMERICAN_MEAL_FACTORY_H_

#include "include/interfaces/meal_factory.h"
#include "include/interfaces/main_course.h"
#include "include/interfaces/dessert.h"
#include "src/main_course/american_main_course.h"
#include "src/dessert/american_dessert.h"
#include <memory>

class AmericanMealFactory : public MealFactory {
	public:
		std::unique_ptr<MainCourse> GetMainCourse() const override {
			return std::make_unique<AmericanMainCourse>(std::string("Burger"));
		}	
		std::unique_ptr<Dessert> GetDessert() const override {
			return std::make_unique<AmericanDessert>(std::string("Apple Pie"));
		}	
};

#endif
