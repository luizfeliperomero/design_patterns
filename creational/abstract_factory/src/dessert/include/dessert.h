#ifndef INCLUDE_INTERFACES_DESSERT_H_
#define INCLUDE_INTERFACES_DESSERT_H_

#include <string>
#include <memory>

class Dessert {
	public:
		virtual ~Dessert() = default;
		virtual std::string GetName() const = 0;
		static std::unique_ptr<Dessert> CreateAmerican(const std::string&);
		static std::unique_ptr<Dessert> CreateBrazilian(const std::string&);
		static std::unique_ptr<Dessert> CreateItalian(const std::string&);
};

#endif
