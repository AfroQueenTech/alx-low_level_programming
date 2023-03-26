### Create all the (empty) files at the same time:

```
touch 0-positive_or_negative.c 1-last_digit.c 2-print_alphabet.c 
3-print_alphabets.c 4-print_alphabt.c 5-print_numbers.c 6-print_numberz.c 
7-print_tebahpla.c 8-print_base16.c 9-print_comb.c
```
### Make all the files executable:
```
chmod +x * 
```
-----------------------------------------------

### Solutions:

:zero:
```
vi 0-positive_or_negative.c

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that assigns a random number to a variable n.
 * betty style doc for function main goes there
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);

        return (0);
}
```

:one:
```
vi 1-last_digit.c

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that assigns a random number to a variable n
 * and prints the last digit of that number.
 */
int main(void)
{
        int n, lastDigit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        lastDigit = n % 10;
        if (lastDigit > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
        else if (lastDigit == 0)
                printf("Last digit of %d is %d and is 0\n", n, lastDigit);
        else
                printf("Last digit of %d is %d and is less than 6 and not 0\n",
                                n, lastDigit);
        return (0);
}
```

:two:
```
vi 2-print_alphabet.c

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints the alphabet in lowercase.
 */
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
                putchar(letter);
        }
        putchar('\n');
        return (0);
}
```

:three:
```
vi 3-print_alphabets.c

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints the alphabet in lowercase and UPPERCASE.
 */
int main(void)
{
        char lowercase;
        char uppercase;

        for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
        {
                putchar(lowercase);
        }
        for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
        {
                putchar(uppercase);
        }
        putchar('\n');
        return (0);
}
```

:four:
```
vi 4-print_alphabt.c

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints the alphabet in lowercase except letters e and q.
 */
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
                if (letter == 'e' || letter == 'q')
                        continue;
                putchar(letter);
        }
        putchar('\n');
        return (0);
}

```

:five:
```
vi 5-print_numbers.c

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints all single digit numbers of base ten.
 */
int main(void)
{
        int num;

        for (num = 0; num < 10; num++)
        {
                printf("%d", num);
        }
        putchar('\n');
        return (0);
}
```

:six:
```
vi 6-print_numberz.c

```
