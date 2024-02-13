#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo(void);
    double laskeKulutus(double maara);
    ~Kerrostalo(void);
private:
    std::unique_ptr<Katutaso> eka = std::make_unique<Katutaso>();
    std::unique_ptr<Kerros> toka = std::make_unique<Kerros>();
    std::unique_ptr<Kerros> kolmas = std::make_unique<Kerros>();
};

#endif // KERROSTALO_H
