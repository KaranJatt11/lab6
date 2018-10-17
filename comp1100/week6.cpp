#include <iostream>
using namespace std;
int main ()
{ 
int z;
    cout << "please enter your score ";
    cin>>z;
    if (z>=86)
    {
        cout<<"A";
    }
    else if  (z>=72)
    {
        cout<<"B";
    
    }
    else if (z>=60)
    {
        cout<<"C";
    
    }
    else if (z>=50)
    {
        cout<<"D";
    }
    else if (z<50)
    {
        cout<<"F";
    }
    return 0;
}