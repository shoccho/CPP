#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define keys "qwertyuiopasdfghjkl;zxcvbnm,./"

int main()
{	
	
		
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000],c;
	scanf("%c",&c);
	cin>>x;
	if(c=='L')q=1;
	else q=-1;
	l=strlen(x);
	m=strlen(keys);
	for(i=0;i<l;i++){
		for(j=0;j<m;j++){
			if(x[i]==keys[j])printf("%c",keys[j+q]);
		}
	}
	
	printf("\n");
	return 0;
}