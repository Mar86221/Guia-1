#include <iostream>
using namespace std;

void cont10recur(int n, int x){
    if (n <= x)
    {
        cout<<n<<" "<<endl;
        n++;
        cont10recur(n,x);
    }
    
}
void cont10recur(int n){
    if (n >= 1)
    {
        cout<<n<<" "<<endl;
        n--;
        cont10recur(n);
    }
}
