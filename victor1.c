#include<stdio.h>
int main()
{
  
  freopen("i.txt","r",stdin);
  freopen("o.txt","w",stdout);

    int n,m,i,j,t;
   while(scanf("%d %d",&n,&m)!=EOF){
   int max=0;
 
   if((n>0&&n<10000)&&(m>0&&m<10000))
   {
       if(n>m)
     {
      t=n;
      n=m;
      m=t;
     }
   int c;
   int e=n;
   int w=m;
   while(m>=n)
   {
       j=n;
       c=1;
       while( (j != 1) )
       {
           if(j%2==0)
           {
               c++;
               j=j/2;
           }
           else
           {
               c++;
               j=3*j+1;
           }
       }
       n++;
       if(c>=max)
       {
           max=c;
       }
   }
   printf("%d %d %d\n",e,w,max);
   }
   }
   return 0;
}