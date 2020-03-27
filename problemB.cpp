#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
void calc(int a[],int i){
	int j=i;
	while(j){
		
		a[j%10]++;
	
		j/=10;
	}

}
int a[10];
int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	scanf("%d",&m);
	while(m--){
		
		/// I could  make a better solution but my brain isn't working 
		
		scanf("%d",&j);
		for(i=0;i<=j;i++){
			calc(a,i);
		}
		for(i=0;i<10;i++){
			printf("%d",a[i]);
			a[i]=0;
			if(i!=9)printf(" ");
		}
		printf("\n");
	}

	return 0;
}