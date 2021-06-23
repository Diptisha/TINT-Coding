#include<stdio.h>
int main()
{
    int n,i,check=1,j=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    if(n<0)
        check=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<=0)
            check=0;
    }
    if(check==0)
        printf("Error");
    else
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>=52)
                sum+=4;
            else if(arr[j]+4>=52)
                sum+=52-arr[j];
        }
        sum*=4;
        printf("%d",sum);
    }
}
