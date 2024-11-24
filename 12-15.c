#include <stdio.h>

// 재귀적인 팩토리얼 함수 계산
long factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(void)
{
    int x = 0;
    long f;

    printf("정수를 입력하시오:");
    scanf_s("%d", &x);
    printf("%d! 은 %d입니다. \n", x, factorial(x));
    return 0;
}
