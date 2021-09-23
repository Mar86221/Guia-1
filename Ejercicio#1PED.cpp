#include "1.hpp"
using namespace std;

int elEcucli(int, int);

int main(int argc, char const *argv[])
{
    int max=0, min=0;
    cout<<"\n"<<"CALCULAR EL MAXIMO COMUN DIVISOR POR EL METODO DE EUCLIDES"<<"\n"<<endl;
    cout<<"Ingrese el el dividendo(mayor) ";
    cin>>max;
    cout<<"Ingrese el divisor(menor) ";
    cin>>min;
    elEucli(max, min);

    cout<<"\n"<<"El mcm de "<<max<<" y "<<min<<" es: "<<elEucli(max, min)<<endl;


    return 0;
}
