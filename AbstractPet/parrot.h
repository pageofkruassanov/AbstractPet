#pragma once
#include "Pet.h"
class parrot : public Pet
{
public:
	parrot(string name, string type, string sound) : Pet{ name, sound, type } {};
	void Show() override;
	void Sound() override;
	void Type() override;
};

