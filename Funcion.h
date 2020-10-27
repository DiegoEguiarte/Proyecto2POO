#include <string>
#include <iostream>
#include "Hora.h"

using namespace std;

class Funcion
{
    public:
        Funcion()
        {
            numPeli = 0;
            sala = 0;
            cveFuncion = " ";
        }

    Funcion(int numPeli, int sala, string cveFuncion)
    {
        numPeli = numPeli;
        sala = sala;
        cveFuncion = cveFuncion;
    }
    //gets
    int getsala()
    {
        return sala;
    }

    int getnumPeli()
    {
        return numPeli;
    }

    string getcveFunc()
    {
        return cveFuncion;
    }

    Hora gethr()
    {
        return hora;
    }

    //sets y muestra

    int setnumPeli(int numPeli2)
    {
        numPeli = numPeli2;
    }

    int setSala(int Sala2)
    {
        sala = sala2;
    }

    string setcveFuncion(string cveFuncion2)
    {
        cveFuncion = cveFuncion2;
    }

    void sethr(Hora horal)
    {
        hora.sethr(horal.gethr());
        hora.setminu(horal.getminu());
    }

    void muestra()
    {
        cout << "Clave:" + cveFuncion << "Numero de pelicula: " << numPeli << "Sala :" << sala << endl;
        hora.muestra();
    }


    private:
        int numPeli;
        int sala;
        string cveFuncion;
        Hora hr;
};

