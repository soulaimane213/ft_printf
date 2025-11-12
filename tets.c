#include "ft_printf.h"

int main(void)
{
int len1, len2;

    // ===== اختبار 1: string =====
    len1 = ft_printf("%p%p\n", 0 , 0);
    len2 = printf(   "%p%p\n", 0 , 0);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", len1, len2);


}