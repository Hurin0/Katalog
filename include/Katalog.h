#pragma once
#include "samochod.h"
class Katalog
{
private:
    std::vector<samochod> fura;
public:
    Katalog();
    void wczytajListe();
    void wypiszListe();
    void dodajSamochod();
    void usunSamochod();
    void wyswietlJeden();
    void wyswietlenieWarunkowe();
    void posortuj();
};
