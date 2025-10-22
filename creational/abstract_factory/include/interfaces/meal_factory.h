#ifndef INCLUDE_INTERFACES_MEAL_FACTORY_H_
#define INCLUDE_INTERFACES_MEAL_FACTORY_H_

#include "include/interfaces/main_course.h"
#include "include/interfaces/dessert.h"
#include <memory>

class MealFactory {
	public:
		virtual ~MealFactory() = default;
		virtual std::unique_ptr<MainCourse> GetMainCourse() const = 0;
		virtual std::unique_ptr<Dessert> GetDessert() const = 0;
};

#endif
