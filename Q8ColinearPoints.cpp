#include<iostream>
using namespace std;
int main(){
    //Q8.     Given three points (x1, y1), (x2, y2) and 
    //   (x3, y3), write a program to check if all the three points fall on one straight line.
    float x1,x2,x3,y1,y2,y3;
    cout<<"ENTER 1ST POINT : "; 
     cin>>x1>>y1;
     cout<<"ENTER 2ND POINT : ";
     cin>>x2>>y2;
     cout<<"ENTER 3RD POINT : ";
     cin>>x3>>y3;

     float m1 = (y2-y1)/(x2-x1);
     float m2 = (y3-y2)/(x3-x2);
     if(m1==m2) cout<<"ALL THREE POINTS LIE ON STRAIGHT LINE.";
    else cout<<"ALL THREE POINTS NOT LIE ON STRAIGHT LINE.";
}