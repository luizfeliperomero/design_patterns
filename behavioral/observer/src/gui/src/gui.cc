#include <print>
#include <string>

#include "src/gui/include/gui.h"
#include "src/observer/include/observer.h"
#include "src/observer/include/observable.h"

struct GUI::Impl {
	void Display(const std::string& data) {
		std::println("Display: {}", data);	
	}
};

GUI::GUI(Observable<std::string>& observable) 
	: Observer(observable), pimpl_(std::make_unique<Impl>()) {}

GUI::~GUI() = default;

void GUI::Update() {
	Display();
}

void GUI::Display() {
	pimpl_->Display(observable_.GetData());
}
