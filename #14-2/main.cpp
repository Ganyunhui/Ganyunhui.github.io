#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[100009]={0},m[100009]={0};
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int n1;
        scanf("%d",&n1);
        m[i]=n1;
    }
    dp[1]=m[1];
    dp[2]=m[1]+m[2];
    for(i=3;i<=n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+m[i]);
        dp[i]=max(dp[i],dp[i-3]+m[i]+m[i-1]);
        //printf("%d\n",dp[i]);
    }
     printf("%d\n",dp[n]);

    return 0;
}
