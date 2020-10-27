#include <iostream>
#include "Actor.h"
#include <string>
#include "Funcion.h"

using namespace std;

class Pelicula
{
    public:
        Pelicula()
        {
            numPeli = 0;
            titulo = "";
            anio = 0;
            duracion = 0;
            genero = "";
            cantActores = 0;

        }

        Pelicula(int numPeli, string titulo, int anio, int duracion, string genero)
        {
            numPeli = 0;
            titulo = "";
            anio = 0;
            duracion = 0;
            genero = "";
            cantActores = sizeof(listaActores)/sizeof(listaActores[0]);
        }

        //gets

        int getnumPeli()
        {
            return numPeli;
        }

        string getTitulo()
        {
            return titulo;
        }

        int getanio()
        {
            return anio;
        }

        int getDuracion()
        {
            return duracion;
        }

        string getGenero()
        {
            return genero;
        }

        Actor getlistaActores(int index)
        {
            return listaActores[index]

        }

        //sets y muestra

        int setnumPeli(int numPeli2)
        {
            numPeli = numPeli2;
        }

        int setAnio(int anio2)
        {
            anio = anio2;
        }

        int setDuracion(int duracion2)
        {
            duracion = duracion2;
        }

        void setTitulo(string titulo2)
        {
            titulo = titulo2;
        }

        void setGenero(string genero2)
        {
            genero = genero2;
        }

        //Set los actores por medio de bool

        bool setActor(Actor actor)
        {
            bool existe;
            if(cantActores > 10)
            {
                return false;
            }
            else
            {
                for(int x = 0; x < sizeof(listaActores)/sizeof(listaActores[0]);x++)
                {
                    if(listaActores(x).getId()) == actor.getId()
                    {
                        existe = true;
                    }
                }
                if (existe == true)
                {
                    return false;
                }
                else
                {
                    listaActores[cantidadActores] = actor;
                    cantidadActores ++;
                    return true;
                }
            }
        }

        void muestra()
        {
            cout << "Numero de Pelicula; " << numPeli << "Titulo: " << titulo << "Anio de estreno: " << anio << "Duracion de la pelicula: " << duracion << "Genero de la pelicula: " << genero << "Actores: " << cantActores << endl;
        }




    private:
        int numPeli;
        string titulo;
        int anio;
        int duracion;
        string genero;
        Actor cantActores[10];
};
