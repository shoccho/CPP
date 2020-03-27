#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000],c;
	bool colored=false;
	cin>>m>>n;
	cout<<m<<" "<<n<<endl;
	cin>>c;
	for(i=0;i<m;i++){
			fgets(x,100,stdin);
			printf("%d %s\n",i,x );		
			o=strlen(x);
			for(j=0;j<o;j++){
				if(x[j]!=' '){
					c=x[j];
					if(c=='C'||c=='M'|| c=='Y')colored=true;
				}
			}
		}
	if(colored)printf("#Color\n");
	else printf("#Black&White\n");
	return 0;
}