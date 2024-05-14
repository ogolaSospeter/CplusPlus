#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

const double Pi = 3.14159;
int radius, diameter, circumference;

int main(){
    cout<<"Input the radius of the circle."<<endl;
    cin>>radius;

    cout<<"The Diameter of the circle = "<<radius * 2<<endl;
    cout <<"The Circumference = "<< Pi * radius *2 <<endl;
    cout <<"The Area = "<< Pi * pow(radius,2) <<endl;

}