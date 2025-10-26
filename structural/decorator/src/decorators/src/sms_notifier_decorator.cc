#include <string>

#include "src/decorators/include/sms_notifier_decorator.h"
#include "src/decorators/include/notifier_decorator.h"
#include "src/notifier/include/notifier.h"

SMSNotifierDecorator::SMSNotifierDecorator(Notifier& notifier) : NotifierDecorator(notifier) {}

void SMSNotifierDecorator::Notify(std::string message) {
	message += "SMS, ";
	notifier_.Notify(message);
}
