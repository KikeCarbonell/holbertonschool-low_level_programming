# C Programming Language 

![image](https://www.pngitem.com/pimgs/m/31-312155_c-programming-language-logo-hd-png-download.png)

The C programming language was created by Brian Kernighan and Dennis Ritchie in the mid-70s. The first implementation of it was carried out Dennis Ritchie on a DEC PDP-11 computer with UNIX operating system

C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. C programming is an excellent language to learn to program for beginners.

The C language is a structured language.

Every C program basically consists of set of functions, and a function called main, which is the first one that is executed when the program starts, calling from it the rest of the functions that make up our program.

```c
#include <stdio.h>

/**
 * main - basic function 
 */
 int main()
 {
     printf("Hello, World!")
 }
```

The C language has a small number of reserved words(only 32) wwhich defines the ANSI-C standard. These reserved words can be seen in the table following:

|  |  |  |  |  |  |  |
|----- | ----- | ---- | ---- | ----- | -------- | ------- |
| auto | break | case | char | const | continue | default |
| do | double | else | enum | extern | float | for |
| goto | if | int | long | registre | return | short |
| signed | sizeof | static | struct | switch | typedef | union 
| unsigned | void | volatile | while |

- - - - - - - - - - - - - - - - - - - - - - - - 

## Identifiers, data types, variables and constant

### Identifiers

In the C language, an identifier is any unreserved word that begin with a letter or an underline, and may contain letters inside, numbers and underscores.
Identifier written as this_is_un_ident and again as This_Is_Un_Ident will be interpreted as two completely differetn identifiers.

### Data types, type modifiers, and modifiers access.

In C, every variable, before it can be used, must be declared, specifying with this, the type of data it will store. Every variable in C is declared in the form:

```C
<data type> <variable name> [variable name];

int var_name;
```

In C there are five types of data as can be seen in the following table:

| Data Type | Description |
|-----------|-------------|
|**Char**|Character or small integer(byte)|
|**int**|Integer|
|**float**|Floating point|
|**double**|Floating point (greater range than float)|
|**void**|Typeless (special use)|

Ther are also four type modifiers, which are applied to the aforementioned data types. Type modifiers allow you to change the size, etc., of the previously specified data types.

|Modifier|Types of action||Description|
|--------|---------------|-|-----------|
|signed|char|int|signed (default)|
|unsigned|char|int|no sing|
|long|int|double|long|
|short|int||short|

It is also possible to apply two modifiers in a row to the same type of data, thus, it is possible to define a varaible of typw unsigned long int(long integer without sign). The range of values that each variable allows depends on the operating system on which to work

| |Range of possible values in (mathematical notation)||
|--|--|--|
|**Type of declared variable**|**16bits**|**32bits**|
|char / signed char|[-128, 127]|[-128, 127]|
|unsigned char|[0, 255]|[0, 255]|
|int / signed int|[-32768, 32767]|[-2147483647, 2146483648]|
|unsigned int|[0, 65535]|[0, 429496295]|
|short int / signed short int|[-32768, 32767]|[-32768, 32767]|
|unsigned short int|[0, 65535]|[0, 65535]
|long int / signed long int|[-2147483647, 2147483648]|[-2147483647, 2147483648]
|unsigned long int|[0, 4294967295]|[0, 4294967295]|
|float|[-3.4E+38, -3.4E-38], 0, [3.4E-38, 3.4E+38]|[-3.4E+38, -3.4E-38], 0, [3.4E-38, 3.4E+38]|
|double|[-1.7E+308, -1.7E-308], 0, [1.7E-308, 1.7E+308]|[-1.7E+308, -1.7E-308], 0, [1.7E-308, 1.7E+308]|
|long double|[-3.4E+4932, -3.4E-4932], 0, [3.4E-4932, 3.4E+4932]|[-3.4E+4932, -3.4E-4932], 0, [3.4E-4932, 3.4E+4932]|

In addition to the type modifiers, there are access modifiers. The acces modifiers limit the use that can be made of variables declared.

|Modifier|Effect|
|--|--|
|**const**|Variable with constante value|
|**Volatile**|Variable whose value is modified externally|

The declaration of variable as const makes sure that its value will not be modified by the program, except at the time of its declaration, in the which should be assigned an initial value.

```C
const int x = 237;
```

Any subsequent attempts to modify the value of ```x```, such as ```
x = + 5 ```; will fail at compile time.

### Declaration of variables and scope

In C, variables can declared in four places in the module of the Program:
- Out of all the functions of the program, they are the so-called global variables, accessible from anywhere in the program.
- Within a function, they are the so-called local variables, accesible only by the function in which they are declared.
- As parameters to the function, accessible in the same way as if they were declared within the function.
- Within a block of program code, accessible only within the block where it is declared. this form of declaraction can be interpreted as a local variable of the block where it is declared.

```C
#include <stdio.h>

/*Global variable, accessible form   anywhere of the program*/
int sum; 

/* Local variable declared as a parameter accessible only by the sum funtion*/
void suma(int x) 
{
    sum = sum + x;
    return;
}

void intercambio(int *a, int *b)
{
    if (*a > *b)
    {
        /* Local variable, accessible only within the block where is declared*/
        int inter;
        inter = *a;
        *a = *b;
        *b = inter;
    }
    return;
}
/*Main function of the program*/
int main(void)
{
    /*Local variables accessible only for main*/
    int contador, a = 9, b = 0;
    sum = 0;

    intercambio(&a, &b);
    for (contador = a; contador <= b; contador++)
    {
        suma(contador);
        printf("%d\n", suma);
        return (0);
    }
}
```
### Storage type specifiers data.

Once the variable declaration and its scope have been explained, we will proceed to
explain how it is possible to modify the scope of data storage. It is
This can be done by using the storage specifiers. There are four
storage specifiers. These storage specifiers, when
are used, they must precede the declaration of the variable's data type.


|Specifier storage | Effect|
|--|--|
|**auto**| Local variable (by
default)|
|**extern**| External variable|
|**static**| static variable|
|**register**| variable register|

The auto specifier is used to declare that a local variable exists
only while we are inside the subroutine or program block where
declares, but, since by default all local variables are auto, it is not usually used

The extern specifier is used in the development of programs composed of
various modules. The extern modifier is used on the global variables of the module,
so that if a global variable is declared as extern, the compiler does not create a
storage for it in memory, but only takes into account that said
variable has already been declared in another module of the program and is of the data type that
indicates.


The static specifier acts according to the scope of the variable:
- For local variables, the static specifier indicates that said local variable
must be permanently stored in memory, as if it were a global variable, but its scope will be the one that would correspond to a local variable declared in the subroutine or block.
- For global variables, the static specifier indicates that said global variable
is local to the program module where it is declared, and therefore will not be
known by no other module of the program.

El especificador register se aplica solo a variables locales de tipo char e int.
Dicho especificador indica al compilador que, caso de ser posible, mantenga esa
variable en un registro de la CPU y no cree por ello una variable en la memoria.

```c
register unsigned int a;
static float b;
extern int c;
static const unsigned long int d;
```
### Constants

In C, constants refer to fixed values ​​that the program cannot
alter. Some examples of C constants are:

|Data type| Example constants|
|--|--|
|char| ‘a’ ‘9’ 'Q'|
|int| 1 -34 21000|
|long int| -34 67856L 456|
|short int| 10 -12 1500|
|unsigned int| 45600U 345 3|
|float| 12.45 4.34e-3 -2.8e9|
|double| -34.657 -2.2e-7 1.0e100|

The backslash character constants are used to enter
characters that cannot be entered from the keyboard (such as carriage return, etc.).
These constants are provided by C so that it is possible to enter these
characters as constants in programs where necessary. These
backslash character constants are:

|Code| Meaning|
|--|--|
|**\b**| Backspace|
|**\f**| Sheet feed|
|**\n**| New line|
|**\r**| Carriage return|
|**\t**| Horizontal tab|
|**\”**|Double quote|
|**\’**|Single quote|
|**\0**| Null|
|**\\\\**| Backslash|
|**\v**| Vertical ta|
|**\a**| Alert|
|**\o**| Octal constant|
|**\x**| Constant hexadecimal|