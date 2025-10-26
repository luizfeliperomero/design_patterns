#pragma once

#include <memory>

#include "src/observer/include/observable.h"

class GUI : public Observer<std::string> {
	public:
		explicit GUI(Observable<std::string>& observable);
		~GUI();
		void Update();
	private:
		struct Impl;
		std::unique_ptr<Impl> pimpl_;
		void Display();
};
