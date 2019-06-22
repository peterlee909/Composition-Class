#include "People.h"
#include "Birthday.h"
#include <iostream>

using namespace std;

People::People(string x, Birthday b)
:name(x), dateOfBirth(b) //member initializer must be used.
{
}

void People::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
