#include <stdio.h>
#include <string.h>
#include "sum.h"

int sum(char* arr,int len);

int main()
{
    char arr[15];
    scanf("%[^\n]",arr);
    int len = strlen(arr); 
    sum(arr,len);
    return 0;
}
