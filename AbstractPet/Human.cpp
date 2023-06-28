#include "Human.h"

void Human::ShowPets(Pet* pet)
{
	cout << "My pets: ";
	pet->Show();
	pet->Sound();
	pet->Type();
}
