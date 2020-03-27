#include<stdio.h>
#include<math.h>

long long int gcd(long long int x,long long int y){

	if(y%x!=0) return gcd(y,x%y);

	else return x;

}

long long int fact(long long int x){
	int i,s=1;
	for(i=2;i<=x;i++){
		s*=i;
	}
	return s;
}


int main()
{

	long long int i,j,g;

	scanf("%lld %lld",&i,&j);

	i=fact(i);
	j=fact(j);
	g=gcd(i,j);
	printf("%lld",g);
	}
