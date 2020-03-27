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

    int i,f,l,m,n,k;
 
    printf("How many number you want?\n");
    scanf("%d",&n);
 int a[n];//dynamicly nite hobe array
    printf("Give Integer\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        cout<<a[i]<<endl;
    }
    printf("Enter value to find:\n");
    scanf("%d",&k);
 
    f=0;
    l=n;
 
    while(f<=l)
    {
        m=(f+l)/2;

        if(a[m]<k)//mid er value key theke choto hole low mid er porer ghore zabe
            f=m+1;
        else if(a[m]==k)
        {
            printf("%d found at position %d\n",k,m+1);
            break;
        }
        else l=m-1;
    }
    if(l>f)//low zodi f theke boro hoy then condition vul korse
        printf("Not Available! %d is not present in the list, try another one!",k);
 
}