#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
bool pr[1000000];
void seive(){
	memset(pr, true, sizeof(pr)); 
   for (int p=2; p*p<=1000000; p++) 
    { 
        if (pr[p] == true) 
        { 
            for (int i=p*2; i<=1000000; i += p) 
                pr[i] = false; 
        } 
    }
}

bool chkdgt(int i){
int x=0,j;
j=i;
	while(i){
		x*=10;
		x+=i%10;
		
		i/=10;
	}
	if(x==j)return false;
	return pr[x];
}
	int main()
{		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	seive();
	int i,j,k,l,m,n,o,p;

while(scanf("%d",&j)!=EOF){

	if(pr[j]){
		if(chkdgt(j))printf("%d is emirp.\n",j);
		else printf("%d is prime.\n",j);
	}
	else printf("%d is not prime.\n",j);
}

	return 0;
}