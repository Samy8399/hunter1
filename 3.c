#include<stdio.h>

int main() {
    int a[100],b[100],c[100],d,e,f,i,j,k,l;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    k=0;
    for(i=0;i<l;i++)
    {
        if(a[i]==i)
        {
            b[k]=a[i];
            k++;
        }
    }
    if(k!=0)
    {
    for(i=0;i<k;i++)
    printf("%d",b[i]);
    }
    else
    printf("-1");
}        
        

