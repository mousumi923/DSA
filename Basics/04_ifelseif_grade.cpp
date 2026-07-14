#include<bits/stdc++.h>
using namespace std;
/*Write a program to check the grade of a student based on marks.
If marks<25, then grade is F
If 25<=marks<45, then grade is E
If 45<=marks<50, then grade is D
If 50<=marks<60, then grade is C
If 60<=marks<80, then grade is B
If marks>=80, then grade is A
Ask the user to enter marks and print the grade accordingly.
*/
int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
        
    }
    else if(marks>=25 && marks<45){
        cout<<"E";
    }
    else if(marks>=45 && marks<50){
        cout<<"D";
    }
    else if(marks>=50 && marks<60){
        cout<<"C";
    }
    else if(marks>=60 && marks<80){
        cout<<"B";
    }
    else{
        cout<<"A";
    }
    return 0;
}