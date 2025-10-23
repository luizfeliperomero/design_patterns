#ifndef INCLUDE_INTERFACES_MAIN_COURSE_H_
#define INCLUDE_INTERFACES_MAIN_COURSE_H_

#include <string>
#include <memory>

class MainCourse {
	public:
		virtual ~MainCourse() = default;
		virtual std::string GetName() const = 0;
		static std::unique_ptr<MainCourse> CreateBrazilian(const std::string&);
		static std::unique_ptr<MainCourse> CreateItalian(const std::string&);
		static std::unique_ptr<MainCourse> CreateAmerican(const std::string&);
};

#endif
