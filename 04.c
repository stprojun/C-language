#include <stdio.h>
#include <stdlib.h>

int pivot(int x[],int l,int r){
    int i, j, p, t;
    i=l;//配列の左側走査用
    j=r-1;//配列の右側走査用
    p=x[r];//pはピボット
    while(1){
        while(x[i]<p){
            i++;
        };
        while(i<j&&p<x[j]){
            j--;
        };
        if(i>=j)
            break;
        t=x[i];
        x[i]=x[j];
        x[j]=t;
    }
    t=x[i];
    x[i]=x[r];
    x[r]=t;
    return i;
}

void quick(int x[],int l, int r){
    int v;
    if(l>=r)
        return;
    v=pivot(x,l,r);
    quick(x,l,v-1);
    quick(x,v+1,r);
}

int main(void)
{

    int row[10];
    for (int i = 0; i < 10; i++) {
        row[i] = rand() % 100;
        printf("%d ", row[i]);
    }
    printf("\n");
    quick(row,0,9);

    for (int i = 0; i < 10; i++) {
        printf("%d ", row[i]);
    }
    
	return 0;
}