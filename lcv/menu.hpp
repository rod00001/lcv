#include<iostream>
#include<iomanip>
//#include"lcv.hpp"

using namespace std;

int menu();

int menu(){
    char opcion='x';
    
    do{
        cout<<endl<<endl<<"Selecciona la opcion de lo que quieres hacer o escribe 's' para salir."<<endl;
        cout<<"1. Pasar de grados a radianes."<<endl;
        cout<<"2. Pasar de radianes a grados."<<endl;
        cout<<"3. Pasar de coordenadas polares a rectangulares ingresando teta en radianes."<<endl;
        cin>>opcion;

        
        switch (opcion)
        {
        case '1':
            cout<<"Cuantos grados quieres pasar a radianes? ="<<endl;
            cin>>grad;
            cout<<gradarad(grad)<<" radianes"<<endl;
            break;
        
        case '2':

            cout<<"Cuantos radianes quieres pasar a grados? ="<<endl;
            cin>>rad;
            cout<<radagrad(rad)<<" Grados"<<endl;
            break;

       case '3':

            cout<<"Ingresa los coordenadas polares en radianes: "<<endl;
            cout<<"r = "; cin>>r;cout<<endl;
            cout<<"teta = "; cin>>teta;cout<<endl;
            polarectenrad(r,teta);
            break;
        
        case 's':
            cout<<"Saliendo."<<endl;
            break;
        
        default:
            cout<<"Opcion invalida. "<<endl;
            break;
        }
        

    }
    while(opcion!='s');

    
    return 0;
}