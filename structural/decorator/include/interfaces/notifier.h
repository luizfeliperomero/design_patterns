#ifndef INCLUDE_INTERFACES_NOTIFIER_H_
#define INCLUDE_INTERFACES_NOTIFIER_H_

#include <string>

class Notifier {
	public:
		virtual void Notify(std::string message) = 0;
		virtual ~Notifier() = default;
};

#endif
