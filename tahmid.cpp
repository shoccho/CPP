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

    int i,a,j,k,l,m,n,o,p;
    char s,c;
    if(scanf("%c",&s)=='0'){
        scanf("x%x",&a);
        printf("%d\n",a);
        return 0;
    }
    scanf("%d",&a);
    printf("0x%x\n",a);
    return 0;
}