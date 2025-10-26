#pragma once

#include <string>

#include "src/notifier/include/notifier.h"

class NotifierDecorator : public Notifier {
	public:
		Notifier& notifier_;
		NotifierDecorator(Notifier& notifier);
		void Notify(std::string message) override;
};
