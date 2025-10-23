#include <memory>
#include <print>
#include <array>

#include "main_course/include/main_course.h"
#include "dessert/include/dessert.h"
#include "factories/include/meal_factory.h"

struct Meal {
	std::unique_ptr<MainCourse> main_course;
	std::unique_ptr<Dessert> dessert;
};

Meal GetMeal(const MealFactory& meal_factory) {
	Meal meal;
	meal.main_course = meal_factory.GetMainCourse();
	meal.dessert = meal_factory.GetDessert();
	return meal;
}

void PrintMeal(const Meal& meal) {
	std::println("Main Course: {}", meal.main_course->GetName());
	std::println("Dessert: {}", meal.dessert->GetName());
}

int main() {
	std::string separator = "========================";

    auto factories = std::to_array<std::unique_ptr<MealFactory>>({
			MealFactory::CreateAmerican(),
			MealFactory::CreateBrazilian(),
			MealFactory::CreateItalian(),
	});

    for (auto& factory_ptr : factories) {
        println("{}", separator);
        Meal meal = GetMeal(*factory_ptr);
        PrintMeal(meal);
    }
    println("{}", separator);
}
