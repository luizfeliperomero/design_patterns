#ifndef SRC_FACTORIES_BRAZILIAN_MEAL_FACTORY_H_
#define SRC_FACTORIES_BRAZILIAN_MEAL_FACTORY_H_

#include "include/interfaces/meal_factory.h"
#include "include/interfaces/main_course.h"
#include "include/interfaces/dessert.h"
#include "src/main_course/brazilian_main_course.h"
#include "src/dessert/brazilian_dessert.h"
#include <memory>

class BrazilianMealFactory : public MealFactory {
	public:
		std::unique_ptr<MainCourse> GetMainCourse() const override {
			return std::make_unique<BrazilianMainCourse>(std::string("Feijoada"));
		}	
		std::unique_ptr<Dessert> GetDessert() const override {
			return std::make_unique<BrazilianDessert>(std::string("Brigadeiro"));
		}	
};

#endif
