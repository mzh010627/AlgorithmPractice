#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define COUNT 6
int main()
{
    int temp = 0;
    int flage = 0;
    int target = 2;
    int array[COUNT] = {0};
    srand(time(NULL));
    for (int idx = 0; idx < COUNT; idx++)
    {
        array[idx] = rand() % 10 + 1;
    }
    for (int idx = 0; idx < COUNT; idx++)
            {
                printf("%d ",array[idx]);
            }
    printf("\n");
    printf("请输入你要去除的数字：");
    scanf("%d",&target);
    int jdx = 0;
    for (int idx = 0; idx < COUNT; idx++)
    {
        if (array[idx] != target )
        {
            array[jdx] = array[idx];
            jdx++;
            temp++;
        }
        for (int idx = 0; idx < COUNT; idx++)
            {
                printf("%d ",array[idx]);
            }
            printf("\n");
    }
    printf("%d\n",temp);
    printf("最终的数组为：{ ");
    for (int idx = 0; idx < temp; idx++)
    {
        printf("%d  ",array[idx]);
    }
    printf("}\n");
    

    return 0;
}