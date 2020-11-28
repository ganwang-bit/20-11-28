////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    printf("Hello world!\n");
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
////    char arr[]="abcdef";
////    printf("%d\n",sizeof(arr));7
////    printf("%d\n",sizeof(arr+0));4\8
////    printf("%d\n",sizeof(*arr));1
////    printf("%d\n",sizeof(arr[1]));1
////    printf("%d\n",sizeof(&arr));4\8
////    printf("%d\n",sizeof(&arr+1));4\8
////    printf("%d\n",sizeof(&arr[0]+1));1
////    char arr[]="abcdef";
////    printf("%d\n",strlen(arr));6
////    printf("%d\n",strlen(arr+0));6
////    printf("%d\n",strlen(*arr));err
////    printf("%d\n",strlen(arr[1]));err
////    printf("%d\n",strlen(&arr));6
////    printf("%d\n",strlen(&arr+1));Ëæ»úÖµ
////    printf("%d\n",strlen(&arr[0]+1));5
////    char* arr="abcdef";
////    printf("%d\n",sizeof(arr));4\8
////    printf("%d\n",sizeof(arr+0));4\8
////    printf("%d\n",sizeof(*arr));1
////    printf("%d\n",sizeof(arr[1]));1
////    printf("%d\n",sizeof(&arr));4\8
////    printf("%d\n",sizeof(&arr+1));4\8
////    printf("%d\n",sizeof(&arr[0]+1));1
////    int a[4]={1,2,3,4};
////    int*pr1=(int*)(&a+1);
////    int*pr2=(int*)((int)a+1);
//////    printf("%x,%x",pr1[-1],*pr2);
////int a[3][2]={{(0,1)，(2,3),(4,5)};
////int*p;
////p=a[0];
////printf("%d",p[0]);
//    int a[5][5];
//    int(*p)[4];
//    p=a;
//    printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
//    return 0;
//}
#include<stdio.h>
int main()
{
//    char*a[]={"wor","at","werwe"};
//    char**pa=a;
//    printf("%s\n",*pa);

//    int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//    int *ptr1=(int*)(&aa+1);
//    int*ptr2=(int*)(*(ptr2+1));
//    printf("%d,%d\n",*(ptr1-1),*(ptr2-1));
    char*c[]={"enter","new","pont","first"};
    char**cp[]={c+3,c+2,c+1,c};
    char***cpp=cp;
    printf("%s\n",**++cpp);
    printf("%s\n",*--*++cpp+3);
    printf("%s\n",*cpp[-2]+3);
    printf("%s\n",cpp[-1][-1]+1);
    return 0;
}

