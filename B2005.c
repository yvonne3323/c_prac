#include<stdio.h>
int main()
{
    char ch;
    int i,j;
    scanf("%c",&ch);
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=(3-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}