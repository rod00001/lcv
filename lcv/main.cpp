#include<iostream>
#include<cmath>
#include"lcv.hpp"
#include"menu.hpp"

using namespace std;


int main(){

   menu();

    //cout<<gradarad(90)<<endl;
    cout<<radagrad(.64)<<endl;
    cout<<radagrad(1.10)<<endl;
    cout<<radagrad(1.57)<<endl;
    //polarectenrad(10,0.785);
    //polarectengrad(10,45);
    //rectapolengrad(7.07,7.07);
    //rectapolenrad(7.07,7.07);
    //distpuntos(5,5,5,6,6,6);
    //puntomedio(5,5,5,6,6,6);
    //pendiente(0,0,5,5);
    //rectacilengra(5,5,5);
    //cilarectengra(10,45,10);
    //rectacil(-4,-3,2);
    //rectacil(-3,-6,-8);
    //rectacil(0,2,-8);
    cilarect(14,20,2);
    cilarect(6,1,-8);
    cilarect(6,2,10);
    cout<<"esfarect"<<endl;
    esfarect(4,2,2);
    esfarect(6,3,4);
    esfarect(7,2,1);
    cout<<"esfarect"<<endl;
    esfarectengra(4,29,100);
    esfarectengra(6,230,300);
    esfarectengra(7,200,10);
    cout<<"rectaesfericas grad"<<endl;
    rectaesfengra(4,20,2);
    rectaesfengra(6,1,-8);
    rectaesfengra(7,2,10);
    cout<<"esfericas a cilindricas"<<endl;
    esfacil(4,20,2);
    esfacil(6,1,8);
    esfacil(7,2,5);

    

    //rectaesf(7.07,7.07,7.07);
    //
    //rectaesfengra(10,10,10);
    //esfacil(10,1.57,1.57);
    //cilaesf(10,1.57,10);
    //esfacilengra(10,45,45);
    //cilaesfengra(10,45,10);
    //cout<<"upunto ="<<upuntov(1,2,4,6,8,9)<<endl;
    //umasv(1,2,3,4,5,6);
    //umenosv(1,2,3,4,5,6);
    //kporu(5,1,2,3);
    //vortou(1,2,4,6,8,9);
    //detA3(1,2,4,6,0,9,-1,-2,0);
    //longu(1,2,4);
    //normu(1,-5,4);
    //ucruzv(1,2,4,6,8,9);
    //tripleprod(1,2,4,6,0,9,-1,-2,0);
    //frecta (2,.2,0,10,.5);
    //frectapuntovector (1,1,1,1,2,3,0,10,.2);
    //normu(1,7,4);


    return 0;
}
