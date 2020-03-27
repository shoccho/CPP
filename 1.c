#include <stdio.h>
void main()
{
    int length = 100;
    char str[length];
// Open file
//FILE *fptr = fopen("i.txt", "r");
    FILE *fp=freopen("i.txt","r",stdin);
    if(fp==NULL)
    {
        printf("error\n");
        exit(0);
    }
    while(gets(str) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
}
