#pragma once

template <typename T>
class Observable;

template <typename T>
class Observer {
	protected:
		Observable<T>& observable_;
	public:
		explicit Observer(Observable<T>& observable) : observable_(observable) {
			observable_.AddObserver(*this);
		}
		virtual void Update() = 0;
};
