#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

bool isLeapYear(int year)
 {
 if (year % 400 == 0) return true;
 else if(year % 100 == 0) return false;
 else if(year % 4 == 0) return true;
 else return false;
 }
 bool a[4000];
int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,c=0;
	for(i=0;i<4000;i++)a[i]=isLeapYear(i);
	scanf("%d",&j);
	
	while(j--){
		l=0;
		scanf("%d %d %d %d",&m,&n,&o,&p);
		if(m==29 && n==2){
			for(i=o+1;i<=p;i++)if(a[i])l++;
		}
		else l=p-o;
		printf("Case %d: %d\n", ++c,l);
	}


	return 0;
}