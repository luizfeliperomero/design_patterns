#pragma once

class Animal {
	protected:
		explicit Animal() = default;
	public:
		virtual ~Animal() = default;
		virtual void MakeNoise() = 0;
};
