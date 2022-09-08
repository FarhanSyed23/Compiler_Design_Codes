#include<stdio.h>
#include<conio.h>
void main()
{
    char s[5];
    int t;
    printf("\n Enter any operator:");
    gets(s);
    t=strlen(s);
    if(t>2)
        printf("Not an operator");
    else
    {
        switch(s[0])
        {
        case'>':
            if(s[1]=='=')
                printf("\n Greater than or equal");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not an operator");
                 else if(isdigit(s[1]))
                        printf("not an operator");
            else
                printf("\n Greater than");
            break;
        case'<':
            if(s[1]=='=')
                printf("\n Less than or equal");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\nLess than");
            break;
        case'=':
            if(s[1]=='=')
                printf("\nEqual to");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\nAssignment");
            break;
        case'!':
            if(s[1]=='=')
                printf("\nNot Equal");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\n Bit Not");
            break;
        case'&':
            if(s[1]=='&')
                printf("\nLogical AND");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\n Bitwise AND");
            break;
        case'|':
            if(s[1]=='|')
                printf("\nLogical OR");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\nBitwise OR");
            break;
        case'+':
            if(s[1]=='+')
                printf("\nIncrement");
                else if(s[1]=='|' || s[1]=='-' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='_'|| s[1]=='-')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\n Addition");
            break;
        case'-':
            if(s[1]=='-')
                printf("\nDecrement");
                else if(s[1]=='|' || s[1]== '^' || s[1]=='<' || s[1]=='>' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+' || s[1]=='_')
                    printf("\n Not an operator");
                    else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\nSubtraction");
            break;
        case'*':
            if(s[1]=='|' || s[1]== '^' || s[1]=='$' || s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*'|| s[1]=='+'|| s[1]=='_')
                printf("\nNot a operator");
                else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\nMultiplication");
            break;
        case'/':
            if(s[1]=='|' || s[1]== '^' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+'|| s[1]=='_')
                printf("\nNot a operator");
                else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("\nDivision");
            break;
        case'%':
            if(s[1]=='|' || s[1]== '^' || s[1]=='$'|| s[1]== '@' || s[1]== '(' || s[1]==')' || s[1]=='=' || s[1]=='&' || s[1]=='/' || s[1]=='%' || s[1]=='*' || s[1]=='+'|| s[1]=='_')
                printf("\nNot a operator");
                else if(isalpha(s[1]))
                        printf("not a operator");
                 else if(isdigit(s[1]))
                        printf("not a operator");
            else
                printf("Modulus");
            break;
        default:
            printf("\n Not a operator");

        }
    }

}
