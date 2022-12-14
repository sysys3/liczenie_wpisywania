#include <iostream>

using namespace std;

int i=1,a=0;
void wpisz(int a=0,int i=1){
    while(i != 0){
    cout << "Wpisz liczbe" <<endl;
    cin >> i;
    a=a+1;
}
    cout << "Wypisales " << a-1 << " razy liczbe inna od zera.";
}

int main(){
    wpisz(a,i);
}

