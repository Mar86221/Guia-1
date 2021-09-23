#include "8.hpp"
using namespace std;

void cont10recur(int, int);
void cont10recur(int);

//CONTAR DEL 1 A N
int main(int argc, char const *argv[])
{
    int x;
    cout<<"Hasta que numero desea contar? ";
    cin>>x;
    cout<<"Su numero en columna estilo capicua es: "<<endl;
    cout<<" "<<endl;
    cont10recur(1,x-1);//Lamada recursiva
    cont10recur(x);

    return 0;
}
