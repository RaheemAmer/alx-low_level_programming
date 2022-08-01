nes (133 sloc)  4.89 KB
   
# Preprocessor

File 0-object_like_macro.h is a header file that defines a macro named SIZE as an abbreviation for the token 1024.

File 1-pi.h is a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

File 2-main.c is a program that prints the name of the file it was compiled from, followed by a new line.

File 3-function_like_macro.h is a function-like macro ABS(x) that computes the absolute value of a number x.

File 4-sum.h is a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

# Learning Objectives

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

# Tasks

## Object-like Macro

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

**Solution:** [0-object_like_macro.h](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h)

```
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;
    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ ./a 
1122
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ 
```

## Pi

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

**Solution:** [1-pi.h](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h)

```
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;
    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$
```

## File name

Write a program that prints the name of the file it was compiled from, followed by a new line.

* You are allowed to use the standard library

**Solution:** [2-main.c](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/2-main.c)

```
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ 
```

## Function-like macro

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

**Solution:** [3-function_like_macro.h](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h)

```
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;
    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$
```

## SUM

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

**Solution:** [4-sum.h](https://github.com/monoprosito/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h)

```
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;
    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$ ./e 
1122
$ amonkeyprogrammer@ubuntu:~/0x0c. macro, structures$
```



