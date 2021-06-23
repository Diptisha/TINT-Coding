  #include<stdio.h>
int main()
{
    int n,i,check=1,j=0,even=1,odd=1,count=0,rem;
    scanf("%d",&n);
    if(n<0)
        printf("Error");
    else
    {
        long int arr[n];
        for(i=0;i<n;i++)
            scanf("%ld",&arr[i]);
        for(j=0;j<n;j++)
        {
            if(arr[j]<=0)
                printf("Error ");
            else
            {
            rem=arr[j];
            count=0;even=1;odd=1;check=1;
            while(rem!=0)
            {
                if(check==1)
                odd*=rem%10;
                else
                even*=rem%10;
                check*=-1;
              rem/=10;
              count++;
            }

            if(count%2==0)
            {
                int temp=even;
                even=odd;
                odd=temp;
            }
            if(count>10)
                printf("Error ");
           else if(even>odd)
                printf("Dominant ");
            else
                printf("Magical ");
                //printf("\n%d %d %d",count,even,odd);
            }
        }
    }
}

