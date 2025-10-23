#ifndef SRC_MAIN_COURSE_BRAZILIAN_MAIN_COURSE_H_
#define SRC_MAIN_COURSE_BRAZILIAN_MAIN_COURSE_H_

#include "include/interfaces/main_course.h"
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

#endif
