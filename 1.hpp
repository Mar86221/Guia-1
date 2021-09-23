#include <iostream>
using namespace std;

//Aqui pongo la funcion nada mas porque me gusto el hpp

int elEucli(int mayor, int menor) {
    if(menor == 0) return mayor;
    return elEucli(menor, mayor%menor);
}