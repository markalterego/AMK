#include <iostream>
#include <limits>
#include <ios>
#include "chef.h"

const int vesi = 100;
const int jauhot = 250;

int main(void)
{
    // main.cpp is used as a test program
    // to run the Chef and ItalianChef objects

    {
    Chef chef("Jyrki");
    ItalianChef italianChef("Mario", vesi, jauhot);

    chef.makeSoup();
    chef.makeSalad();

    italianChef.makeSoup();
    italianChef.makeSalad();
    italianChef.makePasta(vesi, jauhot);
    std::cout << italianChef.getName() << std::endl;
    }

    std::cout << "Press <RETURN> to exit program...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}
