#pragma once
#include <iostream>
using namespace std;
class Pet
{
protected:
	string name;
	string sound;
	string type;
public:
	Pet(string name, string sound, string type) : name{ name }, sound{ sound }, type{ type } {};
	virtual void Show();
	virtual void Type();
	virtual void Sound();
};

