#include<stdio.h>
int main()
{
    char a[100];int i,k=0;
    printf("Enter the line:\n");
    gets(a);
    if(a[0]=='/')
    {
        if(a[1]=='/')
        {
            printf("This is a comment line\n");
        }
        else if(a[1]=='*')
        {
            for(i=2;i<100;i++)
            {
                if(a[i]=='*' && a[i+1]=='/')
                {
                    printf("This is a comment line\n");
                    k=1;
                    break;
                }
            }
            if(k==0)
                printf("This is not a comment\n");
        }
        else
            printf("This is not a comment\n");
    }
    else
        printf("This is not a comment\n");

    return 0;
}
