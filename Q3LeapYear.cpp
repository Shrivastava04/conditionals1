#include<iostream>
using namespace std;
int main(){
    // Q3.       Any year is input through the keyboard.
    //           Write a program to determine whether the year is a leap year or not. 
    //             (Considering leap year occurs after every 4 years)
    int year;
    cout<<"ENTER YEAR : ";                                        // CONDITIONS FOR LEAP YEAR
    cin>>year;                                                   //1. DIVISIBLE BY 400
    if(year%400==0) cout<<" IT IS A LEAP YEAR.";                 //2. NOT DIVISIBLE BY 100
    else if (year%100==0) cout<<" IT IS NOT A LEAP YEAR.";       //3. DIVISIBLE BY 4
    else if(year%4==0) cout<<" IT IS A LEAP YEAR. ";
    else cout<<" IT IS NOT A LEAP YEAR.";
}