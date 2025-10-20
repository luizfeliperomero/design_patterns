#include <string>
#include "src/default_notifier/default_notifier.h"
#include "src/decorators/email_notifier_decorator.h"
#include "src/decorators/sms_notifier_decorator.h"

int main() {
	std::string message = "Notify: ";
	DefaultNotifier default_notifier;

	EmailNotifierDecorator email_notifier_decorator(default_notifier);
	email_notifier_decorator.Notify(message);

	SMSNotifierDecorator sms_notifier_decorator(email_notifier_decorator);
	sms_notifier_decorator.Notify(message);
}
