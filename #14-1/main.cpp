#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int m[1009][1009]={0};
int main()
{
    int n,i,sum=0,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int h,a,b,c;
        scanf("%d%d%d",&h,&a,&b);
        c=a+b;
        a=min(a,b);
        b=c-a;
        for(j=1;j<=h;j++)
            m[a][j]=1;
        for(j=1;j<=h;j++)
            m[b][j]=1;
        for(j=a;j<=b;j++)
            m[j][h]=1;

    }

    for(j=1;j<=1000;j++){
        for(k=1;k<=1000;k++){
            if(m[j][k])
                sum++;
        }
    }

    printf("%d\n",sum);

    return 0;
}
