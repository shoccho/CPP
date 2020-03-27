#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
void merge(int a[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m;   
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])  a[k] = L[i++]; 
        else a[k] = R[j++];  
        k++; 
    } 
    while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int a[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2;      
        mergeSort(a, l, m); 
        mergeSort(a, m+1, r); 
  
        merge(a, l, m, r); 
    } 
} 

int main()
{	
	
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
cin>>j;
int a[j];
for(i=0;i<j;i++)cin>>a[i];
  
    mergeSort(a, 0, j-1); 
  for(i=0;i<j;i++)cout<<a[i]<<" ";
	return 0;
}