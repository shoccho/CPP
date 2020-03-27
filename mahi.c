#include<stdio.h>
#include<string.h>
int main()
{

	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	char x[10],y[10];
	gets(x);
	y=x;
	puts(x);
	return 0;

}