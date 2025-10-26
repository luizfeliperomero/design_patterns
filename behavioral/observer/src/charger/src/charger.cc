#include <string>
#include <memory>
#include "src/charger/include/charger.h"

struct Charger::Impl {
	std::string status_;

	void SetStatus(const std::string &status) {
		status_ = status;
	}
};

Charger::Charger() : pimpl_(std::make_unique<Impl>()) {
	pimpl_->SetStatus("Idle");
}

Charger::~Charger() = default;

void Charger::Start() {
	pimpl_->SetStatus("Running");
	Notify();
}
void Charger::Stop() {
	pimpl_->SetStatus("Stopped");
	Notify();
}

std::string Charger::GetData() const {
	return pimpl_->status_;
}
