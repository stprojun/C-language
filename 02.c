#include <stdio.h>
int main(void)
{
	int price;
    int num;
    int total_notaxprice;
    float total_taxprice;

    printf("単価を入力してください");
    scanf("%d", &price);
    printf("個数を入力してください");
    scanf("%d", &num);
    total_notaxprice = price * num;
    total_taxprice = (float)total_notaxprice * 1.1;
    printf("税抜価格は%d\n", total_notaxprice);
    printf("税込価格は%.0f", total_taxprice);
    
	return 0;
}