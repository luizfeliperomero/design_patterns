#ifndef INTERFACES_OBSERVER_H_
#define INTERFACES_OBSERVER_H_

template <typename T>
class Observable;

template <typename T>
class Observer {
	protected:
		Observable<T>& observable_;
	public:
		explicit Observer(Observable<T>& observable);
		virtual void Update() = 0;
};

#include "observer.tpp"

#endif
