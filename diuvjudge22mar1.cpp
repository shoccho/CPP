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
	scanf("%d ",&k);
	while(k--){
		char x[100],y[100];
		fgets(x,100,stdin);
		fgets(y,100,stdin);
		int l1=strlen(x);
		int l2=strlen(y);
		//printf("ff %s ss%s\n",x,y );
		bool spaces= true;
		char xx[100], yy[100];
		int pp1=0,pp2=0;
		for(i=0;i<l1;i++){
			if(x[i]!=' '){
			xx[pp1]=x[i];
			pp1++;
		}
		}
		xx[pp1]='\0';
	for(i=0;i<l2;i++){
			if(y[i]!=' '){
			yy[pp2]=y[i];
			pp2++;
		}
		}
		yy[pp2]='\0';
		//printf("%s %s\n",xx,yy );
		//printf("%d %d\n",pp1,pp2 );
		if(pp1!=pp2){
			printf("Case %d: Wrong Answer\n",++q);
		}
		else {
			if(strcmp(xx,yy)==0){
				if(l1!=l2){
					printf("Case %d: Output Format Error\n",++q);
				}
				else printf("Case %d: Yes\n",++q);
			}
			else printf("Case %d: Wrong Answer\n",++q);
		}
	}
		
	return 0;
}
