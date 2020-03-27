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
	int i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	char aus[]="KANGAROO",nej[]="KIWIBIRD";
	cin>>x;
	int ar=0,nr=0;
	l=strlen(x);
	for(i=0;i<l;i++){
		for(j=0;j<8;j++){
			if(tolower(x[i])==tolower(aus[j]))ar++;
			if(tolower(x[i])==tolower(nej[j]))nr++;
		}
	}
	if(ar>nr)printf("Kangaroos\n");
	else if(ar<nr)printf("Kiwis\n");
	else printf("Feud continues\n");
	return 0;
}