#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void quick_sor(int a[],int f, int l){
    int i,j,p;
    p=l;
    for(i=f;i<p && p>0;){
        if(a[i]<a[p])i++;
        else {
            if(p>1){
            swap(&a[i],&a[p-1]);
            swap(&a[p-1],&a[p]);
            p--;
            }
            else swap(&a[i],&a[p]);
        }
    }
    if(p>0)
        quick_sor(a,0,p-1);
    if(p<l-1)
    quick_sor(a,p+1,l);
    return ;
}
int main(){

    int a[3];
     int i,j,k,l,m;
    scanf("%d",&m);
    while(m--){
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
        quick_sor(a,0,2);
         printf("%lld\n",a[1]);
    }
   
}