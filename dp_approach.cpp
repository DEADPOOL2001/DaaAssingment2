//this is dp approach to our problem with time complextity o(n) and space complextity o(n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll n,ll dp[]){
    if(dp[n]!=-1)
    return dp[n];
    if(n<2)
        return dp[n]= 1;
    //recurrence relation
    return dp[n]=func(n-1,dp)+(n-1)*func(n-2,dp);
}
int main(){
    ll n;
    cout<<"enter the no. of friends :";
    cin>>n;
    //taking input of no. of friends
    ll dp[n+1],i;
    for(i=0;i<=n;i++)
    dp[i]=-1;
    cout<<"total number of ways in which friends can remain single or can be paired up :";
    func(n,dp);
    cout<<dp[n];
}
