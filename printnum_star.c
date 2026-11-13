#include <unistd.h>

void printnum(int n)
{
    char c;

    if(n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
    {
        printnum(n / 10); // recursive, gets called until you reach and isolate the leftmost digit in a number
    }

    c = (n % 10) + '0'; // gets the rightmost digit using modulo, and then prints it!
    write(1, &c, 1);
}

int main(void)
{
    printnum(-1003);
    write(1, "\n", 1);
    printnum(0);
    write(1, "\n", 1);
    printnum(14284913);
    write(1, "\n", 1);
}