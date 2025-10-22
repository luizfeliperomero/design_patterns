#ifndef INCLUDE_INTERFACES_ANIMAL_H_
#define INCLUDE_INTERFACES_ANIMAL_H_

class Animal {
	protected:
		explicit Animal() = default;
	public:
		virtual ~Animal() = default;
		virtual void MakeNoise() = 0;
};

#endif
