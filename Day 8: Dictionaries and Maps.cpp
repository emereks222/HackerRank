#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>


using namespace std;


int main() {
    int n,number;
    string name;
    cin>>n;
    map<string, int>phonebook;
    
    for(int i=1; i<=n;i++)
    {
        cin>>name;
        cin>>number;
        
        phonebook[name] = number;
    }
     while(cin >> name) {
        if (phonebook.find(name) != phonebook.end()) {
            cout << name << "=" << phonebook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
