#ifndef SRC_CHARGER_CHARGER_H_ 
#define SRC_CHARGER_CHARGER_H_ 

#include "interfaces/observable.h"
#include <string>

class Charger : public Observable<std::string> {
	public:
		std::string status_;
		std::string GetData() const override {
			return status_;
		}
		void Start() {
			status_ = "Started";
			Notify();
		}
		void Stop() {
			status_ = "Stopped";
			Notify();
		}
};

#endif
