#include <memory>

#include "src/notifier/include/notifier.h"
#include "src/notifier/src/default_notifier.h"

std::unique_ptr<Notifier> Notifier::GetDefault() {
	return std::make_unique<DefaultNotifier>();
}
