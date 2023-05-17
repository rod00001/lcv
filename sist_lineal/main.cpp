#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main (){

    double x=0;
    double dx=0;
    double dt=0.1;
    double b=0.25;
    double m=0.1;
    double F=1;
    double tiempo=0;

    ofstream myfile;
    myfile.open("datos.csv");
    myfile<<"tiempo (s)"<<","<<"x (m)"<<","<<"dx (m/s)"<<","<<"F (N)"<<endl;
    myfile<<tiempo<<","<<x<<","<<dx<<","<<F<<endl;

    for (size_t i = 0; i < 100; i=i++)
    {

        x=(dx*dt)+x;
        dx=(-b/m*dx*dt)+(F/m*dt)+dx;

        tiempo=tiempo+dt;

        cout<<tiempo<<","<<x<<","<<dx<<","<<F<<endl;

        myfile<<tiempo<<","<<x<<","<<dx<<","<<F<<endl;
        /* code */
    }

   
    
    
    myfile.close();





   



    return 0;
}