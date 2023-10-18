#include<iostream>
#include<iomanip>
//#include"lcv.hpp"

using namespace std;

int menu();

int menu(){
    uint16_t opcion=9999;
    
    do{
        cout<<endl<<endl<<"Selecciona la opcion de lo que quieres hacer o escribe '0' para salir."<<endl;
        cout<<"1. Pasar de grados a radianes."<<endl;
        cout<<"2. Pasar de radianes a grados."<<endl;
        cout<<"3. Pasar de coordenadas polares a rectangulares ingresando teta en radianes."<<endl;
        cout<<"4.-Pasar de coordenadas polares a rectangulares en grados"<<endl;
        cout<<"5.-pasar de coordenadas rectangulares a polares en radianes: "<<endl;
        cout<<"6.-Pasar de coordenadas rectangulares a polares en grados: "<<endl;
        cout<<"7.-Encontrar el punto medio entre dos puntos: "<<endl;
        cout<<"8.-Regresa la pendiente m: "<<endl;
        cout<<"9.-Regresa la distancia entre dos puntos: "<<endl;
        cout<<"10.-Pasa de coordenadas rectangulares a cilindricas en grados: "<<endl;
        cout<<"11.-Pasa de coordenadas cilindricas a rectangulares en grados: "<<endl;
        cin>>opcion;

        
        switch (opcion)
        {
        case 1:
            cout<<"Cuantos grados quieres pasar a radianes? ="<<endl;
            cin>>grad;
            cout<<gradarad(grad)<<" radianes"<<endl;
            break;
        
        case 2:

            cout<<"Cuantos radianes quieres pasar a grados? ="<<endl;
            cin>>rad;
            cout<<radagrad(rad)<<" Grados"<<endl;
            break;

       case 3:

            cout<<"Ingresa los coordenadas polares en radianes: "<<endl;
            cout<<"r = "; cin>>r;cout<<endl;
            cout<<"teta = "; cin>>teta;cout<<endl;
            polarectenrad(r,teta);
            break;

         case 4:

            cout<<"Pasar de coordenadas polares a rectangulares en grados: "<<endl;
            cout<<"r = "; cin>>r;cout<<endl;
            cout<<"teta = "; cin>>teta;cout<<endl;
            polarectengrad(r,teta);
            break;

        case 5:

            cout<<"pasar de coordenadas rectangulares a polares en radianes: "<<endl;
            cout<<"x = "; cin>>x;cout<<endl;
            cout<<"y = "; cin>>y;cout<<endl;
            rectapolenrad(x,y);
            break;

        case 6:

            cout<<"Pasar de coordenadas rectangulares a polares en grados: "<<endl;
            cout<<"x = "; cin>>x;cout<<endl;
            cout<<"y = "; cin>>y;cout<<endl;
            rectapolengrad(x,y);
            break;

        case 7:

            cout<<"Encontrar el punto medio entre dos puntos: "<<endl;
            cout<<"x1 = "; cin>>x11;cout<<endl;
            cout<<"y1 = "; cin>>y11;cout<<endl;
            cout<<"z1 = "; cin>>z11;cout<<endl;
            cout<<"x2 = "; cin>>x2;cout<<endl;
            cout<<"y2 = "; cin>>y2;cout<<endl;
            cout<<"z2 = "; cin>>z2;cout<<endl;
            puntomedio(x11,y11,z11,x2,y2,z2);
            break;

        case 8:

            cout<<"Regresa la pendiente m: "<<endl;
            cout<<"x1 = "; cin>>x11;cout<<endl;
            cout<<"y1 = "; cin>>y11;cout<<endl;
            cout<<"x2 = "; cin>>x2;cout<<endl;
            cout<<"y2 = "; cin>>y2;cout<<endl;
            
            pendiente(x11,y11,x2,y2);
            break;

        case 9:

            cout<<"Regresa la distancia entre dos puntos: "<<endl;
            cout<<"x1 = "; cin>>x11;cout<<endl;
            cout<<"y1 = "; cin>>y11;cout<<endl;
            cout<<"z1 = "; cin>>z11;cout<<endl;
            cout<<"x2 = "; cin>>x2;cout<<endl;
            cout<<"y2 = "; cin>>y2;cout<<endl;
            cout<<"z2 = "; cin>>z2;cout<<endl;
            distpuntos(x11,y11,z11,x2,y2,z2);
            break;

        case 18:

            cout<<"Pasa de coordenadas rectangulares a cilindricas en grados: "<<endl;
            cout<<"x1 = "; cin>>x;cout<<endl;
            cout<<"y1 = "; cin>>y;cout<<endl;
            cout<<"z1 = "; cin>>z;cout<<endl;
            rectacilengra(x,y,z);
            break;

        case 11:

            cout<<"Pasa de coordenadas cilindricas a rectangulares en grados: "<<endl;
            cout<<"r = "; cin>>r;cout<<endl;
            cout<<"teta = "; cin>>teta;cout<<endl;
            cout<<"z = "; cin>>z;cout<<endl;
            cilarectengra(r,teta,z);
            break;

    /*    



//pasa de coordenadas rectangulares a cilindricas
double rectacil(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y));
    teta=atan(y/x);
    z=z;
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return 0;
}

//pasa de coordenadas cilindricas a rectangulares
double cilarect(double r=0,double teta=0,double z=0){
    x=r*cos(teta);
    y=r*sin(teta);
    z=z;
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

//pasa de coordenadas esfericas a rectangulares
double esfarect(double r=0,double teta=0,double phy=0){
    x=r*sin(phy)*cos(teta);
    y=r*sin(phy)*sin(teta);
    z=r*cos(phy);
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

//pasa de coordenadas rectangulares a esféricas
double rectaesf(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y)+(z*z));
    teta=atan(y/x);
    phy=acos(z/(sqrt((x*x)+(y*y)+(z*z))));
    cout<<"("<<r<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

//pasa de coordenadas esfericas a rectangulares en grados
double esfarectengra(double r=0,double teta=0,double phy=0){
    teta=gradarad(teta);
    x=r*sin(phy)*cos(teta);
    y=r*sin(phy)*sin(teta);
    z=r*cos(phy);
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    return 0;
}

//pasa de coordenadas rectangulares a esfericas en grados
double rectaesfengra(double x=0,double y=0,double z=0){
    r=sqrt((x*x)+(y*y)+(z*z));
    teta=atan(y/x);
    phy=acos(z/(sqrt((x*x)+(y*y)+(z*z))));
    teta=radagrad(teta);
    cout<<"("<<r<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

//pasa de coordenadas esfericas a cilindricas
double esfacil(double p=0,double teta=0,double phy=0){
    r=p*sin(phy);
    teta=teta;
    z=p*cos(phy);
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return 0;
}

//pasa de coordenadas cilindricas a esféricas
double cilaesf(double r=0,double teta=0,double z=0){
    double p=0;
    p=sqrt((r*r)+(z*z));
    teta=teta;
    phy=acos(z/sqrt((r*r)+(z*z)));
    cout<<"("<<p<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

//pasa de coordenadas esféricas a cilindricas en grados
double esfacilengra(double p=0,double teta=0,double phy=0){
    phy=gradarad(phy);
    r=p*sin(phy);
    teta=teta;
    z=p*cos(phy);
    cout<<"("<<r<<","<<teta<<","<<z<<")"<<endl;
    return 0;
}

//pasa de coordenadas cilindricas a esfericas en grados
double cilaesfengra(double r=0,double teta=0,double z=0){
    double p=0;
    p=sqrt((r*r)+(z*z));
    teta=teta;
    phy=acos(z/sqrt((r*r)+(z*z)));
    phy=radagrad(phy);
    cout<<"("<<p<<","<<teta<<","<<phy<<")"<<endl;
    return 0;
}

//producto punto entre dos vectores
double upuntov(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    //cout<<"u punto v= "<<(u1*v1)+(u2*v2)+(u3*v3)<<endl;
    return ((u1*v1)+(u2*v2)+(u3*v3));
}

//suma de dos vectores u+v
double umasv(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    w1=u1+v1;
    w2=u2+v2;
    w3=u3+v3;
    cout<<"u+v= "<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}

//resta de dos vectores u-v
double umenosv(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    w1=u1-v1;
    w2=u2-v2;
    w3=u3-v3;
    cout<<"u-v= "<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}

//vector por escalar k*u
double kporu(double k=0, double u1=0,double u2=0,double u3=0){
    w1=k*u1;
    w2=k*u2;
    w3=k*u3;
    cout<<"k*u= "<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}

//determina si son ortogonales dos vectores
double vortou (double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    w=upuntov(u1,u2,u3,v1,v2,v3);
    if (w != 0)
    {
        cout<<"No son ortogonales."<<endl;        
    }else{cout<<"Son ortogonales"<<endl;}
    return 0;
}

//Calcula el determinante de una matriz A de tamaño 3*3
double detA3(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0,double w1=0,double w2=0,double w3=0){
    w=u1*((v2*w3)-(w2*v3))-u2*((v1*w3)-(w1*v3))+u3*((v1*w2)-(w1*v2));
    cout<<"Det de A: "<<w<<endl;
    return w;
}

//Calcula la logitud de un vector
double longu(double u1=0,double u2=0,double u3=0){
    w=sqrt((u1*u1)+(u2*u2)+(u3*u3));
    cout<<"longitud de u= "<<w<<endl;
    return w;
}

//Muestra el vector dado normalizado
double normu(double u1=0,double u2=0,double u3=0){
    w=longu(u1,u2,u3);
    cout<<"u normalizado= "<<"<"<<u1/w<<","<<u2/w<<","<<u3/w<<">"<<endl;
    return 0;
}

//Producto cruz entre u y v
double ucruzv(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0){
    w1=(u2*v3)-(v2*u3);
    w2=-1*((u1*v3)-(v1*u3));
    w3=(u1*v2)-(v1*u2);
    cout<<"u cruz v= "<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
    return 0;
}

//Devuelve el triple producto punto de los tres vectores
double tripleprod(double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0,double w1=0,double w2=0,double w3=0){
    w4=(v2*w3)-(w2*v3);
    w5=-1*((v1*w3)-(w1*v3));
    w6=(v1*w2)-(w1*v2);
    w=upuntov(u1,u2,u3,w4,w5,w6);
    cout<<"Triple producto= "<<w<<endl;
    return w;
}

//Guarda un archivo frecta.csv con los puntos de la recta en el intervalo y usando el paso dado en 2D
int frecta (double a, double m,double to,double tf,double paso) {
    double ft=0;
     ofstream myfile;
     myfile.open ("frecta.csv");
     cout<<"Funcion recta= "<<endl;

    for (float t = to; t < tf; t=t+paso)
    {
        ft=a+(m*t);
        myfile<<t<<","<<ft<<endl;
        cout<<t<<","<<ft<<endl;
    }
  
     myfile.close();
  return 0;
}

//Guarda un archivo frectapuntovector.csv con los puntos de la recta en el intervalo y usando el paso dado 3n 3D
int frectapuntovector (double u1=0,double u2=0,double u3=0,double v1=0,double v2=0,double v3=0,double to=0,double tf=10,double paso=0.1) {
    
     ofstream myfile;
     myfile.open ("frectapuntovector.csv");
     
    cout<<"Recta punto vector= "<<endl;
    for (float t = to; t < tf; t=t+paso)
    {
        w1=u1+(v1*t);
        w2=u2+(v2*t);
        w3=u3+(v3*t);
        myfile<<t<<","<<w1<<","<<w2<<","<<w3<<endl;
        cout<<t<<","<<w1<<","<<w2<<","<<w3<<endl;
    }
  
     myfile.close();
  return 0;
}



*/







        
        
        case 0:
            cout<<"Saliendo."<<endl;
            break;
        
        default:
            cout<<"Opcion invalida. "<<endl;
            break;
        }
        

    }
    while(opcion!=0);

    
    return 0;
}