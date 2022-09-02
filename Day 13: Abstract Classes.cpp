#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class book
{
    public:
        string title,author;
        int price;
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};



int main() {
    book x;
    getline( cin,x.title);
    getline( cin,x.author);
    cin>>x.price;
    x.display();




    return 0;
}
