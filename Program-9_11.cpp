#include<iostream>
using namespace std;
int mul(int, int);
int main()
{
    cout<<"Asmad coder Roll no. 231007"<<endl;
    int i, x, y, r;
    for(i = 1; i<= 5; i++)
    {
        cout<<"Enter a pair of integers: ";
        cin>>x>>y;
        r = mul(x , y);
        if( r == 1)
        cout<< y<< " is multiple of "<<x<<endl;
        else
        cout<<y<< " is not a multiple of "<< x<< endl;
    }
}
int mul ( int a, int b)
{
    if ( b % a == 0)
    return 1;
    else 
    return 0;
}
