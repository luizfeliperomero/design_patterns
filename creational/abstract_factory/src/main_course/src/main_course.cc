#include <memory>
#include <string>

#include "american_main_course.h"
#include "brazilian_main_course.h"
#include "italian_main_course.h"
#include "main_course.h"

std::unique_ptr<MainCourse> MainCourse::CreateAmerican(const std::string &name) {
	return std::make_unique<AmericanMainCourse>(name);
}

std::unique_ptr<MainCourse> MainCourse::CreateBrazilian(const std::string &name) {
	return std::make_unique<BrazilianMainCourse>(name);
}

std::unique_ptr<MainCourse> MainCourse::CreateItalian(const std::string &name) {
	return std::make_unique<ItalianMainCourse>(name);
}
