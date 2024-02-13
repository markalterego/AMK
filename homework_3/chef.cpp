#include <iostream>
#include "chef.h"

Chef::Chef(std::string s)
{
    name = s;
    std::cout << "Chef " << name << " constructor" << std::endl;
}

void Chef::makeSalad(void)
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup(void)
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

Chef::~Chef(void)
{
    std::cout << "Chef " << name << " destructor" << std::endl;
}

ItalianChef::ItalianChef(std::string s, int v, int j) : Chef(s)
{
    std::cout << "Chef " << name << " constructor" << std::endl;
    vesi = v;
    jauhot = j;
}

std::string ItalianChef :: getName(void)
{
    return name;
}

void ItalianChef :: makePasta(int v, int j)
{
    std::cout << "Chef " << getName() << " makes pasta with special recipe" << std::endl;
    std::cout << "Chef " << getName() << " uses jauhot = " << jauhot << std::endl;
    std::cout << "Chef " << getName() << " uses vesi = " << vesi << std::endl;
}

ItalianChef::~ItalianChef(void)
{
    std::cout << "Chef " << getName() << " destructor" << std::endl;
}






