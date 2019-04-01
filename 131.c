#include<stdio.h>

int main() {
    int a[100],b[100],c[100],d,e,f,i,j,k,l;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    k=0;
    for(i=0;i<l;i++)
    {
        b[k]=a[i];
        k++;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
        if(a[i]>a[j])
        {
            d=a[i];
            a[i]=a[j];
            a[j]=d;
        }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
        if(b[i]<b[j])
        {
             d=b[i];
            b[i]=b[j];
            b[j]=d;
        }
        }
    }
    e=0;f=0;
    for(i=0;i<l;i++)
    {
        if(i%2==0)
        {
            printf("%d ",b[e]);
            e++;
        }
        else
        {
            printf("%d ",a[f]);
            f++;
        }
    }

}    
   
