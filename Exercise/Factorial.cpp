#include<iostream>
using namespace std;

int fact (int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n, ans=0;
    cin>>n;
    ans = fact(n);
    cout<<ans;
    return 0;
}

