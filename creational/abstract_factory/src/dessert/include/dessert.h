#ifndef INCLUDE_INTERFACES_DESSERT_H_
#define INCLUDE_INTERFACES_DESSERT_H_

#include <string>

class Dessert {
	public:
		virtual ~Dessert() = default;
		virtual std::string GetName() const = 0;
};

#endif
