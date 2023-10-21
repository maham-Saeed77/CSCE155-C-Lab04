#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1);

  // 1. Rewrite the given for loop as an equivalent while loop
  int i = 10;
  while(i < 20) {
    printf("%d ", i);
    i += 3;
  }
  printf("\n");

  // 2. Rewrite the given while loop as an equivalent for loop
  for(int k = 3; k > -4; k--) {
    printf("%d ", k);
  }
  printf("\n");

  // 3. Print numbers 1 thru n separated by a comma except for the last one
  for(int i = 1; i <= n; i++) {
    printf("%d", i);
    if(i < n) {
      printf(", ");
    }
  }
  printf("\n");

  // 4. Print squares of numbers 1 thru n separated by a comma
  for(int i = 1; i <= n; i++) {
    printf("%d", i * i);
    if(i < n) {
      printf(", ");
    }
  }
  printf("\n");

  // 5. Compute the summation of numbers 1 thru n and print the result
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += i;
    printf("%d", i);
    if(i < n) {
      printf(" + ");
    }
  }
  printf(" = %d\n", sum);

  // 6. Compute the summation of squares of numbers 1 thru n and print the result
  int sumSquares = 0;
  for(int i = 1; i <= n; i++) {
    sumSquares += i * i;
    printf("%d^2", i);
    if(i < n) {
      printf(" + ");
    }
  }
  printf(" = %d\n", sumSquares);

  // 7. Compute the summation of even numbers 1 thru n and print the result
  int sumEven = 0;
  for(int i = 2; i <= n; i += 2) {
    sumEven += i;
    printf("%d", i);
    if(i < n) {
      printf(" + ");
    }
  }
  printf(" = %d\n", sumEven);

  // 8. Print "Foo," "Bar," or "FooBar" based on the divisibility of the number
  for(int i = 1; i <= n; i++) {
    if (i % 7 == 0 && i % 11 == 0) {
      printf("FooBar\n");
    } else if (i % 7 == 0) {
      printf("Foo\n");
    } else if (i % 11 == 0) {
      printf("Bar\n");
    } else {
      printf("%d\n", i);
    }
  }

  return 0;
}