#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;
    string str;
    for (int i=1; i<=T; i++)
    {
        cin>>str;
        for(int k=0; k< str.length(); k++)
   {
      if(k%2==0)
         cout<<str[k];
   }
   cout<<" ";
           for(int j=0; j< str.length(); j++)
   {
      if(j%2!=0)
         cout<<str[j];
   }
   cout<<endl;
   
    }  
    return 0;
}
