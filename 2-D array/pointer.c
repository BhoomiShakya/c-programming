// #include <stdio.h>

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int *p,i;
//     p = arr;
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",*p /*or p[i]*/);
//         p++;
//     }

// }

#include <stdio.h>

int main()
{
    int a=5,b=7;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%p\n",p1);
    printf("%p",p2);

}