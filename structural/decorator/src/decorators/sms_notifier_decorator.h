#ifndef SRC_DECORATORS_SMS_NOTIFIER_DECORATOR_H_
#define SRC_DECORATORS_SMS_NOTIFIER_DECORATOR_H_

#include <string>
#include "src/decorators/notifier_decorator.h"
#include "include/interfaces/notifier.h"

class SMSNotifierDecorator : public NotifierDecorator {
	public:
		SMSNotifierDecorator(Notifier& notifier) : NotifierDecorator(notifier) {}
		void Notify(std::string message) override {
			message += "SMS, ";
			notifier_.Notify(message);
		}
};

#endif
