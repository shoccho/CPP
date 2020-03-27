#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("i.txt","r",stdin);
	//freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p;
	char x[100];
	cin>>m>>n;
	scanf("%s",x);
	for(i=0;i<n;i++){
		for(j=0;j<strlen(x);j++){
			if(x[j]=='G')continue;
			else{
				if(x[j+1]=='G') {x[j]='G';x[j+1]='B'; j++;}
			}
		}		
	}
	cout<<x<<endl;
	return 0;
}