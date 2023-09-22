#include<iostream>
using namespace std;
int main(){
    //Q4.   Given the length and breadth of a rectangle,
    //      write a program to find whether numerically the area of the rectangle is greater than its perimeter.
    int a,b;
    cout<<"ENTER LENGTH OF RECTANGLE : ";
    cin>>a;
    cout<<"ENTER BREADTH OF RECTANGLE : ";
    cin>>b;
    float area,perimeter;
    area = a*b;
    cout<<"AREA OF RECTANGLE = "<<area<<endl;
    perimeter = 2*(a+b);
    cout<<"PERIMETER OF RECTANGLE = "<<perimeter<<endl;

    //                            {using ternary operator}
    (area>perimeter) ? cout<<"area is greatest" : cout<<"perimeter is greatest";
    //                             {using if else}
    if(area>perimeter) cout<<"area is greatest";
    else cout<<"perimeter is greatest";
}