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










    /* for(i=0;i<10;i++)
       arr[1][i]=0;
    arr[0][0]=2000;arr[0][1]=500;arr[0][2]=200;arr[0][3]=100;arr[0][4]=50;
    arr[0][5]=20;arr[0][6]=10;arr[0][7]=5;arr[0][8]=2;arr[0][9]=1;*/
/*

#include<stdio.h>
int main()
{
    int n,i=0,rem,j=0;
    int arr [10];
   for(i=0;i<10;i++)
        arr[i]=0;
    scanf("%d",&n);
    rem=n;
    if(n<=0 || n>25000)
        printf("Error");
    else
    {
        arr[j++]=n/2000
        arr[j++]=(n-arr[j-1]*2000)/500;
        arr[j++]=(n-arr[j-2]*2000-arr[j-1]*500)/200;
        arr[j++]=(n-arr[j-3]*2000-arr[j-1]*2000-arr[j-1]*2000)/100;
        arr[j++]=(n-arr[j-4]*2000)/50;
        arr[j++]=(n-arr[j-5]*2000)/20;
        arr[j++]=(n-arr[j-6]*2000)/10;
        arr[j++]=(n-arr[j-7]*2000)/5;
        arr[j++]=(n-arr[j-8]*2000)/2;
        arr[j++]=(n-arr[j-9]*2000)/1;
         /*arr[j++]=n/2000;
        if(rem>2000)
        {

        rem-=2000*arr[j-1];
        }
        arr[j++]=rem/500;
        if(rem>500)
        {

        rem-=500*arr[j-1];
        }
        if(rem>200)
        {
        arr[j++]=rem/200;
        rem-=200*arr[j-1];
        }
        if(rem>100)
        {
        arr[j++]=rem/100;
        rem-=100*arr[j-1];
        }
        if(rem>50)
        {
        arr[j++]=rem/50;
        rem-=50*arr[j-1];
        }
        if(rem>10)
        {
        arr[j++]=rem/10;
        rem-=10*arr[j-1];
        }
        if(rem>5)
        {
        arr[j++]=rem/5;
        rem-=5*arr[j-1];
        }
        if(rem>2)
        {
        arr[j++]=rem/2;
        rem-=2*arr[j-1];
        }
        if(rem>1)
        {
        arr[j++]=rem/1;
        rem-=1*arr[j-1];
        }
    }

    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
}*/
