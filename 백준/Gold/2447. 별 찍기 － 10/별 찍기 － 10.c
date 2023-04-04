#include <stdio.h>
char a[10000];
void print(int n,int w,int h,char c,int line)
{
    if(n==1&&h==line)
        a[w]=c;
    if(n==1) return;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(h<=line&&line<=h+n)
                print(n/3,w+n/3*i,h+n/3*j,(c=='*'?(i==1&&j==1?' ':'*'):' '),line);
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        print(n,0,0,'*',i);
        printf("%s\n",a);
    }
}
