#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{   
    FastIO;
        
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);

    int i,j,k,l,m,n,o,p,sum;
    while(1){
        scanf("%d",&i);
        if(i==0)break;
          sum=0;
        while(i>=3){
            sum=sum+i/3;
            i=i/3+i % 3;
        }
        if(i==2){ sum++;}
        printf("%d\n",sum);
        }
    return 0;
}