/* 課題3_3 挿入ソート
出典：https://sevendays-study.com/algorithm/day5_insert_c.html
*/
#include <stdio.h>
  
#define MAX_LENGTH  5
 
void showData(int*,int);
 
void main(){
    int array[MAX_LENGTH] = { 5,2,3,1,4 };
    int i,j,tmp;
    for(i = 1; i < MAX_LENGTH; i++){
        showData(array,MAX_LENGTH);
        j = i;
        //  定められた範囲内で、順序の入れ替えが必要な場合の処理
        while(j >= 1 && array[j-1] < array[j]){
            //  値の入れ替え
            tmp = array[j];
            array[j]  = array[j-1];
            array[j - 1] = tmp;
            j--;
            showData(array,MAX_LENGTH);
        }
    }
    showData(array,MAX_LENGTH);
}
 
//  配列の表示
void showData(int* array,int length){
    int i;
    for(i = 0; i < length; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
