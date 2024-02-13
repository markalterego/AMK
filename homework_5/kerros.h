#ifndef KERROS_H
#define KERROS_H

#include <memory>
#include "asunto.h"

const int vakioAsukasmaara = 2;
const int vakioNeliot = 100;

class Kerros
{
public:
    Kerros(void);
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double maara);
    virtual ~Kerros(void);
private:
    std::unique_ptr<Asunto> as1 = std::make_unique<Asunto>();
    std::unique_ptr<Asunto> as2 = std::make_unique<Asunto>();
    std::unique_ptr<Asunto> as3 = std::make_unique<Asunto>();
    std::unique_ptr<Asunto> as4 = std::make_unique<Asunto>();
};

#endif // KERROS_H
