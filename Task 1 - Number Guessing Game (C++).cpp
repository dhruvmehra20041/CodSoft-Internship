#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int num;
    int guess;
    
    cout<<"Welcome To Number Guessing Game !!"<<endl;
    cout<<"Try To Guess A Number Between 1-20"<<endl;
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    num = (rand() % 20) + 1;
    
    cout<<"Guess A Number : ";
    cin>>guess;
    
    while(guess!=num){
        if((num-guess)<=-10){
            cout<<"Guess Is Too High"<<endl;
            cout<<"Guess A Number Again : ";
            cin>>guess;
        }
        
        else if((num-guess)<=-5 && (num-guess)>-10){
            cout<<"Guess Is High"<<endl;
            cout<<"Guess A Number Again : ";
            cin>>guess;
        }
        
        else if((num-guess)>=5 && (num-guess)<10){
            cout<<"Guess Is Low"<<endl;
            cout<<"Guess A Number Again : ";
            cin>>guess;
        }
        
        else if((num-guess)>=10){
            cout<<"Guess Is Too Low"<<endl;
            cout<<"Guess A Number Again : ";
            cin>>guess;
        }
        
        else{
            cout<<"You Are Close"<<endl;
            cout<<"Guess A Number Again : ";
            cin>>guess;
        }
        
    }
    
    cout<<"Chosen Number Was : "<<num<<endl;
    cout<<"Number Guessed Correctly";
    
    return 0;
}



