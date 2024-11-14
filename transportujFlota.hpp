#pragma once
using namespace std;
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{

    if (towar == 0) return 0;

    unsigned int sumTransport =0;
    unsigned int liczbaZaglowcow = 0;
    while (sumTransport < towar){
        Stocznia stocznia{};
        Statek* s1 = stocznia();  
        unsigned int przetransportowane = s1->transportuj();
        sumTransport +=przetransportowane;

        if (dynamic_cast<Zaglowiec*>(s1) != nullptr){
            ++liczbaZaglowcow;
        }
        delete s1;
    }
    
    
    return liczbaZaglowcow;
}
