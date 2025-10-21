#ifndef INCLUDE_INTERFACES_ANIMAL_H_
#define INCLUDE_INTERFACES_ANIMAL_H_

class Animal {
	public:
		virtual ~Animal() = default;
		virtual void MakeNoise() = 0;
};

#endif
