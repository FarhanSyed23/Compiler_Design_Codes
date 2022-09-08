#include<stdio.h>
int main()
{
    int flag,i,counter=0;
    char a[100];
    printf("Enter the string:\n");
    gets(a);
    if((a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='Z') || (a[0]=='-'))
    {
        for(i=0;i<strlen(a);i++)
        {
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]=='-'))
            {
                counter++;
            }
        }
        if(counter==strlen(a))
        {
            flag=1;
        }
    }
    else
    {
        flag=0;
    }
    if(flag==1)
        printf("Its a valid identifier\n");
    else
        printf("Its not a valid identifier\n");
    return 0;
}
