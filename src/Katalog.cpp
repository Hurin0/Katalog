#include "Katalog.h"
Katalog::Katalog()
{

}
void Katalog::wczytajListe()
{

    std::string mar;
    std::string mod;
    int rocz;
    double poj;
    int przeb;
    std::string wtf;
    std::string typ_;
    std::string help;
    std::ifstream plik;
    plik.open("lista.txt", std::ios::in | std::ios::out);

    if (plik.is_open())
    {

        while (!plik.eof())
        {

            std::getline(plik, mar);
            std::getline(plik, mod);
            plik>>rocz;
            plik>>poj;
            plik>>przeb;
            std::getline(plik, wtf);
            std::getline(plik, typ_);
            std::getline(plik, help);
            fura.push_back(samochod(mar, mod, rocz, poj, przeb, typ_));
        }
    }
    else
    {
        std::cout<<" BLAD OTWARCIA PLIKU"<<std::endl;
    }
    plik.close();
}

void Katalog::wypiszListe()
{
    for (int i=0; i<fura.size(); ++i)
    {

        std::cout<<"Pozycja: "<<i+1;
		std::cout << fura[i]<<std::endl;
    }
}
void Katalog::dodajSamochod()
{
    std::string mar;
    std::string mod;
    int rocz;
    double poj;
    int przeb;
    std::string wtf;
    std::string typ_;
    std::string help;
    std::ofstream plik;
    plik.open("lista.txt", std::ios::in | std::ios::out | std::ios_base::app);


    std::cout<<"Marka dodawanego samochodu: "<<std::endl;
    std::getline(std::cin,mar);
    std::cout<<"Model dodawanego samochodu: "<<std::endl;
    std::getline(std::cin, mod);
    std::cout<<"Rocznik dodawanego samochodu: "<<std::endl;
    std::cin>>rocz;
    std::cin.get();
    std::cout<<"Pojemnosc silnika dodawanego samochodu w litrach: "<<std::endl;
    std::cin>>poj;
    std::cin.get();
    std::cout<<"Przebieg dodawanego samochodu w kilometrach: "<<std::endl;
    std::cin>>przeb;
    std::cin.get();
    std::cout<<"Typ skrzyni biegow dodawanego samochodu: "<<std::endl;
    std::getline(std::cin, typ_);
    plik<<std::endl<<mar<<std::endl;
    plik<<mod<<std::endl;
    plik<<rocz<<std::endl;
    plik<<poj<<std::endl;
    plik<<przeb<<std::endl;
    plik<<typ_<<std::endl;
    help="--------------";
    plik<<help;
    fura.push_back(samochod(mar, mod, rocz, poj, przeb, typ_));
    plik.close();
}

void Katalog::wyswietlJeden()
{
    int ktory;
    std::cout<<"Ktory samochod chcesz zobaczyc? Wybierz numer: "<<std::endl;
    std::cin>>ktory;
    std::cin.get();
    ktory-=1;
    std::cout<<fura[ktory];

}

void Katalog::usunSamochod()
{
    int ktory;
    std::cout<<"Ktory samochod chcesz usunac? Wybierz numer: "<<std::endl;
    std::cin>>ktory;
    std::cin.get();
    for (int i=0; i<fura.size(); ++i)
    {
        if ((ktory-1) == i)
        {
            fura.erase(fura.begin()+i);
        }
    }
    std::string help;
    std::ofstream plik;
    plik.open("lista.txt", std::ios::out | std::ios::trunc | std::ios::in);
     for (int i=0; i<fura.size(); ++i)
     {
         if (i==0)
         {
                plik<<fura[i].getMarka()<<std::endl;
                plik<<fura[i].getModel()<<std::endl;
                plik<<fura[i].getRocznik()<<std::endl;
                plik<<fura[i].getPojemnosc()<<std::endl;
                plik<<fura[i].getPrzebieg()<<std::endl;
                plik<<fura[i].getTypSkrzyni()<<std::endl;
                help="--------------";
                plik<<help;
         } else
         {
            plik<<std::endl<<fura[i].getMarka()<<std::endl;
            plik<<fura[i].getModel()<<std::endl;
            plik<<fura[i].getRocznik()<<std::endl;
            plik<<fura[i].getPojemnosc()<<std::endl;
            plik<<fura[i].getPrzebieg()<<std::endl;
            plik<<fura[i].getTypSkrzyni()<<std::endl;
            help="--------------";
            plik<<help;
        }
     }
     plik.close();
}

void Katalog::wyswietlenieWarunkowe()
{
    for (int i=0; i<fura.size(); ++i)
    {
        int rocznik_;
        rocznik_=fura[i].getRocznik();
        if (rocznik_>=2015)
        {
            std::cout<<fura[i]<<std::endl;
        }
    }
}

void Katalog::posortuj()
{
    for (int j=0; j<fura.size(); ++j)
    {
        for (int i=0; i<fura.size()-1; ++i)
        {
            int przebieg1,przebieg2;
            przebieg1=fura[i].getPrzebieg();
            przebieg2=fura[i+1].getPrzebieg();
            if (przebieg1>przebieg2)
            {
                std::swap(fura[i],fura[i+1]);
            }
        }
    }
  wypiszListe();
}

