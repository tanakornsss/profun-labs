#include <stdint.h>
#include <stdio.h>

int main() {
  
  // 1 + 1 = 2
  //     1 + 2 = 3
  //         2 + 3 = 5
  
  uint64_t a = 1, b = 1;

  for (int i = 1; i <= 100; i++) {
    uint64_t fib = a + b;
    printf("%llu\n", fib);
    a = b;
    b = fib;
  }

  return 0;
}
