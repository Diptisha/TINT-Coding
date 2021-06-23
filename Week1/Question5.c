
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,b_date,b_mon,b_yr,c_date,c_mon,c_yr,prime=0,compo=0,check=0,weeks,date=0,mon=0,yr=0;

    scanf("%d %d %d %d %d %d",&b_date,&b_mon,&b_yr,&c_date,&c_mon,&c_yr);
    int month[]={ 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
   //  yr=c_yr-b_yr;
  //  mon=c_mon-b_mon;

    if(b_date>c_date)
    {
        date=month[b_mon-1]-b_date+c_date;
        if(date>month[b_mon]){
            mon+=1;
        date-=month[b_mon];}
    }
    else
        date=c_date-b_date;
    if(b_mon>c_mon)
    {
        mon+=12-b_mon+c_mon-1;
        yr-=1;
    }
    else
        mon+=c_mon-b_mon;
    yr+=c_yr-b_yr;
    weeks=(yr*365+mon*30+date)/7;
   // printf("%d %d %d %d ",yr,mon,date,weeks);
    for(i=2;i<=weeks/2;i++)
    {
        if(weeks%i==0)
        {
        check=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                check=0;
                break;
            }
        }
        if(check==1)
            prime+=i;
        else
            compo+=i;
        }
    }
   if(compo>prime)
    printf("Not Grant");
   else
    printf("Grant");
}
