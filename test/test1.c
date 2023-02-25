#include <unistd.h>

int main(void) 
{
    int i;
    char n;

    i = 1;
    while (i <= 100) 
    {
        if (i % 3 == 0 && i % 5 == 0) 
            write(1, "FizzBuzz\n", 9);
        else if (i % 3 == 0) 
            write(1, "Fizz\n", 5);
        else if (i % 5 == 0) 
            write(1, "Buzz\n", 5);
        else 
        {
            n = i + '0';
            write(1, &n, 1);
        }
        i++;
    }
    return 0;
}