#include "samochod.h"
#include "Katalog.h"

Katalog k;

samochod s;


int main()
{

    do
   {
       std::cout<<"MENU: "<<std::endl;
      std::cout<<"1. Wczytaj liste: "<<std::endl;
      std::cout<<"2. Wypisz liste samochodow: "<<std::endl;
      std::cout<<"3. Dodaj samochod: "<<std::endl;
      std::cout<<"4. Wyswietl dane pojedynczego samochodu: "<<std::endl;
      std::cout<<"5. Usun samochod z listy: "<<std::endl;
      std::cout<<"6. Wyswietl samochody 5 letnie lub nowsze: "<<std::endl;
      std::cout<<"7. Posortuj i wyswietl najpierw samochody z najmniejszym przebiegiem: "<<std::endl;
      std::cout<<"0. Wyjdz z programu: "<<std::endl;

     int x;
    std::cin>>x;
    std::cin.get();
        switch(x)
        {
            case 1:
                {
                    k.wczytajListe();
                    break;
                }
            case 2:
                {
                    k.wypiszListe();
                    break;
                }
            case 3:
                {
                    k.dodajSamochod();
                    break;
                }
            case 4:
                {
                    k.wyswietlJeden();
                    break;
                }
            case 5:
                {
                    k.usunSamochod();
                    break;
                }
            case 6:
                {
                    k.wyswietlenieWarunkowe();
                    break;
                }
            case 7:
                {
                    k.posortuj();
                    break;
                }
            case 0:
                {
                    return 0;
                }
            default:
			std::cout << "Nie ma takiej opcji" << std::endl;

        }
    }
    while (true);
    return 0;
}
