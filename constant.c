#include <stdio.h>

#define PI 3.1415 //宏的定义没有分号结束标记

int main()
{
    int r = 3;

    float s = PI * r * r;
    float l = PI * 2 * r;

    printf("面积是%f\n",s);
    printf("周长是%f\n",l);

    printf("面积是%.2f\n",s);
    printf("周长是%.2f\n",l);

}

