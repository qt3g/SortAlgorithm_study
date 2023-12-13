/* 課題４-1 バケットソート
出典：
https://www.codereading.com/algo_and_ds/algo/source/bucket_sort.c
*/

#include <stdio.h>

#define M 10   /* Max data size of the range*/

void bucket_sort(int numbers[], int number_of_item);
void print_data(int numbers[]);

int main()
{
    int numbers[M] = {7, 5, 4, 3, 2, 1};

    printf("unsorted\n");
    print_data(numbers);
    printf("\n");

    /* bucket sort */
    bucket_sort(numbers, 6);

    printf("sorted\n");
    print_data(numbers);
    printf("\n");

    return 0;
}

void bucket_sort(int numbers[], int number_of_item)
{
    int buckets[M];
    int i;

    /* prepare buckets 
     step 1 最大値と同じ個数のバケットを用意する
*/
    for (i = 0; i < M; i++) {
        buckets[i] = 0;
    }
    /* putting in bucket 
     step 2 同じ値番のバケットにそのデータを入れる 
*/
    for (i = 0; i < number_of_item; i++) {
        buckets[numbers[i]] = numbers[i];　
    }

    /* back into the original array */
    int j = 0; /* use array key */
    for (i = 0; i < M; i++) {
        if (0 < buckets[i]) {
            numbers[j++] = buckets[i];
        }
    }
}

void print_data(int numbers[])
{
    int i;
    for (i = 0; i < M; i++) {
        if (numbers[i] == 0) {
            continue;
        }
        printf("[%d] %d\n", i, numbers[i]);
    }
}
