#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    public:
        
        string first_name, last_name;
        int id_number, score[100],value;
    void name()
    {
        cout<<"Name: "<<last_name<<", "<<first_name<<endl;
    }
    void id()
    {
        cout<<"ID: "<<id_number<<endl;
    }
    void grade()
    {
        int sum=0,avg=0;
        
        
        for(int j=0;j<=value;j++)
        {
            sum+=score[j]; 
        }
        
        avg = sum/value;
        
        if (avg<=100 && avg>=90)
        {
            cout<<"Grade: O";
        }
        else if (avg>=80 && avg<90)
        {
            cout<<"Grade: E";
        }
        else if (avg<80 && avg>=70)
        {
            cout<<"Grade: A";
        }
        else if (avg<70 && avg>=55)
        {
            cout<<"Grade: P";
        }
        else if (avg<55 && avg>=40)
        {
            cout<<"Grade: D";
        }
        else 
        {
            cout<<"Grade: T";
        } 
    }  
};


int main() {
    int t;
    student x;
    cin>>x.first_name>>x.last_name;
    cin>>x.id_number;
    cin>>t;
    x.value = t;
    for(int i=1; i<=t;i++)
    {
        cin>>x.score[i];
    }
    
    x.name();
    x.id();
    x.grade();
     
    return 0;
}
