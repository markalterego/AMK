#include <iostream>
#include "kerros.h"

Kerros::Kerros(void)
{
    std::cout << "Kerros luotu" << std::endl;
}

void Kerros::maaritaAsunnot(void)
{
    as1->maarita(vakioAsukasmaara, vakioNeliot);
    as2->maarita(vakioAsukasmaara, vakioNeliot);
    as3->maarita(vakioAsukasmaara, vakioNeliot);
    as4->maarita(vakioAsukasmaara, vakioNeliot);

    std::cout << "Kerroksen asunnot maaritetty vakioarvoilla asukkaita = " << vakioAsukasmaara << " nelioita = " << vakioNeliot << std::endl;
}

double Kerros::laskeKulutus(double maara)
{
    double kulutus = 0;

    kulutus += as1->laskeKulutus(maara);
    kulutus += as2->laskeKulutus(maara);
    kulutus += as3->laskeKulutus(maara);
    kulutus += as4->laskeKulutus(maara);

    std::cout << "Kerroksen kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Kerros::~Kerros(void)
{
    std::cout << "Kerros tuhottu" << std::endl;
}
