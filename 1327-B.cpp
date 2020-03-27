#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
//reverse sort(a,a+n,greater<int>());
int main()
{	
	

	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		map<int,char>lis;
		std::vector<int>pri;
		bool ans=true;

		for(i=0;i<n;i++){

			std::map<int, char> ma;
			std::vector<int> kumari;
			scanf("%d",&m);
			int min=99999999;
			for(j=0;j<m;j++){
				scanf("%d",&l);
				pri.push_back(l);
				lis[l]='e';
				ma[l]='e';
			}
			int ss=0;
			bool flag=false;
			std::map<int, char>::iterator it = ma.begin();
			while(it->second!='e'){
				it++;
				ss++;
				if(ss>m){
					flag=true;
					break;
				}
			}
			if(!flag){
				it->second='t';
				lis[it->first]='t';
			}
			else {
				ans=false;
				kumari.push_back(i)
			}

		}
		if(ans){
			printf("OPTIMAL\n");
		}
		else {
			printf("IMPROVE\n");
			for(i=0;i<kumari.size();i++){
				print("%d",kumari[i]);
				while(lis)
			}
		}
	}
	return 0;
}