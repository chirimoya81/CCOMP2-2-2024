#include <iostream>

using namespace std;
 int main(){
    int numero;
    int t1=0;
    int t2=1;
    int t3;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    for(int i=1;i<=numero;i++){
        if( i == 1){
            cout<<t1<<" , ";
            continue; 
        }
        if(i == 2){
           cout<<t2<<" , ";
            continue; 
        }

        t3=t1+t2;
        t1=t2;
        t2=t3;

        cout<<t3;
    }
    return 0;
 }
