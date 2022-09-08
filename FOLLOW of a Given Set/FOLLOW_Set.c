#include<stdio.h>
#include<conio.h>
#define max 10
#define MAX 15

void ffun(int,int);
void fun(int,int[]);
void follow(int i);
char array[max][MAX],temp[max][MAX];
int c,n,t;
int fun2(int i,int j,int p[],int key)
{
    int k;
    if(!key){
        for(k=0;k<n;k++)
        if(array[i][j]==array[k][0])
        break;
        p[0]=i;p[1]=j+1;
        fun(k,p);
    return 0;
    }
    else{
        for(k=0;k<=c;k++){
            if(array[i][j]==temp[t][k])
            break;
        }
        if(k>c)return 1;
        else return 0;
    }
}

void fun(int i,int p[])
{
 int j,k,key;
    for(j=2;array[i][j]!=NULL;j++)
    {
        if(array[i][j-1]=='/'){
            if(array[i][j]>='A'&&array[i][j]<='Z'){
            key=0;
            fun2(i,j,p,key);
            }
        else{
            key=1;
            if(fun2(i,j,p,key))
                temp[t][++c]=array[i][j];
            if(array[i][j]=='@'&&p[0]!=-1){
                if(array[p[0]][p[1]]>='A'&&array[p[0]][p[1]]<='Z'){
                    key=0;
                    fun2(p[0],p[1],p,key);
                }
            else
                if(array[p[0]][p[1]]!='/'&&array[p[0]][p[1]]!=NULL){
                    if(fun2(p[0],p[1],p,key))
                    temp[t][++c]=array[p[0]][p[1]];
                }
            }
        }
        }
    }
}
char fol[max][MAX],ff[max];int f,l,ff0;
void follow(int i)
{
    int j,k;
    for(j=0;j<=ff0;j++)
        if(array[i][0]==ff[j])
            return;
        if(j>ff0)ff[++ff0]=array[i][0];
            if(i==0)fol[l][++f]='$';
        for(j=0;j<n;j++)
            for(k=2;array[j][k]!=NULL;k++)
                if(array[j][k]==array[i][0])
                    ffun(j,k);
}

void ffun(int j,int k)
{
    int ii,null=0,tt,cc;
    if(array[j][k+1]=='/'||array[j][k+1]==NULL)
        null=1;
    for(ii=k+1;array[j][ii]!='/'&&array[j][ii]!=NULL;ii++){
        if(array[j][ii]<='Z'&&array[j][ii]>='A')
        {
            for(tt=0;tt<n;tt++)
                if(temp[tt][0]==array[j][ii])break;
                    for(cc=1;temp[tt][cc]!=NULL;cc++)
                    {
                        if(temp[tt][cc]=='@')null=1;
                        else fol[l][++f]=temp[tt][cc];
                    }
        }
        else fol[l][++f]=array[j][ii];
    }
    if(null)follow(j);
}
int main()
{
    int p[2],i,j;

    printf("Enter the no. of productions :");
    scanf("%d",&n);
    printf("Enter the productions :\n");
    for(i=0;i<n;i++)
        scanf("%s",array[i]);
    for(i=0,t=0;i<n;i++,t++){
        c=0,p[0]=-1,p[1]=-1;
        temp[t][0]=array[i][0];
        fun(i,p);
        temp[t][++c]=NULL;

    }

    for(i=0,l=0;i<n;i++,l++)
    {
        f=-1;ff0=-1;
        fol[l][++f]=array[i][0];
        follow(i);
        fol[l][++f]=NULL;
    }
    for(i=0;i<n;i++)
    {
        printf("\nFollow[%c] : [ ",fol[i][0]);
        for(j=1;fol[i][j]!=NULL;j++)
            printf("%c,",fol[i][j]);
        printf("\b ]");
    }
    getch();
    return 0;
}

