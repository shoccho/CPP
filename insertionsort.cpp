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
	
	/*freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
*/
	int i,j,k,l,m,n,o,p;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>j;

	int a[j];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<j;i++)cin>>a[i];


	for (i=1;i<j;i++){
		p=a[i];
		k=i-1;
		while(k>=0 && a[k]>p){
			a[k+1]=a[k];
			k--;
		}
		a[k+1]=p;
	}
	cout<<"The sorted array :"<<endl;
	for(i=0;i<j;i++)cout<<a[i]<<" ";
	return 0;
}