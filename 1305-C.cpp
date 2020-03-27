#include<bits/stdc++.h>
using namespace std;
 
#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
 
unsigned ll sum=1;
int k;
void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r);  
  
void printCombination(int arr[], int n, int r)  
{  
 
    int data[r];  
  
 
    combinationUtil(arr, data, 0, n-1, 0, r);  
}  
 
void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r)  
{  
  
    if (index == r)  
    {  
      		sum*=abs(data[0]%k-data[1]%k-data);
      		
              return;  
    }  
  
 
    for (int i = start; i <= end &&  
        end - i + 1 >= r - index; i++)  
    {  
        data[index] = arr[i];  
        combinationUtil(arr, data, i+1,  
                        end, index+1, r);  
    }  
}  
 
int main()
{	
	
			
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,l,m,n,o,p,q=0;	
	char x[100000],y[1000000];
	scanf("%d %d",&n,&k);
	int a[n];
	
	for(i=0;i<n;i++)scanf("%d",a+i);
	
	if(n>k){
		printf("0\n");
		return 0;
	}
	printCombination(a,n,2);

	printf("%u\n",sum%k);
	return 0;
}