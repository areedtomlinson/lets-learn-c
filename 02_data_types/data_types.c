#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
  BOOL a_bool = TRUE;
  printf("\"Boolean\": %d\n", a_bool);

  char a_char = 'Z';
  printf("Char: %c\n", a_char);

  unsigned char an_unsigned_char = 255;
  printf("Unsigned char: %d\n", an_unsigned_char);

  signed char a_signed_char = 127;
  printf("Signed char: %d\n", a_signed_char);

  int an_int_2_bytes = 32767;
  printf("Int (2 bytes): %d\n", an_int_2_bytes);

  unsigned int an_unsigned_int_2_bytes = 65535;
  printf("Unsigned int (2 bytes): %d\n", an_unsigned_int_2_bytes);

  int an_int_4_bytes = 2147483647;
  printf("Int (4 bytes): %d\n", an_int_4_bytes);

  unsigned int an_unsigned_int_4_bytes = 4294967295;
  printf("Unsigned int (4 bytes): %d\n", an_unsigned_int_4_bytes);

  short a_short = 32767;
  printf("Short: %d\n", a_short);

  unsigned short an_unsigned_short = 65535;
  printf("Unsigned short: %d\n", an_unsigned_short);

  long a_long = 2147483647;
  printf("Long: %ld\n", a_long);

  unsigned long an_unsigned_long = 4294967295;
  printf("Unsigned long: %lu\n", an_unsigned_long);

  float a_float = 3.4;  // 3.4E+38
  printf("Float: %fE+38\n", a_float);

  double a_double = 1.7;  // 1.7E+308
  printf("Double: %fE+308\n", a_double);

  long double a_long_double = 1.1;  // 1.1E+4932
  printf("Long double: %LfE+4932\n", a_long_double);
}
