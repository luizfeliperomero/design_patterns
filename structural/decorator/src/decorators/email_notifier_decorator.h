#ifndef SRC_DECORATORS_EMAIL_NOTIFIER_DECORATOR_H_
#define SRC_DECORATORS_EMAIL_NOTIFIER_DECORATOR_H_

#include <string>
#include "src/decorators/notifier_decorator.h"
#include "include/interfaces/notifier.h"

class EmailNotifierDecorator : public NotifierDecorator {
	public:
		EmailNotifierDecorator(Notifier& notifier) : NotifierDecorator(notifier) {}
		void Notify(std::string message) override {
			message += "Email, ";
			notifier_.Notify(message);
		}
};

#endif
