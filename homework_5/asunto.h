#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto
{
public:
    Asunto(void);
    int asukasMaara;
    int neliot;

    void maarita(int asukkaat, int neliomaara);
    double laskeKulutus(double maara);
    ~Asunto(void);
};

#endif // ASUNTO_H
