
#include<iostream>
using namespace std;

int fib (int n)
{
    if (n==0)
        return 0;

          else if (n==1)
        return 1;

    else
        return fib (n-1)+(n-2);
}

int main()
{
    int n, ans=0;
    cin>>n;
    ans = fib(n);
    cout<<ans;
    return 0;
}
