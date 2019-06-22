#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday birthObj(9,9,1994);
    People p("Peter Lee", birthObj);
    p.printInfo();
    return 0;
}
