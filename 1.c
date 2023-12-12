#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define TARGET 9
int main()
{
    srand(time(NULL));
    int COUNT = rand()%10 + 1;
    int array[COUNT];
    memset(array, 0, sizeof(int) * COUNT);
    for (int idx = 0; idx < COUNT; idx++)
    {
        array[idx] = rand()%10 + 1;
    }
    for(int idx = 0; idx < COUNT-1; idx++)
    {
       int NUM = TARGET - array[idx];
        for (int jdx = idx + 1; jdx < COUNT; jdx++)
        {
            {
                if (array[jdx] == NUM)
                {
                    printf("%d %d\n",array[idx], array[jdx]);
                }
            }
        }
        
    }
    
    
    return 0;
}