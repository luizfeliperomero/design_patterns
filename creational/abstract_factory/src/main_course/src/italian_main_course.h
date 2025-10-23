#ifndef SRC_MAIN_COURSE_ITALIAN_MAIN_COURSE_H_
#define SRC_MAIN_COURSE_ITALIAN_MAIN_COURSE_H_

#include "include/interfaces/main_course.h"
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

#endif
