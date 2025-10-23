#ifndef INCLUDE_INTERFACES_MEAL_FACTORY_H_
#define INCLUDE_INTERFACES_MEAL_FACTORY_H_

#include "src/main_course/include/main_course.h"
#include "src/dessert/include/dessert.h"
#include <memory>

class MealFactory {
	public:
		virtual ~MealFactory() = default;
		virtual std::unique_ptr<MainCourse> GetMainCourse() const = 0;
		virtual std::unique_ptr<Dessert> GetDessert() const = 0;
		static std::unique_ptr<MealFactory> CreateAmerican();
		static std::unique_ptr<MealFactory> CreateBrazilian();
		static std::unique_ptr<MealFactory> CreateItalian();
};

#endif
