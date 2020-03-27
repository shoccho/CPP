#include<stdio.h>
int main()
{

    int a,b,c,d,e;

    scanf("&d &d",&a,&b);

    c=b-a;
    d=100-b;
    e=100-a;
    if(c<d && c<e)
    {
        printf("%d",c);
    }
    else
    {
        if(d<e)
        {
            printf("%d",d);
        }
        else
            printf("%d",e);
    }


    return 0;
}
