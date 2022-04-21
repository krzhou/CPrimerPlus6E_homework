/* 修改自addemup.c */
#include <stdio.h>
int main(void)                   /* 计算前20个整数的和   */
{
    int count, sum, total;             /* 声明             */

    count = 0;                  /* 表达式语句          */
    sum = 0;                    /* 表达式语句          */
    printf("Enter total number of terms: ");
    scanf("%d", &total);
    while (count++ < total)        /* 迭代语句            */
        sum = sum + count * count;
    printf("sum = %d\n", sum);  /* 表达式语句         */

    return 0;                /* 跳转语句                */
}
