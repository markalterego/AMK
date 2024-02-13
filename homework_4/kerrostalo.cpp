#include <iostream>
#include "kerrostalo.h"

const int vakioAsukasmaara = 2;
const int vakioNeliot = 100;

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
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
Kerros::Kerros(void)
{
    std::cout << "Kerros luotu" << std::endl;
}

void Kerros::maaritaAsunnot(void)
{
    as1.maarita(vakioAsukasmaara, vakioNeliot);
    as2.maarita(vakioAsukasmaara, vakioNeliot);
    as3.maarita(vakioAsukasmaara, vakioNeliot);
    as4.maarita(vakioAsukasmaara, vakioNeliot);

    std::cout << "Kerroksen asunnot maaritetty vakioarvoilla asukkaita = " << vakioAsukasmaara << " nelioita = " << vakioNeliot << std::endl;
}

double Kerros::laskeKulutus(double maara)
{
    double kulutus = 0;

    kulutus += as1.laskeKulutus(maara);
    kulutus += as2.laskeKulutus(maara);
    kulutus += as3.laskeKulutus(maara);
    kulutus += as4.laskeKulutus(maara);

    std::cout << "Kerroksen kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Kerros::~Kerros(void)
{
    std::cout << "Kerros tuhottu" << std::endl;
}
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
Katutaso::Katutaso(void)
{
    std::cout << "Katutaso luotu" << std::endl;
}

void Katutaso::maaritaAsunnot(void)
{
    as1.maarita(vakioAsukasmaara, vakioNeliot);
    as2.maarita(vakioAsukasmaara, vakioNeliot);

    std::cout << "Katutason asunnot maaritetty vakioarvoilla asukkaita = " << vakioAsukasmaara << " nelioita = " << vakioNeliot << std::endl;
}

double Katutaso::laskeKulutus(double maara)
{
    double kulutus = 0;

    kulutus += as1.laskeKulutus(maara);
    kulutus += as2.laskeKulutus(maara);

    std::cout << "Katutason kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Katutaso::~Katutaso(void)
{
    std::cout << "Katutaso tuhottu" << std::endl;
}
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
Kerrostalo::Kerrostalo(void)
{
    std::cout << "Kerrostalo luotu" << std::endl;

    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double maara)
{
    double kulutus = 0;

    kulutus += eka.laskeKulutus(maara);
    kulutus += toka.laskeKulutus(maara);
    kulutus += kolmas.laskeKulutus(maara);

    std::cout << "Kerrostalon kulutus, kun hinta on = " << maara << " on " << kulutus << std::endl;

    return kulutus;
}

Kerrostalo::~Kerrostalo(void)
{
    std::cout << "Kerrostalo tuhottu" << std::endl;
}
