#ifndef INCLUDE_INTERFACES_NOTIFIER_DECORATOR_H_
#define INCLUDE_INTERFACES_NOTIFIER_DECORATOR_H_

#include "include/interfaces/notifier.h"
#include <string>

class NotifierDecorator : public Notifier {
	public:
		Notifier& notifier_;
		NotifierDecorator(Notifier& notifier) : notifier_(notifier) {}
		void Notify(std::string message) override {
			notifier_.Notify(message);
		}
};

#endif
