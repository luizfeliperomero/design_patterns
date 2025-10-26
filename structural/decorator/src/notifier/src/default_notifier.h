#pragma once

#include <string>
#include <print>

#include "src/notifier/include/notifier.h"

class DefaultNotifier : public Notifier {
	public:
		void Notify(std::string message) override {
			std::println("{}", message);
		}
};
