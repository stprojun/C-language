#include <stdio.h>
int main(void)
{
	int Japanese;
    int Social_studies;
    int Science;
    int Sum;
    double Average;

    printf("国語の点数は？");
    scanf("%d", &Japanese);
    printf("社会の点数は？");
    scanf("%d", &Social_studies);
    printf("理科の点数は？");
    scanf("%d", &Science);

    Sum = Japanese + Social_studies + Science;
    Average = (double)Sum / 3.0;

    printf("合計点 = %d\n平均点 = %f\n", Sum, Average); 
	return 0;
}