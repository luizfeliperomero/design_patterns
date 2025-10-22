#ifndef INCLUDE_INTERFACES_MAIN_COURSE_H_
#define INCLUDE_INTERFACES_MAIN_COURSE_H_

#include <string>

class MainCourse {
	public:
		virtual ~MainCourse() = default;
		virtual std::string GetName() const = 0;
};

#endif
