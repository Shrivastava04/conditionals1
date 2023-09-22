#include<iostream>
using namespace std;
int main(){
//Q7. Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
int x,y;
cout<<"Enter X Coordinate : ";
cin>>x;
cout<<"Enter Y Coordinate : ";
cin>>y;
if(x==0 && y==0) cout<<"POINT LIE AT ORIGIN.";
else if(x==0) cout<<"POINT LIE ON Y AXIS.";
else if(y==0) cout<<"POINT LIE ON X AXIS.";
}