#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    float A = 21.317;
    int a = 21;
    int b = 317;
    float C;

    C = b + a / 100.0;

    printf("Было = %.3f\n", A);
    printf("Стало = %.2f\n", C);

    return 0;
}