#include<iostream>
using namespace std;
int main(){
    //Q6. If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.
    int a,b,c;
    cout<<"MARKS OF A : ";
    cin>>a;
    cout<<"MARKS OF B : ";
    cin>>b;
    cout<<"MARKS OF C : ";
    cin>>c; 
    if (a==b && b==c) cout<<"All Students get same marks.";
    else if(a>b && b>c) cout<<"B has greatest marks.";
    else if(c>a && c>b) cout<<"C has greatest marks.";
    else cout<<"A has greatest marks.";
}