#pragma once
#include "Pet.h"
class Cat : public Pet
{
public:
	Cat(string name, string type, string sound) : Pet{ name, sound, type } {};
	void Show() override;
	void Sound() override;
	void Type() override;
};

