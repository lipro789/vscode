#include <stdio.h>

int main()
{
    int (*p)[5] = NULL;//指向拥有5个整型数据的指针
    int arr[5]={1,3,5,7,9};
    p = &arr;//整个数组的首地址
    printf("arr = %p\n",arr);
    printf("arr +1 = %p\n",arr+1);
    printf("&arr = %p\n",arr);
    printf("&arr +1 = %p\n",&arr+1);
    printf("p = %p\n",p);
    printf("p +1 = %p\n",p+1);
    printf("*p  = %p\n",*p);
    printf("(*p) +1 = %p\n",(*p));
    printf("111\n");
     printf("444\n");
    return 0;
}