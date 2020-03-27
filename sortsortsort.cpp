#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
int m;
bool cmp(int i,int j){
	int x=i%m;
	int y =j%m;
	if(x==y){
		if(abs(i%2)==abs(j%2)){
			if(i%2!=0) return i>j;
			else return j>i;
		}
		return abs(i)%2>abs(j)%2	;	
	}
	else return x<y;

}


int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	int i,j,k,l,n,o,p;
	

	while(1){
		scanf("%d %d",&n,&m);
	
		if(n==0 && m==0) {   break;}
		int a[n];
		for(i=0;i<n;i++)scanf("%d",a+i);
		sort(a,a+n,cmp);
		printf("%d %d\n",n,m);
		for(i=0;i<n;i++)printf("%d\n",a[i]);
		}
	printf("0 0\n");
	return 0;
}