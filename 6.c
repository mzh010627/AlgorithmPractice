#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFFER_SIZE 5
char *ptr = "hello";
int main()
{
    char *temp = 0;
    char * array[BUFFER_SIZE] = {"hello", "world", "nihao", "zhangsan", "china"};
    for (int idx = 0; idx < BUFFER_SIZE - 1; idx++)
    {
        for (int jdx = 0; jdx < BUFFER_SIZE - 1 - idx; jdx++)
        {
           if ((strcmp(array[jdx], array[jdx + 1])) > 0)
           {

            temp = array[jdx];
            array[jdx] = array[jdx + 1]; 
            array[jdx + 1] = temp;

           }
            
        }
        
    }
    printf("%s\n", *(array+1));
    printf("%c\n", *array[1]);
    printf("%s\n",*array+1);
    printf("%s\n",array[1]);
    printf("%c\n",*(*(array+1)));
    printf("排序后的字符数组为：{\t");
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%s\t",array[idx]);
    }
    printf("}\n");
    return 0;
}