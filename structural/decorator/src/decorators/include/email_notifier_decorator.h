#pragma once

#include <string>

#include "src/decorators/include/notifier_decorator.h"
#include "src/notifier/include/notifier.h"

class EmailNotifierDecorator : public NotifierDecorator {
	public:
		EmailNotifierDecorator(Notifier& notifier);
		void Notify(std::string message) override;
};
