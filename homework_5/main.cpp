#include <iostream>
#include <limits>
#include <memory>
#include "kerrostalo.h"

int main(void)
{
    {
        std::unique_ptr<Kerrostalo> kerrostalo = std::make_unique<Kerrostalo>();
        kerrostalo->laskeKulutus(1);
    }

    std::cout << "Press <RETURN> to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}
