#ifndef SRC_MAIN_COURSE_AMERICAN_MAIN_COURSE_H_
#define SRC_MAIN_COURSE_AMERICAN_MAIN_COURSE_H_

#include "include/interfaces/main_course.h"
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

#endif
