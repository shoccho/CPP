#include <stdio.h>
void strip(char line[100])
{


    int i=0,j=0;
    char nline[100];
    while(line[i]==' ')i++;
    while(line[i]!='\0')nline[j++]=line[i++];
    nline[j]='\0';
    extractWords(strcat(nline," "));

}
void extractWords(char line[100])
{
    int i=0, word_count = 0, j = 0;
    char words[100][30];
    while(line[i] != '\0')
    {
        if(line[i] != ' ')
        {
            words[word_count][j] = line[i];
            j++;
        }
        else
        {
            words[word_count][j] = '\0';
            j = 0;
            word_count++;
        }
        i++;
    }
    words[word_count][0] = '\0';
    for(i = 0; i< sizeof(words) / sizeof(words[0]); i++)
    {
       printf("%s\n", words[i]);
        if(words[i][0] == '\0')
        {
            break;
        }
    }
// Clear Array
    memset(words, 0, sizeof words);
}
void main()
{
    int length = 100;
    char str[length];
// Open file
    FILE *fptr = fopen("i.txt", "r");
    if (fptr == NULL)
    {
        printf("File Read Error\n");
        exit(0);
    }
    while(fgets(str,length,fptr) !=NULL)
    {

        strip(str); // Adding space in line last.
    }
    fclose(fptr);
}
