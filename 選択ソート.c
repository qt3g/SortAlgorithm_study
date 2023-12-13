/* 課題3.2 選択ソート
出典：https://sevendays-study.com/algorithm/day5_select_c.html
*/
#include <stdio.h>
  
#define MAX_LENGTH  5
 
void showData(int*,int);
 
void main(){
    int array[MAX_LENGTH] = { 5,2,3,1,4 };
    int i,j,tmp;
    int max_index = 0;  //  最も大きい値の入っている箇所のインデックス
    //  先頭の要素のループ
    for(i = 0;i < MAX_LENGTH-1 ; i++){
        //  配列の表示
        showData(array,MAX_LENGTH);     
        max_index = i;
        //  現在の状況で、最大の値の入っているインデックスの位置を探す
        for(j = i+1; j < MAX_LENGTH ; j++){
            if(array[max_index] < array[j]){
                max_index = j;
            }
        }
        //  先頭要素より、大きい値があれば、入れ替える。
        if(max_index != i){
                //  値の入れ替え
                tmp = array[i];
                array[i] = array[max_index];
                array[max_index] = tmp;
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
