#include<iostream>
using namespace std;
int sqr(int n);
int cube(int n);
int main(){
    cout<<"Asmad coder Roll no. 231007"<<endl;
    int a, b, r;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"enter another integer: ";
    cin>>b;
    r = sqr(a) + sqr(b);
    cout<<"Result = "<<r<<endl;

}
int sqr(int n)
{
    return n*n;
}
int cube( int n)
{
    return n *n * n;
}
