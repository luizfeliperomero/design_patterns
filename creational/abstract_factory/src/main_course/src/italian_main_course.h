#pragma once

#include "main_course.h"
#include <string>

class ItalianMainCourse : public MainCourse {
	private:
		std::string name_;
	public:
		ItalianMainCourse(std::string name) : name_(name) {}
		virtual std::string GetName() const override {
			return name_;
		}
};
