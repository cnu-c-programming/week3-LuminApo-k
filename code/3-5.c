#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list sum;
    va_start(sum, count);

    if (type == 'S')
    {
        for (int i = 0; i < count; i++)
        {
            printf("%s ", va_arg(sum,char*));
        }

        printf("\n");
        va_end(sum);
    }else if (type == 'C')
    {
        for (int i = 0; i < count; i++)
        {
            printf("%c", va_arg(sum,char*));
        }
        
        printf("\n");
        va_end(sum);
    }  else if (type == 'D')
    {
        int result = 0;
        for (int i = 0; i < count; i++)
        {
            result += va_arg(sum,int);
        }

        printf("%d", result);
        printf("\n");
        va_end(sum);
    }
}


int main()
{
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);    
    
    return 0;
}
