//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%f",(float)2-(int)1);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    scanf("%d",&n);
//    float arr1[n],arr2[n],tmp;
//    for(i=0;i<n;i++)
//    {
//        scanf("%f",&arr1[i]);
//        if(arr1[i]-(int)arr1[i]>0.5)
//            arr2[i]=(double)((int)arr1[i]+1)-arr1[i];
//        else
//            arr2[i]=arr1[i]-(int)arr1[i];
//    }
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(arr2[j]>arr2[j+1])
//            {
//                tmp=arr1[j];
//                arr1[j]=arr1[j+1];
//                arr1[j+1]=tmp;
//                tmp=arr2[j];
//                arr2[j]=arr2[j+1];
//                arr2[j+1]=tmp;
//            }
//            else if(arr2[j]==arr2[j+1])
//            {
//                if(arr1[j]>arr1[j+1])
//                {
//                    tmp=arr1[j];
//                    arr1[j]=arr1[j+1];
//                    arr1[j+1]=tmp;
//                    tmp=arr2[j];
//                    arr2[j]=arr2[j+1];
//                    arr2[j+1]=tmp;
//                }
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//        printf("%f ",arr1[i]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[101]={0},n,i,tmp,count=0;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        arr[tmp]++;
//    }
//    i=100;
//    while(1)
//    {
//        count+=arr[i];
//        if(2*count>=n)
//        {
//            printf("%d %d",i,count);
//            break;
//        }
//        i--;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,l1,r1,l2,r2,i,j,tmp;
//    scanf("%d %d %d %d %d",&n,&l1,&r1,&l2,&r2);
//    int arr[n];
//    for(i=0;i<n;i++)
//        scanf("%d",&arr[i]);
//    for(i=l1-1;i<r1-1;i++)
//    {
//        for(j=l1-1;j<r1-1;j++)
//            if(arr[j]>arr[j+1])
//            {
//                tmp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=tmp;
//            }
//    }
//    for(i=l2-1;i<r2-1;i++)
//    {
//        for(j=l2-1;j<r2-1;j++)
//            if(arr[j]<arr[j+1])
//            {
//                tmp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=tmp;
//            }
//    }
//    for(i=0;i<n;i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n=10;
//    int *a=&n;
//    printf("%d",a[0]);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int cmp(const void*a,const void *b)
//{
//    return *(char*)a-*(char*)b;
//}
//int main()
//{
//    char arr[10001];
//    int R=0,G=0,B=0,i=0,count=0;
//    while(scanf("%c",&arr[i])&&arr[i]!='\n')
//    {
//        if(arr[i]=='R')
//            R++;
//        else if(arr[i]=='G')
//            G++;
//        else if(arr[i]=='B')
//            B++;
//        i++;
//    }
//    arr[i]='\0';
//    qsort(arr,strlen(arr),sizeof(char),cmp);
//    while(R>=1&&G>=2&&B>=3)
//    {
//        R--;
//        G-=2;
//        B-=3;
//        count++;
//    }
//    printf("%s\n%d",arr,count);
//    return 0;
//}
#include<stdio.h>
int f(int n)
{
    if(n)
    {
        return n%10+f(n/10);
    }
    else
        return 0;
}
int main()
{
    int n,i,j,tmp;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=f(arr1[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                tmp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=tmp;
                tmp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=tmp;
            }
            else if(arr2[j]==arr2[j+1])
            {
                if(arr1[j]>arr1[j+1])
                {
                    tmp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]=tmp;
                    tmp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]=tmp;
                }
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr1[i]);
    return 0;
}
