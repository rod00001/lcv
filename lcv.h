#include<iostream>
#include<cmath>

#define PI 3.14159265359
#define E 2.718281828

using namespace std;

double rad=0;
double grad=0;
double x=0, y=0, z=0, r=0, teta=0;
double dist=0;
double m=0;

//pasr de grados a radianes
double gradarad(double grad){
    return grad*PI/180;
}

//para pasar de radianes a grados
double radagrad(double rad){
    return rad*180/PI;
}

//para pasar de coordenadas polares a rectangulares ingresando teta en radianes
double polarectenrad(double r=0,double teta=0){
    x=r*cos(teta);
    y=r*sin(teta);
    cout<<"("<<x<<","<<y<<")"<<endl;
    return 0;
}

double polarectengrad(double r=0,double teta=0){
    teta=gradarad(teta);
    x=r*cos(teta);
    y=r*sin(teta);
    cout<<"("<<x<<","<<y<<")"<<endl;
    return 0;
}

double rectapolenrad(double x=0,double y=0){
    r=sqrt((x*x)+(y*y));
    teta=atan(y/x);
    cout<<"("<<r<<","<<teta<<")"<<endl;
    return 0;
}

double rectapolengrad(double x=0,double y=0){
    r=sqrt((x*x)+(y*y));
    teta=atan(y/x);
    teta=radagrad(teta);
    cout<<"("<<r<<","<<teta<<")"<<endl;
    return 0;
}

double puntomedio(double x1=0,double y1=0,double z1=0,double x2=0,double y2=0,double z2=0){
    x=(x1+x2)/2;
    y=(x1+x2)/2;
    z=(x1+x2)/2;
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

double pendiente(double x1=0,double y1=0,double x2=0,double y2=0){
    m=(y1-y2)/(x1-x2);
    teta=atan(m);
    teta=radagrad(teta);
    cout<<"pendiente: "<<m<<" angulo con respecto x: "<<teta<<"grados"<<endl;
    return m;
}

double distpuntos(double x1=0,double y1=0,double z1=0,double x2=0,double y2=0,double z2=0){
    r=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))+((z1-z2)*(z1-z2)));
    cout<<r<<endl;
    return r;
}

double rectacilengra(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y));
    teta=atan(y/x);
    teta=radagrad(teta);
    z=z;
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return r;
}

double cilarectengra(double r=0,double teta=0,double z=0){
    teta=gradarad(teta);
    x=r*cos(teta);
    y=r*sin(teta);
    z=z;
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return r;
}


double rectacil(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y));
    teta=atan(y/x);
    z=z;
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return r;
}

double cilarect(double r=0,double teta=0,double z=0){
    x=r*cos(teta);
    y=r*sin(teta);
    z=z;
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return r;
}








