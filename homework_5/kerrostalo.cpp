#include <iostream>
#include "kerrostalo.h"

Kerrostalo::Kerrostalo(void)
{
    std::cout << "Kerrostalo luotu" << std::endl;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double maara)
{
    double kulutus = 0;

    kulutus += eka->laskeKulutus(maara);
    kulutus += toka->laskeKulutus(maara);
    kulutus += kolmas->laskeKulutus(maara);

    std::cout << "Kerrostalon kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Kerrostalo::~Kerrostalo(void)
{
    std::cout << "Kerrostalo tuhottu" << std::endl;
}
