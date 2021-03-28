//this is naive approach to our problem with time complextity o(2^n) and space complextity o(n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll n){
    if(n<2)
        return 1;
    //recurrence relation
    return func(n-1)+(n-1)*func(n-2);
}
int main(){
    ll n;
    cout<<"enter the no. of friends :";
    cin>>n;
    //taking input of no. of friends
    cout<<"total number of ways in which friends can remain single or can be paired up :";
    cout<<func(n);
}
