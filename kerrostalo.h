#ifndef KERROSTALO_H
#define KERROSTALO_H

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

class Kerros
{
public:
    Kerros(void);
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double maara);
    ~Kerros(void);
private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

class Katutaso : Kerros
{
public:
    Katutaso(void);
    void maaritaAsunnot(void);
    double laskeKulutus(double maara);
    ~Katutaso(void);
private:
    Asunto as1;
    Asunto as2;
};

class Kerrostalo
{
public:
    Kerrostalo(void);
    double laskeKulutus(double maara);
    ~Kerrostalo(void);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif // KERROSTALO_H
