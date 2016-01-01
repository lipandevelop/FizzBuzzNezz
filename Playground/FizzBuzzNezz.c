
#include <stdio.h>

int main()

{
    printf("FizzBuzz Assignment\n\n");
    
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
        puts("\n");
    printf("FizzBizzNezz Assignemnt\n\n");
    
    int fizz = 7;
    int bizz = 13;
    int nezz = 57;
    for( int y = 1; y < nezz; y++)
    {
        if(y % bizz * fizz == 0)
            printf("Fizzbizz, ");
        else if(y % bizz == 0)
            printf("Bizz, ");
        else if(y % fizz == 0)
            printf("Fizz, ");
        else
            printf("%d, ", y);
    }
        puts("\n\n");

    return 0;
}
