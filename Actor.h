#include <iostream>
#include <string>

using namespace std;

class Actor{
    public:
    Actor(){
        id=0;
        nombre = "";
    }

    Actor(int idin, string nombrein){
        id = idin;
        nombre = nombrein;
    }

    //Gets
    int getId(){
		return id;
	}

	string getNombre(){
		return nombre;
	}

	//Sets y muestra
	void setId(int id2){
    	id = id2;
	}

	void setNombre(string nombre2){
        nombre = nombre2;
	}

    void muestra(){
        cout << "Id. del actor:" << id << "Nombre del actor:" + nombre << "\n" << endl;
    }

    private:
    int id;
    string nombre;
};
