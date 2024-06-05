#include <bits/stdc++.h>
using namespace std;
int main(){
    
    double num1;
    double num2;
    int ch;
    double ans;
    
    cout<<"Choose An Operation (1-4) : \n1.) Addition\n2.) Subtraction\n3.) Multiplication\n4.) Division\n";
    cin>>ch;
    
    cout<<"Enter 1st Number : ";
    cin>>num1;
    
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    
    if(ch == 1){
        ans = num1+num2;
        cout<<"Sum : "<<ans;
    }
    
    else if(ch == 2){
        ans = num1-num2;
        cout<<"Difference : "<<ans;
    }
    
    else if(ch == 3){
        ans = num1*num2;
        cout<<"Product : "<<ans;
    }
    
    else if(ch == 4){
        ans = num1/num2;
        cout<<"Quotient : "<<ans;
    }
    
    else{
        cout<<"Invalid Choice";
    }
    
    return 0;
}


