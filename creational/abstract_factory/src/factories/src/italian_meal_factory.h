#include "src/main_course/include/main_course.h"
#include "src/dessert/include/dessert.h"
#include "meal_factory.h"
#include <memory>

class ItalianMealFactory : public MealFactory {
	public:
		std::unique_ptr<MainCourse> GetMainCourse() const override {
			return MainCourse::CreateItalian(std::string("Pizza"));
		}	
		std::unique_ptr<Dessert> GetDessert() const override {
			return Dessert::CreateItalian(std::string("Gelatto"));
		}	
};
