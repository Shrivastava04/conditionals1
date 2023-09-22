#include<iostream>
using namespace std;
int main(){
    // Q2.  Given the radius of the circle predict whether
     //     numerically area of this circle is larger than the circumference or not.

    int r;
    cout<<"ENTER RADIUS : ";
    cin>>r;
    float area;
    area = 3.14*r*r;
    cout<<"AREA = "<<area<<endl;
    float perimeter;
    perimeter = 2*3.14*r;
    cout<<"PERIMETER = "<<perimeter<<endl;
    //-----using TERNARY OPERATOR---------
    
    (area>perimeter) ? cout<<"area is greater than perimeter." : cout<<"perimeter is greater than area. ";

    //-----using IF - ELSE ------------

    if(area>perimeter) cout<<"area is greatest";
    else cout<<"perimeter is greatest";
}