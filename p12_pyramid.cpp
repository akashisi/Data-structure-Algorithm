#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char ch[30];
    int i=0,j=0,l=0;
    gets(ch);
    fflush(stdin);
    l=strlen(ch);
    for(i=0;i<=l;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
    return(0);
}
