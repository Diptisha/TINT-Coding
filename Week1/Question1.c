#include<stdio.h>
int main()
{
    int n,i=0,rem,j=0;
    scanf("%d",&n);
    int arr[2][10]={2000,500,200,100,50,20,10,5,2,1,0,0,0,0,0,0,0,0,0,0};
    rem=n;i=0;
    if(n<=0 || n>25000)
        printf("Error");
    else
    {
        while(rem!=0)
        {
            arr[1][j++]=rem/arr[0][i++];
            rem%=arr[0][i-1];
        }

        for(i=0;i<10;i++)
        printf("%d ",arr[1][i]);
    }
}
