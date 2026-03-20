#include <stdio.h>
#include <stdarg.h>

int max_of(int count, ...) {
    va_list num;
    va_start(num,count);

    int numChoice = va_arg(num,int);
    int maxNum = numChoice;

    for (int i = 1; i < count; i++)
    {
        numChoice = va_arg(num,int);
        if (maxNum < numChoice)
        {
            maxNum = numChoice;
        }        
    }
    
    return maxNum;    
}


int main(int argc, char const *argv[])
{
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    
    return 0;
}
