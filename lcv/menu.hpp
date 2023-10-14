#include<iostream>
#include<iomanip>
#include"lcv.h"

using namespace std;

int menu();

int menu(){
    char opcion="x";
    
    do{
        cout<<"¿Que quieres hacer?"<<endl;
        cin>>opcion;
    }
    while(opcion=!"s");

    
    return 0;
}