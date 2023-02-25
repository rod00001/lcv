#include<iostream>
#include<cmath>
#include"lcv.h"

using namespace std;


int main(){

    cout<<gradarad(90)<<endl;
    cout<<radagrad(1.57)<<endl;
    polarectenrad(10,0.785);
    polarectengrad(10,45);
    rectapolengrad(7.07,7.07);
    rectapolenrad(7.07,7.07);
    distpuntos(5,5,5,6,6,6);
    puntomedio(5,5,5,6,6,6);
    pendiente(0,0,5,5);
    rectacilengra(5,5,5);
    cilarectengra(10,45,10);
    rectacil(5,5,5);
    cilarect(10,45,10);
    esfarect(10,1.57,1.57);
    rectaesf(7.07,7.07,7.07);
    esfarectengra(10,45,45);
    rectaesfengra(10,10,10);



    return 0;
}
