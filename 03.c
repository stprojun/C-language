#include <stdio.h>
int main(void)
{
	int child_price = 800, adult_price = 1500, num = 0, total_price = 0, age_group;

    printf("区分を入力してください１：子供、２：大人）\n");
    scanf("%d", &age_group);

    if (age_group == 1){
        printf("子供の人数を入力してください\n");
        scanf("%d", &num);
        total_price = child_price * num;

        printf("大人の人数を入力してください\n");
        scanf("%d",&num);
        total_price += adult_price * num;
    }else{
        printf("大人の人数を入力してください\n");
        scanf("%d", &num);
        total_price = adult_price * num;

        printf("子供の人数を入力してください\n");
        scanf("%d", &num);
        total_price += child_price * num;
    }
    printf("合計の料金は%dです\n", total_price);
    
	return 0;
}