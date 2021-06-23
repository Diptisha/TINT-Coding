#include<stdio.h>
int main()
{
    int m,yr;
    float x,y,z,t,w,d_sum=0,m_sum=0;
    scanf("%f %f %f %f %f %d %d",&x,&y,&z,&t,&w,&m,&yr);
    if(y<x || y<z || y<t || y<w || m<1 || m>12)
        printf("Error");
    else
    {
        d_sum+=x+y+z+t+w;
        if(m==1 | m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            m_sum=d_sum*31;
        else if(m==2 && yr%4==0)
            m_sum=d_sum*29;
        else if(m==2)
            m_sum=d_sum*28;
        else
            m_sum=d_sum*30;
        printf("%f %f",d_sum,m_sum);
    }
}
