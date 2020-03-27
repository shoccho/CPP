#include<stdio.h>
int main(){
	int i,j,p,s;
	scanf("%d",&j);
	i=1;
	scanf("%d",&p);
	j--;
	while(j--){
		scanf("%d",&s);
		if(p!=s){
			i++;
		}
		p=s;
	}
	printf("%d\n",i);

	return 0;
}