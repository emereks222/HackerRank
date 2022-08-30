#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    public:
        int initialage,age;
        void Agefunc()
    {
        
       if (age<0)                                     //initial age should be first but w/e
       {
           initialage =0;
           cout<<"Age is not valid, setting age to 0."<<endl;
            cout<<"You are young."<<endl;
           
       }
       else if(age>0 && age<13)
       {
           cout<<"You are young."<<endl;     
       } 
        else if(age>13 && age<18)
        {
            cout<<"You are a teenager."<<endl; 
        }
      else {
       cout<<"You are old."<<endl; 
      }
      initialage = age + 3;
       if (initialage<0)
       {
           initialage =0;
            cout<<"You are young."<<endl;
           
       }
       else if(initialage>0 && initialage<13)
       {
           cout<<"You are young."<<endl;     
       } 
        else if(initialage>=13 && initialage<18)
        {
            cout<<"You are a teenager."<<endl; 
        }
      else {
       cout<<"You are old."<<endl; 
      }
    }
};

int main() {
    int T,y=0;
    cin>>T;
    for(int i=1; i<=T;i++)
    {
       
        Person x;
        cin>>x.age;
        x.Agefunc();
        x.age = 0;
        y++;                   //int y and if prob unnecessary
        if(y<4)
        {
            cout<<endl;
        }
            
    }
    
    return 0;
}
