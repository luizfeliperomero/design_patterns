#ifndef INTERFACES_OBSERVABLE_H_
#define INTERFACES_OBSERVABLE_H_

#include <vector>
#include <algorithm>
#include <functional>
#include "observer.h"

template <typename T>
class Observable {
	public:
		std::vector<std::reference_wrapper<Observer<T>>> observers_;
		virtual void Notify();
		virtual void AddObserver(Observer<T>& observer);
		virtual T GetData() const = 0;
		/*void RemoveObserver(Observer* observer) {
			auto it = std::remove_if(
				observers_.begin(), observers_.end(),
				[&](const std::unique_ptr<Observer>& ptr) { return ptr.get() == observer; });
			observers_.erase(it, observers_.end());
		}*/
};

#include "observable.tpp"

#endif
