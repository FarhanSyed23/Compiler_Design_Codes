#include<stdio.h>
#include<conio.h>
char array[10][20],temp[10];
int c,n;
void fun(int,int[]);
int fun2(int i,int j,int p[],int );

void main()
{
    int p[2],i,j;
    printf("Enter the no. of productions :");
    scanf("%d",&n);
    printf("Enter the productions :\n");
    for(i=0; i<n; i++)
        scanf("%s",array[i]);
    for(i=0; i<n; i++)
    {
        c=-1,p[0]=-1,p[1]=-1;
        fun(i,p);
        printf("First(%c) : [ ",array[i][0]);
        for(j=0; j<=c; j++)
            printf("%c,",temp[j]);
        printf("\b ].\n");
        getch();
    }
}

int fun2(int i,int j,int p[],int key)
{
    int k;
    if(!key)
    {
        for(k=0; k<n; k++)
            if(array[i][j]==array[k][0])
                break;
        p[0]=i;
        p[1]=j+1;
        fun(k,p);
        return 0;
    }
    else
    {
        for(k=0; k<=c; k++)
        {
            if(array[i][j]==temp[k])
                break;
        }
        if(k>c)return 1;
        else return 0;
    }
}
void fun(int i,int p[])
{
    int j,k,key;
    for(j=2; array[i][j] != NULL; j++)
    {
        if(array[i][j-1]=='/')
        {
            if(array[i][j]>= 'A' && array[i][j]<='Z')
            {
                key=0;
                fun2(i,j,p,key);
            }
            else
            {
                key = 1;
                if(fun2(i,j,p,key))
                    temp[++c] = array[i][j];
                if(array[i][j]== '@'&& p[0]!=-1)
                {
                    if(array[p[0]][p[1]]>='A' && array[p[0]][p[1]] <='Z')
                    {
                        key=0;
                        fun2(p[0],p[1],p,key);
                    }
                    else if(array[p[0]][p[1]] != '/'&& array[p[0]][p[1]]!=NULL)
                    {
                        if(fun2(p[0],p[1],p,key))
                            temp[++c]=array[p[0]][p[1]];
                    }
                }
            }
        }
    }
}
