#ifndef SRC_GUI_GUI_H_
#define SRC_GUI_GUI_H_

#include "interfaces/observer.h"
#include "interfaces/observable.h"
#include <print>

class GUI : public Observer<std::string> {
	public:
		explicit GUI(Observable<std::string>& observable) : Observer(observable) {}
		void Update() override {
			Display();
		}
		void Display() {
			std::println("Display: {}", observable_.GetData());	
		}
};

#endif
