#include<bits/stdc++.h>
using namespace std;

int maximum(double *m1, double *m2, double *m3, double *m4, double *m5){
    double max;
    
    if (*m1>=*m2 && *m1>=*m3 && *m1>=*m4 && *m1>=*m5){
        max = *m1;
        return max;
    }
       
    else if (*m2>=*m1 && *m2>=*m3 && *m2>=*m4 && *m2>=*m5){
        max = *m2;
        return max;
    }
    
    else if (*m3>=*m1 && *m3>=*m2 && *m3>=*m4 && *m3>=*m5){
        max = *m3;
        return max;
    }
    
    else if (*m4>=*m1 && *m4>=*m2 && *m4>=*m3 && *m4>=*m5){
        max = *m4;
        return max;
    }
    
    else{
        max = *m5;
        return max;
    }
}

int minimum(double *m1, double *m2, double *m3, double *m4, double *m5){
    double min;
    
    if (*m1<=*m2 && *m1<=*m3 && *m1<=*m4 && *m1<=*m5){
        min = *m1;
        return min;
    }
       
    else if (*m2<=*m1 && *m2<=*m3 && *m2<=*m4 && *m2<=*m5){
        min = *m2;
        return min;
    }
    
    else if (*m3<=*m1 && *m3<=*m2 && *m3<=*m4 && *m3<=*m5){
        min = *m3;
        return min;
    }
    
    else if (*m4<=*m1 && *m4<=*m2 && *m4<=*m3 && *m4<=*m5){
        min = *m4;
        return min;
    }
    
    else{
        min = *m5;
        return min;
    }
}

int main(){
    string name;
    double m1;
    double m2;
    double m3;
    double m4;
    double m5;
    double h1;
    
    cout<<"Enter Name Of Student : ";
    cin>>name;
    
    cout<<"Enter Marks Of English : ";
    cin>>m1;
        
    cout<<"Enter Marks Of Hindi : ";
    cin>>m2;
    
    cout<<"Enter Marks Of Science : ";
    cin>>m3;
    
    cout<<"Enter Marks Of Maths : ";
    cin>>m4;
    
    cout<<"Enter Marks Of Social Science : ";
    cin>>m5;
    
    double avg = (m1+m2+m3+m4+m5)/5;
    
    if (avg > 90 && avg <= 100){
        cout<<"Grade : A+";
        
    }
    else if (avg > 80 && avg <= 90){
        cout<<"Grade : A";
    }
    else if (avg > 70 && avg <= 80){
        cout<<"Grade : B+";
    }
    else if (avg > 60 && avg <= 70){
        cout<<"Grade : B";
    }
    else if (avg > 50 && avg <= 60){
        cout<<"Grade : C+";
    }
    else if (avg > 40 && avg <= 50){
        cout<<"Grade : C";
    }
    else if (avg<=40){
        cout<<"Grade : F";
    }
    
    cout<<endl;
    
    cout<<"Maximum Marks : "<<maximum(&m1, &m2, &m3, &m4, &m5);
    cout<<endl;
    cout<<"Minimum Marks : "<<minimum(&m1, &m2, &m3, &m4, &m5);
    
    return 0;
}

