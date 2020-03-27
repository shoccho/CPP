#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("i.txt","r",stdin);
	//freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p;
	char x[1000],y[2000];
	p=0;
	scanf("%s",y);
	for(j=0;j<strlen(y);j++){
			if(y[j]=='.'){
				x[p++]='0';
			}
			else{
				if(y[j+1]=='.'){
					x[p++]='1';
				}
				else x[p++]='2';
				
				j++;
			}
		}		
	for(i=0;i<p;i++)printf("%d",x[i]-'0');
	printf("\n");
	return 0;
}