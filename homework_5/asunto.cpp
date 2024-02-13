#include <iostream>
#include "asunto.h"

Asunto::Asunto(void)
{
    std::cout << "Asunto luotu" << std::endl;
}

void Asunto::maarita(int asukkaat, int neliomaara)
{
    asukasMaara = asukkaat;
    neliot = neliomaara;

    std::cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << std::endl;
}

double Asunto::laskeKulutus(double maara)
{
    double kulutus = maara*200;

    std::cout << "Asunnon kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Asunto::~Asunto(void)
{
    std::cout << "Asunto tuhottu" << std::endl;
}
