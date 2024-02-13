#ifndef KATUTASO_H
#define KATUTASO_H

#include <memory>
#include "kerros.h"

class Katutaso : Kerros
{
public:
    Katutaso(void);
    void maaritaAsunnot(void) override;
    double laskeKulutus(double maara);
    ~Katutaso(void);
private:
    std::unique_ptr<Asunto> as1 = std::make_unique<Asunto>();
    std::unique_ptr<Asunto> as2 = std::make_unique<Asunto>();
};

#endif // KATUTASO_H
