//PRACTICA 1 - EDA
//RENATO AGUSTIN MONTENEGRO PALMA

#include <iostream>
#include <array>

using namespace std;

void exercise5()
{
    cout << "Numeros del 1 al 10:" << endl;
    for(int i=1; i<=10; ++i){
        cout << i << endl;
    }
    cout << endl;
}

void exercise4()
{
    int num = 0;
    int count = 0;
    cout << "Introduce numeros enteros y para terminar ingresa 0:" << endl;
    do{
        cin>>num;
        ++count;
    }while(num!=0);
    cout << "La cantidad de numeros introducidos es " << count-1 << "." << endl;
    cout << endl;
}

void exercise3()
{
    int num = 0;
    int op = 0;
    while(true){
        cout << "Introduce 1 para saber si un numero es par/impar y 0 para salir: ";
        cin>>op;
        switch (op) {
            case 0:
                break;
            case 1:
                cout << "Introduce un numero para saber si es par/impar: ";
                cin>>num;
                if(num%2==0){
                    cout << "El numero " << num << " es par." << endl;
                }else{
                    cout << "El numero " << num << " es impar." << endl;
                }
            default:
                break;
        }
    }
    cout << endl;
}

void exercise2()
{
    int num = 0;
    int result = 0;
    int op = 0;
    array<int,2> arr;
    while(true){
        cout << "Introduce 1 para sumar dos numeros y 0 para salir: ";
        cin>>op;
        switch (op) {
            case 0:
                break;
            case 1:
                cout << "Introduce dos numeros:" << endl;
                for(int i=0; i<2; ++i){
                    cin>>num;
                    arr.at(i)=num;
                }
                for(int elem: arr){
                    result += elem;
                }
                cout << "La suma de estos numeros es: " << result << endl;
                cout << endl;
            default:
                break;
        }
    }
}

void exercise1()
{
    cout << "Hola mundo" << endl;
    cout << endl;
}

int main()
{
    exercise1();
    exercise2();
    exercise3();
    exercise4();
    exercise5();
    return 0;
}
