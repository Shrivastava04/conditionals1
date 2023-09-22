#include<iostream>
using namespace std;
int main(){
    //Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
    int a,b,c;
    cout<<"enter first side of triangle : ";
    cin>>a;
    cout<<"enter second side of triangle : ";
    cin>>b;
    cout<<"enter third side of triangle : ";
    cin>>c;
    if(a==b && b==c) cout<<"EQUILATERAL TRIANGLE";
    else if(b==a && b!=c) cout<<"ISOCELES TRIANGLE";
    else if(a==c && a!=b) cout<<"ISOCELES TRIANGLE";
     else if (a!=b && b!=c) cout<<"SCALEN TRIANGLE";
     else cout<<"ISOCELES TRIANGLE";
}