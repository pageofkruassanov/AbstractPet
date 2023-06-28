#pragma once
#include "Pet.h"
class Dog : public Pet
{
public:
	Dog(string name, string type, string sound) : Pet{ name, sound, type } {};
	void Show() override;
	void Sound() override;
	void Type() override;
};

