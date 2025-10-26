#include <string>

#include "src/decorators/include/notifier_decorator.h"
#include "src/decorators/include/email_notifier_decorator.h"
#include "src/notifier/include/notifier.h"

EmailNotifierDecorator::EmailNotifierDecorator(Notifier& notifier) : NotifierDecorator(notifier) {}

void EmailNotifierDecorator::Notify(std::string message) {
	message += "Email, ";
	notifier_.Notify(message);
}
