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
    esfacil(10,1.57,1.57);
    cilaesf(10,1.57,10);
    esfacilengra(10,45,45);
    cilaesfengra(10,45,10);
    cout<<"upunto ="<<upuntov(1,2,4,6,8,9)<<endl;
    umasv(1,2,3,4,5,6);
    umenosv(1,2,3,4,5,6);
    kporu(5,1,2,3);
    vortou(1,2,4,6,8,9);
    detA3(1,2,4,6,0,9,-1,-2,0);
    longu(1,2,4);
    normu(1,-5,4);
    ucruzv(1,2,4,6,8,9);
    tripleprod(1,2,4,6,0,9,-1,-2,0);
    frecta (2,.2,0,10,.5);
    frectapuntovector (1,1,1,1,2,3,0,10,.2);


    return 0;
}
