#include<iostream>
using namespace std;
int main(){
           //  Q9.    Write a C++ program to input any character and check whether it is the alphabet, digit or special character ?
    char ch;
    cout<<"ENTER THE CHARACTER : "; 
    cin>>ch;
    //a=97,A=65,0=48
    // cout<<ch<<endl<<(int) ch;
    int ascii=(int)ch;
    if(ascii>=97 && ascii<=122) cout<<"small alphabets ";
    else if(ascii>= 65 && ascii<= 90) cout<<"capital alphabets ";
    else if (ascii>=48 && ascii<= 57) cout<<"digits";
    else cout<<"special characters";
    }
