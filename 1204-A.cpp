#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
#define F first
#define S second
#define PB push_back
#define MP make_pair

//reverse sort(a,a+n,greater<int>());
//std::map<std::string, int>::iterator it = mapOfWordCount.begin();
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	//char x[100000],y[1000000];
	string x;
	cin>>x;
	int count=0;

	l=x.size();
	for(i=0;i<l;i++){
		if(x[i]=='1')count++;

	}
	ll res=0;
	if(count==1){
		double sss=(l-1)/2.0;
		cout<<ceil(sss)<<endl;
	}
	else if(count==0)printf("0\n");
	else{
		double sss=l/2.0;
	cout<<ceil(sss)<<endl;
	}

	
	return 0;
}
