#include "samochod.h"

samochod::samochod()
{
}

void samochod::setMarka(const std::string& marrr)
{
    this->marka=marrr;
}
void samochod::setModel(const std::string& moddd)
{
    this->model=moddd;
}
void samochod::setPojemnosc(double pojjj)
{
    this->pojemnosc=pojjj;
}
void samochod::setPrzebieg(int przzz)
{
    this->przebieg=przzz;
}
void samochod::setRocznik(int roccc)
{
    this->rocznik=roccc;
}
void samochod::setTyp_skrzyni(const std::string& typpp)
{
    this->typ_skrzyni=typpp;
}
samochod::samochod(const std::string m,const std::string mo, int r, double p, int prz,const  std::string t)
{
    setMarka(m);
    setModel(mo);
    setRocznik(r);
    setPojemnosc(p);
    setPrzebieg(prz);
    setTyp_skrzyni(t);
}

std::ostream& operator<< (std::ostream& wyjscie,const  samochod& s)
{
    return wyjscie<< "\nModel: " << s.model << "\nMarka: " << s.marka << "\nRocznik: "<< s.rocznik << "\nPojemnosc silnika: "<< s.pojemnosc<<"\nPrzebieg: "<<s.przebieg<<"\nTyp skrzyni: "<< s.typ_skrzyni<<std::endl;
}

std::string samochod::getMarka ()
{
    return marka;
}

std::string samochod::getModel ()
{
    return model;
}

int samochod::getRocznik ()
{
    return rocznik;
}

double samochod::getPojemnosc ()
{
    return pojemnosc;
}

int samochod::getPrzebieg ()
{
    return przebieg;
}

std::string samochod::getTypSkrzyni ()
{
    return typ_skrzyni;
}
