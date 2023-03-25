### Create all the below files at the same time:

```
touch 0-positive_or_negative.c 1-last_digit.c 2-print_alphabet.c 3-print_alphabets.c 4-print_alphabt.c 5-print_numbers.c 6-print_numberz.c 7-print_tebahpla.c 8-print_base16.c 9-print_comb.c
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

```

:two:
```
vi 2-print_alphabet.c

```

:three:
```
vi 3-print_alphabets.c

```

:four:
```
vi 4-print_alphabt.c

```

:five:
```
vi 5-print_numbers.c

```

:six:
```
vi 6-print_numberz.c

```
