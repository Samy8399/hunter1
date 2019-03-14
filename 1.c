#include<stdio.h>
int main()
{
 int a[100],b[20],c,d,i,j,k=0,t=0;
scanf("%d",&c);
for(i=0;i<c;i++)
scanf("%d",&a[i]);
for(i=0;i<c;i++)
{d=0;
for(j=i+1;j<c;j++)
{
if(a[i]==a[j])
{
b[k]=a[j];
k++;
a[j]=='\0';
d=1;
}
}
if(d==1)
{
a[i]='\0';
}
}
for(i=0;i<k;i++)
{
if(b[i]>b[i+1])
{
  t=b[i];
  b[i]=b[i+1];
  b[i+1]=t;
}
}
if(k!='\0')
{
for(i=0;i<k;i++)
printf("%d\t",b[i]);
}
else
{
    printf("Unique");
}
}


