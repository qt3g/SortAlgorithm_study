/* 課題3.1 バブルソート
出典：https://sevendays-study.com/algorithm/day5_bubble_c.html
*/
#include <stdio.h>
  
#define MAX_LENGTH  5
 
void showData(int*,int);
 
void main(){
    int array[MAX_LENGTH] = { 5,2,3,1,4 };
    int i,j,tmp;
    //  先頭の要素のループ
    for(i = 0;i < MAX_LENGTH-1 ; i++){
        //  配列の表示
        showData(array,MAX_LENGTH);
        for(j = i+1; j < MAX_LENGTH ; j++){
            if(array[i] < array[j]){
                //  値の入れ替え
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    //  最後にもう一度結果表示
    showData(array,MAX_LENGTH);
}
 
//  配列の表示
void showData(int* array,int length){
    int i;
    for(i = 0; i < length; i++){
        printf("%d ",array[i]);
    }
    printf("¥n");
}
