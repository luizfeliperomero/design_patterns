#pragma once

#include <memory>
#include "src/observer/include/observable.h"

class Charger : public Observable<std::string> {
	public:
		Charger();
		~Charger();
		std::string GetData() const override;
		void Start();
		void Stop();
	private:
		struct Impl;
		std::unique_ptr<Impl> pimpl_;
};
