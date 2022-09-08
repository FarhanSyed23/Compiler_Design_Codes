#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char exp[50]="\0",con[50]="\0",kwd[50]="\0",id[50]="\0",sym[50]="\0",opr[50]="\0";
    char key[6][10]= {"if","for","do","while","int","float"};
    char ch;
    char ptr[10][10]= {"\0"};
    int i,j=0,k,n=-1,p=-1,s=-1;

    puts("Enter the expression for lexical analysis");

    gets(exp);
    puts("\n\n\nThe tokens are");

    for(i=0; exp[i]; i++)
    {
        ch=exp[i];
        if(isalpha(ch))
        {
            k=-1;
            ptr[++n][++k]=ch;
            i++;
            ch=exp[i];
            if(isalpha(ch)||isdigit(ch))
            {
                while(isalpha(ch)||isdigit(ch))
                {
                    ptr[n][++k]=ch;
                    i++;
                    ch=exp[i];
                }
                while(j<6)
                {
                    if(strcmp(key[j],ptr[n])==0)
                    {
                        ptr[n][++k]=' ';
                        strcat(kwd,ptr[n]);
                        break;
                    }
                    if(j==5)
                    {
                        ptr[n][++k]=' ';
                        strcat(id,ptr[n]);
                    }
                    j++;
                }
            }
            else
            {
                ptr[n][++k]=' ';
                strcat(id,ptr[n]);
            }

            i--;
            ch=exp[i];
            j=0;
        }
        else if(isdigit(ch))
        {
            k=-1;
            ptr[++n][++k]=ch;
            i++;
            ch=exp[i];
            if(isdigit(ch))
            {
                while(isdigit(ch))
                {
                    ptr[n][++k]=ch;
                    i++;
                    ch=exp[i];
                }
            }
            i--;
            ch=exp[i];
            ptr[n][++k]=' ';
            strcat(con,ptr[n]);
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'||ch=='>'||ch=='<'||ch=='='||ch=='!')
        {
            opr[++p]=ch;
            i++;
            ch=exp[i];
            if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'||ch=='>'||ch=='<'||ch=='='||ch=='!')
            {
                opr[++p]=ch;
            }
            else
            {
                i--;
                ch=exp[i];
                opr[++p]=' ';
            }
        }
        else
        {
            sym[++s]=ch;
            sym[++s]=' ';
        }
    }
    puts("\nKeyword:");
    puts(kwd);
    puts("\nIdentifier:");
    puts(id);
    puts("\nConstant:");
    puts(con);
    puts("\nOperator:");
    puts(opr);
    puts("\nSymbol:");
    puts(sym);

    return 0;
}
