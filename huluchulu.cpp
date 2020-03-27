#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long

int jhamelamod(char x[], int a) 
{ 
    int res = 0,l= strlen(x); 
    for (int i = 0; i <l; i++) 
         res = (res*10 + x[i] - '0') %a; 
  
    return res; 
} 
bool isLeapYear(char x[]){
	if(jhamelamod(x,400)==0)return true;
	else if(jhamelamod(x,100)==0)return false;
	else if(jhamelamod(x,4)==0)return true;

	return false;
}
int main()
{	
			
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	int  i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	while(scanf("%s",x)!=EOF){
		if(q++)printf("\n");
		bool festival = false;
		if(isLeapYear(x)){

			printf("This is leap year.\n");
			festival=true;
		}

		if(jhamelamod(x,15)==0){printf("This is huluculu festival year.\n");festival=true;}

		if(isLeapYear(x) && jhamelamod(x,55)==0){printf("This is bulukulu festival year.\n");festival=true;}

		if(!festival)printf("This is an ordinary year.\n");

		
	}
	return 0;
}