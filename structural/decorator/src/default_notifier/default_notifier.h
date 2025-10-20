#ifndef SRC_DEFAULT_NOTIFIER_DEFAULT_NOTIFIER_H_
#define SRC_DEFAULT_NOTIFIER_DEFAULT_NOTIFIER_H_

#include "include/interfaces/notifier.h"
#include <string>
#include <print>

class DefaultNotifier : public Notifier {
	public:
		void Notify(std::string message) override {
			std::println("{}", message);
		}
};

#endif
