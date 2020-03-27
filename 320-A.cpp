#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%s",x);
	l=strlen(x);
	for(i=0;i<l;){
		
		if(x[i]!='1'&& x[i]!='4' ){
			printf("NO\n");
			return 0;
		}
		else if(i<l-2 && x[i]=='1' && x[i+1]=='4' && x[i+2]=='4')i+=3;
		else if( i<l-1 &&  x[i]=='1' && x[i+1]=='4')i+=2;
		else if (x[i]=='1')i++;
		else{
			printf("NO\n");
			return 0;
	
		} 
	}
	printf("YES\n");

	return 0;
}