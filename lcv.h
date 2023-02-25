#include<iostream>
#include<cmath>

#define PI 3.14159265359
#define E 2.718281828

using namespace std;

double rad=0;
double grad=0;
double x=0, y=0, z=0, r=0, teta=0, phy=0;
double dist=0;
double m=0;
double w1=0, w2=0, w3=0;

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
    return 0;
}

double cilarectengra(double r=0,double teta=0,double z=0){
    teta=gradarad(teta);
    x=r*cos(teta);
    y=r*sin(teta);
    z=z;
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}


double rectacil(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y));
    teta=atan(y/x);
    z=z;
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return 0;
}

double cilarect(double r=0,double teta=0,double z=0){
    x=r*cos(teta);
    y=r*sin(teta);
    z=z;
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

double esfarect(double r=0,double teta=0,double phy=0){
    x=r*sin(phy)*cos(teta);
    y=r*sin(phy)*sin(teta);
    z=r*cos(phy);
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

double rectaesf(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y)+(z*z));
    teta=atan(y/x);
    phy=acos(z/(sqrt((x*x)+(y*y)+(z*z))));
    cout<<"("<<r<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

double esfarectengra(double r=0,double teta=0,double phy=0){
    teta=gradarad(teta);
    x=r*sin(phy)*cos(teta);
    y=r*sin(phy)*sin(teta);
    z=r*cos(phy);
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

double rectaesfengra(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y)+(z*z));
    teta=atan(y/x);
    phy=acos(z/(sqrt((x*x)+(y*y)+(z*z))));
    teta=radagrad(teta);
    cout<<"("<<r<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

double esfacil(double p=0,double teta=0,double phy=0){
    r=p*sin(phy);
    teta=teta;
    z=p*cos(phy);
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return 0;
}

double cilaesf(double r=0,double teta=0,double z=0){
    double p=0;
    p=sqrt((r*r)+(z*z));
    teta=teta;
    phy=acos(z/sqrt((r*r)+(z*z)));
    cout<<"("<<p<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

double esfacilengra(double p=0,double teta=0,double phy=0){
    phy=gradarad(phy);
    r=p*sin(phy);
    teta=teta;
    z=p*cos(phy);
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return 0;
}

double cilaesfengra(double r=0,double teta=0,double z=0){
    double p=0;
    p=sqrt((r*r)+(z*z));
    teta=teta;
    phy=acos(z/sqrt((r*r)+(z*z)));
    phy=radagrad(phy);
    cout<<"("<<p<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

double upuntov(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    return ((u1*v1)+(u2*v2)+(u3*v3));
}

double umasv(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    w1=u1+v1;
    w2=u2+v2;
    w3=u3+v3;
    cout<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}

double umenosv(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    w1=u1-v1;
    w2=u2-v2;
    w3=u3-v3;
    cout<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}

double kporu(double k=0, double u1=0,double u2=0,double u3=0){
    w1=k*u1;
    w2=k*u2;
    w3=k*u3;
    cout<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}
