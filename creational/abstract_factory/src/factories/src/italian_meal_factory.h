#ifndef SRC_FACTORIES_ITALIAN_MEAL_FACTORY_H_
#define SRC_FACTORIES_ITALIAN_MEAL_FACTORY_H_

#include "include/interfaces/meal_factory.h"
#include "include/interfaces/main_course.h"
#include "include/interfaces/dessert.h"
#include "src/main_course/italian_main_course.h"
#include "src/dessert/italian_dessert.h"
#include <memory>

class ItalianMealFactory : public MealFactory {
	public:
		std::unique_ptr<MainCourse> GetMainCourse() const override {
			return std::make_unique<ItalianMainCourse>(std::string("Pizza"));
		}	
		std::unique_ptr<Dessert> GetDessert() const override {
			return std::make_unique<ItalianDessert>(std::string("Gelatto"));
		}	
};

#endif
