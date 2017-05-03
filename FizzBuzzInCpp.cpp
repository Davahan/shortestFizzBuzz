#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++)
    { i%15 ? i%5 ? i%3 ? printf("%d\n", i) : puts("Fizz") : puts("Buzz") : puts("FizzBuzz"); }
    return 0;
}
