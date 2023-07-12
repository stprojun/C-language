#include <stdio.h>
#include <math.h>

#define TAX 10.0
#define DIV_PRESCHOOLER 1
#define DIV_ELEMENTARY_SCHOLER  2
#define DIV_JUNIOR_HIGH_SCHOOLER 3
#define PRICE_PRESCHOOLER 200
#define PRICE_ELEMENTARY_SCHOLER 500
#define PRICE_JUNIOR_HIGH_SCHOOLER 1000
#define TRUE 1
#define FALSE 0

int main (void) {
    int division = DIV_PRESCHOOLER;
    int count = 0;
    int price = 0;
    int continuation_1 = TRUE;
    int continuation_2 = TRUE;

    while(continuation_1 == TRUE){

        while(continuation_2 == TRUE){
            printf("区分を入力してください。(1:小学生以下、2:小学生、3:中学生):\n");
            scanf("%d",&division);
            if(division != DIV_PRESCHOOLER && division != DIV_ELEMENTARY_SCHOLER && division != DIV_JUNIOR_HIGH_SCHOOLER){
                printf("正しい区分が入力されていません。\n");
            }
            else{
                continuation_2 = FALSE;
            }
        }
        continuation_2 = TRUE;

        printf("人数を入力してください。:\n");
        scanf("%d",&count);

        if (division == DIV_PRESCHOOLER) {
            price += count * PRICE_PRESCHOOLER;
        }
        else if(division == DIV_ELEMENTARY_SCHOLER) {
            price += count * PRICE_ELEMENTARY_SCHOLER;
        }
        else {
            price += count * PRICE_JUNIOR_HIGH_SCHOOLER;
        }
        printf("続けて入力する場合は「1」\n終了する場合は「0」\nを入力してください\n");
        scanf("%d",&continuation_1);

    }
    

    


    printf("金額(税抜)は%d円\n",price);

    price = round(price * (1 + TAX / 100.0));

    printf("税込価格は%d円です\n",price);

    return 0;
}