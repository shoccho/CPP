#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	scanf("%d",&k);
	while(k--){
		int pos=0;
	
		scanf("%d ",&j);
		int a[j];
		for(i=0;i<j;i++){
			gets(x);

			if(strcmp(x,"LEFT")==0){
				a[i]=-1;
				pos+=a[i];

				
			}
			else if(strcmp(x,"RIGHT")==0){
				a[i]=1;
				pos+=a[i];

			}
			else {
				
				int koto=0;
				for(p=8;p<strlen(x);p++){
					koto*=10;
					koto+=x[p]-48;
				}
				printf("koto %d\n", koto);
				a[i]=a[koto-1];
				pos+=a[i];

			}
			
		}
		printf("%d\n",pos);
	}

	return 0;
}