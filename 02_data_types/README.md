## Data Types
| Type | Size | Range |
| char | 1 byte | -128 to 127 or 0 to 255 |
| unsigned char | 1 byte | 0 to 255 |
| signed char | 1 byte | -128 to 127 |
| int | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 |
| unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295 |
| short | 2 bytes | -32,768 to 32,767 |
| unsigned short | 2 bytes | 0 to 65,535 |
| long |4 bytes | -2,147,483,648 to 2,147,483,647 |
| unsigned long | 4 bytes | 0 to 4,294,967,295 |
| float | 4 byte | 1.2E-38 to 3.4E+38 | 6 decimal places |
| double | 8 byte | 2.3E-308 to 1.7E+308 | 15 decimal places |
| long double | 10 byte | 3.4E-4932 to 1.1E+4932 | 19 decimal places |
## Booleans
No such thing in C. Here's how we do it:
```
#define BOOL char
#define FALSE 0
#define TRUE 1
```

### Variables in printf
More on this later, but here are a few examples. The basics:
```
printf("%d", a);
```
Here, `%d` is a signed decimal number (`%i` works the same for output).
Some (not all) other types:
| Type | Format |
| int | %d |
| char | %c |
| long | %ld |
| unsigned long | %lu |
| float or double | %f |
| long double | %Lf |
Much more info [here](https://en.wikipedia.org/wiki/Printf_format_string), and probably later lessons.