/* 課題3_4 シェルソート
出典：https://sevendays-study.com/algorithm/day5_shell_c.html
*/
#include <stdio.h>  
#define MAX_LENGTH  5 
#define MAX_LENGTH  8
  
void showData(int*,int);
 
void main(){
    int array[MAX_LENGTH] = { 41,23,55,36,14,32,59,90 };
    int i, j, step, tmp;
    //  飛ばしていく数を設定
    step = MAX_LENGTH / 2;
    while (step > 0)
    {
        //  途中結果の表示
        showData(array,MAX_LENGTH);
        for(i=0; i < MAX_LENGTH; i++)
        {
            j = i;
            tmp = array[i];
            //  順序が適切でなければ、並べ替えを行う
            while (j >= step && array[j - step] < tmp){
                array[j] = array[j - step];
                j -= step;
            }
            array[j] = tmp;
        }
        step /= 2;
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
    printf("\n");
}
