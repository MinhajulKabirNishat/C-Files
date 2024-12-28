#include<iostream>
using namespacem std;
 int rodcutting (int price[], int n)
 {
     int dp[n+1];
     dp[0]=0;

     for (int i=1;i<=n;i++)
     {
         for (j=1; j<=i;j++)
            dp[i]=max( dp[i],price[j-1]+dp[i-j])

 }
 return dp[n];
 }

 int main()
