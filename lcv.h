#include<iostream>
#include<cmath>

#define PI 3.14159265359
#define E 2.718281828

using namespace std;

double rad=0;
double grad=0;

double gradarad(double grad){
    return rad*PI/180;
}

double radagrad(double rad){
    return rad*180/PI;
}