#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    //Declarar variables
    char pal_1[500];
    char pal_2[500];
    int mayor_1 = 0, mayor_2 = 0;

    //Solicitar ingreso
    cout<<"Ingrese la primer palabra :";
    cin>>pal_1;

    cout<<"Ingrese la segunda palabra :";
    cin>>pal_2;

    //Contar las letras
    mayor_1 = strlen(pal_1)-strlen(pal_2);
    mayor_2 = strlen(pal_2)-strlen(pal_1);

    //Condicionar mayor
    if (mayor_1 > mayor_2){
        cout<<"La primera es mayor por " << mayor_1 <<" Letras!";
    }else if(mayor_2 > mayor_1){
        cout<<"La segunda es mayor por "<< mayor_2 << " Letras!";
    }
    else{
        cout<<"Ambas tienen la misma logitud!";
    }

    return 0;

}