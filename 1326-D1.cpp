#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1;
#define maxint 1000000000;
bool isPalindrome(char str[],int l,int h)
{


    while (h > l)
    {
        if (str[l++] != str[h--])
        {

            return false;
        }
    }
    return true;
}
int main()
{


//	freopen("i.txt", "r", stdin);
    //freopen("o.txt", "w", stdout);

    int i,j,k,l,m,n,o,p,q=0;
    char x[100000],y[1000000];

    scanf("%d",&k);
    while(k--)
    {

        cin>>x;
        l=strlen(x);

        char dan[l],bam[l];
        for(i=0; i<l/2; i++)
        {
            if( x[i]==x[l-1-i])
            {
                dan[i]=x[i];
                bam[i]=x[l-i-1];
            }
            else break;
        }
        int dup=i;
        //full ekside
        bool danv=true;
        bool bamv=true;
        int daaner=0;
        int baamer=0;

        for(i=0; i<l; i++)
        {
            if(danv )
            {

                if(isPalindrome(x,0,i))daaner++;
                else danv=false;

            }
            if(bamv)
            {
                if(isPalindrome(x,l-i-1,l-1))daaner++;
                else bamv=false;
            }
            if(danv ==false && bamv==false)break;
        }

        //moddher part e
        bool mdanv=true;
        bool mbamv=true;
        int mdaaner=0;
         int mbaamer=0;

        for(i=dup; i<l-dup; i++)
        {
            if(mdanv )
            {

                if(isPalindrome(x,dup,i))mdaaner++;
                else mdanv=false;

            }
            if(mbamv)
            {
                if(isPalindrome(x,l-dup-i-1,l-dup-1))mbaamer++;
                else mbamv=false;
            }
            if(mdanv ==false && mbamv==false)break;
        }
        printf("%d %d %d",daaner,baamer,dup);
        //output
        if(daaner> baamer && daaner>dup+max(mdaaner,mbaamer))
        {

            for(i=0; i<daaner; i++)
                printf("%c",x[i]);
        }
        else if(baamer> daaner && baamer > dup+max(mdaaner,mbaamer))
        {

            for(i=l-baamer; i<l; i++)
            {
                printf("%c",x[i]);
            }
        }
        else
        {

            for(i=0; i<dup; i++)printf("%c", x[i]);

            if(mdaaner>mbaamer )
            {
                for(i=dup; i<dup+mdaaner; i++)
                    printf("%c",x[i]);

            }
            else
            {
                for(i=l-dup-mbaamer; i<l-dup; i++)printf("%c",x[i]);
            }
            for(i=l-dup; i<l; i++)printf("%c",x[i] );
        }
        printf("\n");
    }
    return 0;
}
