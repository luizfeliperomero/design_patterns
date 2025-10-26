#include <string>
#include "src/notifier/include/notifier.h"
#include "src/decorators/include/email_notifier_decorator.h"
#include "src/decorators/include/sms_notifier_decorator.h"

int main() {
	std::string message = "Notify: ";
	auto default_notifier = Notifier::GetDefault();

	EmailNotifierDecorator email_notifier_decorator(*default_notifier);
	email_notifier_decorator.Notify(message);

	SMSNotifierDecorator sms_notifier_decorator(email_notifier_decorator);
	sms_notifier_decorator.Notify(message);
}
