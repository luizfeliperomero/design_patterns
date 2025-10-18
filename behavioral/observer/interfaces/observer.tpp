#include "interfaces/observer.h"
#include "observable.h"

template <typename T>
Observer<T>::Observer(Observable<T>& observable) : observable_(observable) {
	observable_.AddObserver(*this);
}
