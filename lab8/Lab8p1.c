#include <stdio.h>

int main() {
    int num1 = 113;
    int num2;

    float price1 = 4.85;
    char hint1 = 'J';
    char hint2;

    int* pt_num;
    float* pt_price;
    char* pt_hint;

    pt_num = &num1;
    pt_price = &price1;
    pt_hint = &hint1;

    num2 = *pt_num;
    hint2 = *pt_hint;

    printf("Variable num1 = %d\n", num2);
    printf("Variable price1 = %f\n", *pt_price);
    printf("Variable hint2 = %c\n", hint2);

    return 0;
}

// | (variable) | (&Variable) | (value) | (dereference value) |
// |-------------|-------------|----------|-------------------|
// | num1        | 0x5ffe9c    | 113       | N/A              |
// | num2        | 0x5ffe98    | 113       | N/A              |
// | price1      | 0x5ffe94    | 4.850000  | N/A              |
// | hint1       | 0x5ffe93    | J         | N/A              |
// | hint2       | 0x5ffe92    | J         | N/A              |
// | pt_num      | 0x5ffe88    | 0x5ffe9c  | 113              |
// | pt_price    | 0x5ffe80    | 0x5ffe94  | 4.850000         |
// | pt_hint     | 0x5ffe78    | 0x5ffe93  | J                |
