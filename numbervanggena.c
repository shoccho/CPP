#include<stdio.h>
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int m,b,c,i,j,count,t,n,arr[10],coc[10];
    scanf("%d",&n);
    int jrr[10]= {0,1,2,3,4,5,6,7,8,9};
    while(n--)
    {
        t=0;
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            b =i;
            while(b!=0 )
            {
                c = b%10;
                b=b/10;
                arr[t]=c;
                printf("%d ",c);
                t++;
            }
        }

        printf("\n");
        printf("%d\n",t );
        for(j=0; j<10; j++)

        {
            count =0;
            for(i=0; i<t; i++)

            {

                if(jrr[j]==arr[i])
                {
                    printf("%d milse %d\n",jrr[j],arr[i] );
                    count ++;
                }
            }
            coc[j]=count;

        }
        for(j=0; j<9; j++)
        {
           // printf("%d er sonkha %d \n",j,coc[j]);
        }
        printf("%d\n",coc[9]);
    }
    return 0;
}