#pragma once

#include <vector>
#include <algorithm>
#include <functional>
#include "observer.h"

template <typename T>
class Observable {
	public:
		std::vector<std::reference_wrapper<Observer<T>>> observers_;
		void Notify() {
			for(auto& observer : observers_) {
				observer.get().Update();
			}
		}
		void AddObserver(Observer<T>& observer) {
			observers_.push_back(observer);
		}
		virtual T GetData() const = 0;
		/*void RemoveObserver(Observer* observer) {
			auto it = std::remove_if(
				observers_.begin(), observers_.end(),
				[&](const std::unique_ptr<Observer>& ptr) { return ptr.get() == observer; });
			observers_.erase(it, observers_.end());
		}*/
};
