#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{	
	FastIO;
		
	//freopen("i.txt","r",stdin);
	//freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p=0;
	char x[100000],y[1000000],z,pos='N';
	while(1){
		cin>>j;
		if(j==0)break;
		else {
			while(j--){
				cin>>z;
				if(z=='D'){
					if(pos=='N')pos='L';
					else if(pos=='L')pos='S';
					else if(pos=='S')pos='O';
					else if(pos=='O')pos='N';
				}
				else {
					if(pos=='N')pos='O';
					else if(pos=='L')pos='N';
					else if(pos=='S')pos='L';
					else if(pos=='O')pos='S';
				}
			}
			cout<<pos<<endl;
			pos='N';
		}
	}

	return 0;
}