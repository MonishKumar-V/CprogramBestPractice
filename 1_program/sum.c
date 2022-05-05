#include <stdio.h>
#include <string.h>
int sum(char* arr,int len)
{
    int sum = 0;
    for(int i=0;i<len;i++)
    {
        sum = sum + (int) arr[i];
    }
    printf("%x\n",sum);
    return 0;
    
}
