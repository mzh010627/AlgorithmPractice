#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


#define COUNT  8
int main()
{
    int temp = 0;
    int Sum = 0;
    srand(time(NULL));
    int array[COUNT] = { 0 }; 


    for (int idx = 0; idx < COUNT; idx++)
    {
        array[idx] = rand()%10 + 1;
    }
#if 0
    for (int idx = 0; idx < COUNT - 1; idx++)     //冒泡排序
    {
        for (int jdx = 0; jdx < COUNT - 1 - idx; jdx++)
        {
            if (array[jdx] > array[jdx + 1])
            {
                temp = array[jdx];
                array[jdx] = array[jdx + 1];
                array[jdx + 1] = temp;
            }
            
        }
        Sum++;
    }
    printf("交换的轮数为:%d\n", Sum);
    for(int idx = 0; idx < COUNT; idx++)
    {
        printf(" %d\n", array[idx]);
    }
#endif
    
    return 0;
}