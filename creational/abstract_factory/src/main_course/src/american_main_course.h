#pragma once

#include "main_course.h"
#include <string>

class AmericanMainCourse : public MainCourse {
	private:
		std::string name_;
	public:
		AmericanMainCourse(std::string name) : name_(name) {}
		virtual std::string GetName() const override {
			return name_;
		}
};
