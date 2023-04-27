//Given radius of a circle. Write a function to print the area and circumference of the circle.
#include <iostream>
using namespace std;
double circum(int r){
    double cir=2*3.14*r;
    return cir;
}
double area(int r){
    double ar=3.14*r*r;
    return ar;
}
int main(){
    cout<<"Enter the radius : ";
    int r;
    cin>>r;
    cout<<"Area : "<<area(r)<<endl;
    cout<<"Circumference : "<<circum(r);
    }