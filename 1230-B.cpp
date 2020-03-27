#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[200000],y[1000000];
	scanf("%d %d",&m,&n);
	cin>>x;
	if (strlen(x)==n)printf("0\n");
	else {
	for(i=0;i<m;i++){
		if(n){
			if(i==0 ){
				if( x[i]!='1'){
				x[i]='1';
				n--;
				}
			}
			else if(x[i]=='0')continue;
			else {
				x[i]='0';
				n--;
			}
		}
		
	}
	cout<<x<<endl;
}
	return 0;
}