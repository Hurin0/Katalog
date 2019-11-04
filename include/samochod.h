#pragma once
#include "Libs.h"
class samochod
{
   private:
       std::string marka;
       std::string model;
       int rocznik;
       double pojemnosc;
       int przebieg;
       std::string typ_skrzyni;



   public:
        samochod();
        samochod(const std::string m,const  std::string mo, int r, double p, int prz,const  std::string t);
        void setMarka (const std::string& marrr);
        void setModel(const std::string& moddd);
        void setRocznik (int roccc);
        void setPojemnosc (double pojjj);
        void setPrzebieg (int przzz);
        void setTyp_skrzyni (const std::string& typpp);
        friend std::ostream& operator<< (std::ostream& wyjscie, const samochod& s);
        std::string getMarka ();
        std::string getModel ();
        int getRocznik ();
        double getPojemnosc ();
        int getPrzebieg ();
        std::string getTypSkrzyni ();

};
