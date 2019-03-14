#include<stdio.h>
int main()
{
 int a[100],b[20],c,d,i,j,k=0,t=0;
scanf("%d",&c);
for(i=0;i<c;i++)
scanf("%d",&a[i]);
for(i=0;i<c;i++)
{
    for(j=i+1;j<c;j++)
    {
        d=a[i]+a[j];
        for(k=0;k<c;k++)
        {
            if(a[k]==d)
            printf("%d %d %d\n",a[i],a[j],d);
        }
    }
}
}
