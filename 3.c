#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define COUNT 8
int main()
{
    int array[COUNT] = {1, 2, 3, 5, 5, 6, 6, 7};
    int flage = 0;
    int temp = 0;
    for (int idx = 1; idx < COUNT ; idx++)
    {

        if (array[idx - 1] != array[idx])
        {
            flage++;
        }  
    }
    int *arrayplus = (int *)malloc(sizeof(int) * flage);
    memset(arrayplus, 0, sizeof(int) * flage);
    for (int idx = 0; idx < COUNT; idx++)
    {
        if (array[idx - 1] != array[idx])
        {
            arrayplus[temp] = array[idx];
            temp++;
        }  
    } 
    printf("去除重复元素后的数组为：");
    for (int idx = 0; idx < temp; idx++)
    {
        printf(" %d ",arrayplus[idx]);
    }
    

    return 0;
}