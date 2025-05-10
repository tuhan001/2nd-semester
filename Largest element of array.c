//Largest Element of array//
#include<stdio.h>

 int findlargeelem(int[]);
 int n;
int main()
{
    int a[100],elem,i;
    printf("Enter Elements: ");
    scanf("%d",&n);
    printf("Enter the Elemnts of array %d: ",n);
    for(i=0;i<n;i++)
    {
        printf("element %d: ",i);
        scanf("%d",&a[i]);

    }
    elem=findlargeelem(a);
    printf("The largest element is : %d",elem);
    return 0;
}
int findlargeelem(int a[])
{
    int i=1,elem;
    elem=a[0];
    while(i<n)

    {
        if(elem<a[i])
            elem=a[i];
        i++;
    }
    return elem;
}
