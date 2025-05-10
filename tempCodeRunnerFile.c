//sum all array by passing array//

#include<stdio.h>
#include<conio.h>
int sum_array(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];

    }
    return sum;
}
int main()
{
    int a[50],n,sum,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum = sum_array(a,n);
    printf("sum of array: %d",sum);
    return 0;
}
