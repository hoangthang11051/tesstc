#include<stdio.h>

void tim_max(float *a,int n,int &v1,int &v2,float &max,float &max2,int&t);
void tim_max(float *a,int n,int &v1,int &v2,float &max,float &max2,int&t)
{  int i;
    max = a[0];
    v1 = t =0;
    // Tim gia tri lon nhat thu nhat
    for(i=1; i<n; i++)
        if ( max < a[i])
        { max = a[i];
            v1 =i;
        }
    //TIM GIA TRI LON NHAT THU 2
    //Gan max2 = gia tri a[i] khac max
    for(i=0;i<n;i++)
        if (a[i]<max)
        { t=1;
            max2=a[i];
            v2=i;break;
        }
    //Tim max2
    for(i=0;i<n;i++)
        if(a[i]<max && a[i]>max2)
        { max2=a[i];
            v2=i;
        }
}

//################################################################

int main()
{
    float a[100],max,max2;
    int n,v1,i,t,v2;
    clrscr();
    printf("Nhap so phan tu:\n");
    scanf("%d",&n);
    
    printf("Nhap %d phan tu:\n",n);
    for( i=0;i<n;i++)
        scanf("%f",&a[i]);
    
    tim_max(a,n,v1,v2,max,max2,t);
    printf("\nSo lon nhat= %0.2f\no vi tri %d",max,v1);
    
    if(t==0)
        printf("\nKhong tim thay so lon nhat thu 2.\n");
    else
        printf("\nSo lon nhat thu 2= %0.2f\no vi tri %d",max2,v2);
    
    return 0;
}
