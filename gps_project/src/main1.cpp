#include<iostream>
using namespace std;
#include"gps.hpp"
int main()
{
    while(true)
    {

    long int a;
    long int b;
    cout<<"enter the positions"<<endl;
    cin>>a>>b;
    gps object1(a,b);
        char check;
        cout<<"do you want to continue if yes enter y"<<endl;
        cin>>check;
        if (check!='y')
        {
            return 0;
        }
        
    



}
}