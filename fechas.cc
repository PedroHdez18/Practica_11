#include <iostream>
#include <fstream>

using namespace std;

class Fecha{

    private:
    int dia;
    int mes;
    int anyo;

    public:
    Fecha();
    Fecha(int dia, int mes, int anyo) //  son los que se añaden
    {
        dia = dia;
        mes = mes;
        anyo = anyo_;
    }

    bool isBisiesto()
    {
      if (anyo % 4 == 0)
      {
        return true;
      }
      return false;
    }
    void updateDate(){
        if (dia > 30)
        {
            dia = 1;
            ++mes;
        }
        if (mes > 12)
        {
            mes = 1;
            ++anyo; 
        }
    }
        void addDay(int addDaysPlus)
    {
      dia += addDaysPlus;
      updateDate();
    }

    void addMonth(int addMonthPlus)
    {
      mes += addMonthPlus;
      updateDate();
    }

    void addYear(int addYearsPlus)
    {
      anyo += addYearsPlus;
    }

    void fechasPosteriores(int N)
    {
        ofstream postDates;
        postDates.open ("postDate.txt");

        for (int i = 0; i < N; ++i)
        {
            postDates << dia << "/" << mes << "/" << anyo << endl;
            ++dia;
        }
    }

}

    Fecha.hoy(21, 12, 2020);

    bool bisiesto = hoy.isBisiesto()

    if (!hoy.isBisiesto())

    while(hoy.isBisiesto())
    {
        cout << "Es bisiesto" << endl;
    }
