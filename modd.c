#include <stdio.h>


void extract(char input[30]){

    int i = 0, word_count = 0, j = 0;
    char words[1000][3000];
    while(input[i] != '\0'){
        if(input[i] == ' '){
            /* Check for normal spaces */
            if(words[word_count][0] != NULL){

                word_count++;
                j = 0;
            }
        }else if(input[i] != '\t'){
            words[word_count][j] = input[i];
            words[word_count][j+1] ='\0';
            j++;
        }
        i++;
    }




    /* Print Words */
    i = 0;
    while(words[i][0] != '\0'){

        printf("%s\n", words[i]);
        i++;
    }

}

void main()
{
    int length = 100;
    char str[length];
// Open file

freopen("o.txt","w",stdout);
    FILE *fptr = freopen("i.txt","r",stdin);
    if (fptr == NULL)
    {
        printf("File Read Error\n");
        exit(0);
    }
    while(gets(str) !=NULL)
    {

        extract(str); // Adding space in line last.
    }
    fclose(fptr);
}
