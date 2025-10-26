#include <string>

#include "src/decorators/include/notifier_decorator.h"
#include "src/decorators/include/email_notifier_decorator.h"
#include "src/decorators/include/sms_notifier_decorator.h"

NotifierDecorator::NotifierDecorator(Notifier& notifier) : notifier_(notifier) {}

void NotifierDecorator::Notify(std::string message) {
	notifier_.Notify(message);
}
