
#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
int gcd(int n1, int n2){
  while (n1 != n2) {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;

}

int main()
{	
	
		
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d %d",&m,&n,&o);
	while(o>0){
		if(q%2==0){
			o-=gcd(m,o);
		}
		else{
			o-=gcd(n,o);
		}
		q++;
	}
	if(q%2==1){
		printf("0\n");
	}
	else printf("1\n");

	return 0;
}