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
	string b;
	char x[100],y[100],z[100];
	scanf("%d",&k);
	while(k--){
		getline(cin,b);
		scanf("%[^\n]",x);
		scanf("%[^\n]",y);
		scanf("%[^\n]",z);
		if(y[0]==y[1]==y[2])printf("undefinable\n");
		else printf("definable\n");
		//cout<<y<<endl;
	}

	return 0;
}