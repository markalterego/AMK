#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef
{
public:
    Chef(std::string s);
    void makeSalad(void);
    void makeSoup(void);
    ~Chef(void);
protected:
    std::string name;
};

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string s, int v, int j);
    std::string getName(void);
    void makePasta(int v, int j);
    ~ItalianChef(void);
private:
    int vesi;
    int jauhot;
};

#endif // CHEF_H
