
#include <stdio.h>

int main()
{
    
    for(int x = 0; x < 101; x++)
    {
        if( x % 15 == 0)
            printf("FizzBuzz, ");
        else if( x % 3 == 0)
            printf("Fizz, ");
        else if( x % 5 == 0)
            printf("Buzz, ");
        else
            printf("%d, ", x);
        
    }
        puts("\n\n");

    return 0;
}
