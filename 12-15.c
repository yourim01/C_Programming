#include <stdio.h>

// ������� ���丮�� �Լ� ���
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

    printf("������ �Է��Ͻÿ�:");
    scanf_s("%d", &x);
    printf("%d! �� %d�Դϴ�. \n", x, factorial(x));
    return 0;
}
