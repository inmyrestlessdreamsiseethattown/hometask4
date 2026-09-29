#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Введите три параметра кислотности A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
    {
        printf("Лунка идеальная для посадки\n");
    }
    else
    {
        printf("Лунка не является идеальной для посадки\n");
    }

    return 0;
}
