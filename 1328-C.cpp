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
//std::map<std::string, int>::iterator it = mapOfWordCount.begin();
int main()
{	
	

<<<<<<< HEAD
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
=======
	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);
>>>>>>> reg

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&o);
	while(o--){
		scanf("%d",&n);
<<<<<<< HEAD
		int a[n];
		for(i=0;i<n;i++)scanf("%d",a+i);
		printf("\n");
=======
		char ss[n];
		scanf("%s",ss);
		string a(n,'0'),b(n,'0');
		for(i=0;i<n;i++){
			if(ss[i]=='1'){
				a[i]='1';
				b[i]='0';
				for(j=i+1;j<n;j++)b[j]=ss[j];
					break;
			}
			else{
				if(ss[i]=='0'){
					a[i]='0';
					b[i]='0';
				}
				else if(ss[i]=='2'){
					a[i]='1';
					b[i]='1';
				}
			}

		}
	cout<<a<<"\n"<<b<<"\n";
>>>>>>> reg
	}
	
	return 0;
}