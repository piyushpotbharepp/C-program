/*
You are given a string S in the camel case format. 
Your task is to convert this string into the snake case format.

Examples of the camel case strings are as follows:

ComputerHope
FedEx
WordPerfect

Note: In the camel case string, the first character may or may not be 
capitalized.
*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<ctype.h>

char s[105];
char temp[200];
char* caseConversion (char *s) {
    int k=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(i==0)
        {
            if(isupper(s[i]))
            temp[k]=tolower(s[i]);
            else
            temp[k]=s[i];
            //printf("%c",temp[k]);
            k++;
        }
        else
        {
            if(isupper(s[i]))
            {
                temp[k]='_';
                //printf("%c",temp[k]);
                k++;
                temp[k]=tolower(s[i]);
                // printf("%c",temp[k]);
                k++;
            }
            else
            {
                temp[k]=s[i];
                //printf("%c",temp[k]);
                k++;
            }
        }

    }
    temp[k]='\0';
    //printf("%s\n",temp);
    return temp;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {
        scanf("%s", s);

        char* out_ = caseConversion(s);
        printf("%s", out_);
        printf("\n");
    }
}