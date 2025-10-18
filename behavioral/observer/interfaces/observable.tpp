#include "interfaces/observable.h"

template <typename T>
void Observable<T>::Notify() {
	for(auto& observer : observers_) {
		observer.get().Update();
	}
}

template <typename T>
void Observable<T>::AddObserver(Observer<T>& observer) {
	observers_.push_back(observer);
}
