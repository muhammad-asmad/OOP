#include<iostream>
using namespace std;
int main()
{
    cout<<"Asmad coder Roll no. 231007"<<endl;
    double term;
    int n;
    unsigned long fact (int);
    cout<<"\nEnter the maximum value of denominator :" ;
    cin>>n;
    double sum = 1;
    for(int i = 1; i<= n; i++){

    term = 1.0/fact(i);
    sum += term;
    }
    cout<<"\n\n Sum of series is: "<<sum;
    }
    unsigned long fact (int n)
    {
        unsigned long prod = 1;
        int i;
        for(i =1; i<= n; i++)
        prod *= i;
        return prod;
    }