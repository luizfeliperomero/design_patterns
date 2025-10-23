#include "src/main_course/include/main_course.h"
#include "src/dessert/include/dessert.h"
#include "meal_factory.h"
#include <memory>

class BrazilianMealFactory : public MealFactory {
	public:
		std::unique_ptr<MainCourse> GetMainCourse() const override {
			return MainCourse::CreateBrazilian(std::string("Feijoada"));
		}	
		std::unique_ptr<Dessert> GetDessert() const override {
			return Dessert::CreateBrazilian(std::string("Brigadeiro"));
		}	
};
