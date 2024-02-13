#include <iostream>
#include "katutaso.h"

// int vakioAsukasmaara, int vakioNeliot
// löytyvät kerros.h tiedostosta

Katutaso::Katutaso(void)
{
    std::cout << "Katutaso luotu" << std::endl;
}

void Katutaso::maaritaAsunnot(void)
{
    as1->maarita(vakioAsukasmaara, vakioNeliot);
    as2->maarita(vakioAsukasmaara, vakioNeliot);

    std::cout << "Katutason asunnot maaritetty vakioarvoilla asukkaita = " << vakioAsukasmaara << " nelioita = " << vakioNeliot << std::endl;
}

double Katutaso::laskeKulutus(double maara)
{
    double kulutus = 0;

    kulutus += as1->laskeKulutus(maara);
    kulutus += as2->laskeKulutus(maara);

    std::cout << "Katutason kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Katutaso::~Katutaso(void)
{   
    std::cout << "Katutaso tuhottu" << std::endl;
}
