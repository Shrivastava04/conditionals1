#include<iostream>
using namespace std;
int main(){
    // Q1.   TAKE 2 INTEGERS INPUT AND PRINT GREATEST OF THEM

    //---------USING IF ELSE-------------------
    int a,b;
    cout<<" ENTER FIRST NUMBER : ";
    cin>>a;
    cout<<" ENTER SECOND NUMBER : ";
    cin>>b;
    if(a>b){
        cout<<a<<" is greatest.";
    }
    else cout<<b<<" is greatest.";

//-------USING TERNARY OPERATOR----------------
     int a,b;
     cout<<" ENTER FIRST NUMBER : ";
    cin>>a;
    cout<<" ENTER SECOND NUMBER : ";
    cin>>b;
    (a>b) ? cout<<a<<" is greatest." : cout<<b<<" is greatest.";
}