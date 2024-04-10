#include <iostream>
using namespace std;

int main(){

    int numero;
    int contador{0};

    cout<<"Introduce el numero: ";cin>>numero;

    for(int i=1;i<=numero;i++){
        if(numero%i==0){
            contador++;
        }
    }

    if(contador==2){//Divisible entre solo 2 numeros.
        cout<<numero<<" ES PRIMO"<<endl;
    }else{//Divisible entre 1 o mas de dos numero.
        cout<<numero<<" NO ES PRIMO"<<endl;
    }

    return 0;
}
