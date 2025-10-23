#include "src/main_course/include/main_course.h"
#include "src/dessert/include/dessert.h"
#include "meal_factory.h"
#include <memory>

class AmericanMealFactory : public MealFactory {
	public:
		std::unique_ptr<MainCourse> GetMainCourse() const override {
			return MainCourse::CreateAmerican(std::string("Burger"));
		}	
		std::unique_ptr<Dessert> GetDessert() const override {
			return Dessert::CreateAmerican(std::string("Apple Pie"));
		}	
};
