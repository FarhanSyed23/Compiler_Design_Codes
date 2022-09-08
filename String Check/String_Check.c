#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[100],c;
    int state=0,i=0;

    printf("Enter a string:");
    gets(s);
    while(s[i]!='\0')
    {
        switch(state)
        {
        case 0:
            c=s[i++];
            if(c=='a')
                state=10;

            else if(c=='b')
                state=2;
            else
                state=6;
            break;
        case 1:
            c=s[i++];
            if(c=='a')
                state=3;

            else if(c=='b')
                state=4;
            else
                state=6;
            break;

       case 10:

            c=s[i++];
            if(c=='a')
                state=3;

            else if(c=='b')
                state=11;
            else
                state=6;
            break;

        case 11:

            c=s[i++];
            if(c=='a')
                state=6;

            else if(c=='b')
                state=11;
            else
                state=6;
            break;


        case 2:
            c=s[i++];
            if(c=='a')
                state=6;
            else if(c=='b')
                state=6;
            else
                state=6;
            break;
        case 3:
            c=s[i++];
            if(c=='a')
                state=3;
            else if(c=='b')
                state=2;
            else
                state=6;
            break;
        case 4:
            c=s[i++];
            if(c=='a')
                state=6;

            else if(c=='b')
                state=5;
            else
                state=6;
            break;
        case 5:
            c=s[i++];
            if(c=='a')
                state=6;
            else if(c=='b')
                state=2;
            else
                state=6;
            break;
        case 6:
            printf("\n '%s' is not recognized.",s);
            exit(0);
        }
    }
    if(state==6)
         printf("\n '%s' is not recognized.",s);
    else
         printf("\n '%s' is recognized.",s);
}
