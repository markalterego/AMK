#include <iostream>
#include <limits>
#include "kerrostalo.h"

int main()
{
    {
    Kerrostalo kerrostalo;
    kerrostalo.laskeKulutus(1);
    }

    std::cout << "Press <RETURN> to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}
