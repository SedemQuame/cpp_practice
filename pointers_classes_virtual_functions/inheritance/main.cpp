#include <iostream>
#include "petType.h"

using namespace std;

int main()
{
    petType pet("Lucky");
    dogType dog("Tommy", "German Shepherd");

    pet.print();
    cout << endl;
    dog.print();

    cout << "*** Calling the function callPrint ***"
         << endl;
    callPrint(pet);
    cout << endl;
    callPrint(dog);
    cout << endl;

    return 0;
}