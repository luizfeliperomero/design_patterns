#pragma once

#include "main_course.h"
#include <string>

class BrazilianMainCourse : public MainCourse {
	private:
		std::string name_;
	public:
		BrazilianMainCourse(std::string name) : name_(name) {}
		virtual std::string GetName() const override {
			return name_;
		}
};
