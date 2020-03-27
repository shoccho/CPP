#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	//freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	l=10000000;
	double ep=0,op=0;
	while(l--){
		ll ce=0,co=0;
		i=100000;
		while(i--){
			p=rand();
			if(p%2==0)ce++;
			else co++;
		}
		ep+=100*ce/100000.0;
		op+=100*co/100000.0 ;
		
	}
	cout<<"Even is "<<ep/10000000<<" percent ODD is "<<op/10000000<<" percent"<<endl<<endl;
	return 0;

}