/* 課題4-2 分布数え上げソート
出典：
https://www.codereading.com/algo_and_ds/algo/counting_sort.html
*/

#include <stdio.h>

/* キーは0からMまでの範囲の整数 */
#define  M   10

void counting_sort(int a[], int b[], int n);
void print_data(int data[], int array_length);

int src_data[] = {8,4,10,3,8,5};
#define N sizeof(src_data) / sizeof(src_data[0])

/* 作業用配列 (N は配列の要素数) */
int work_data[N-1];

/* キーの分布を数え上げるための配列 */
int count[M+1];

int main(int argc, char **argv)
{
    printf("unsorted:\n");
    print_data(src_data, N);

    /* counting sort */
    counting_sort(src_data, work_data, N);

    printf("sorted:\n");
    print_data(work_data, N);
    return 0;
}

/*
分布数え上げソート
配列aを整列する。結果は配列bが保持する。
int a[]は ソート対象の配列
int b []は作業用の配列
int n は、ソート対象の配列の要素数
*/
void counting_sort(int a[], int b[], int n)
{
    int  i;

    /* カウンタ(キーの出現回数)を初期化 */
    for (i = 0; i <= M; i++)
        count[i] = 0;

    /* キーの出現回数 */
    for (i = 0; i < n; i++)
        count[a[i]]++;

    /* 数え上げたキーの累積度数分布 */
    for (i = 0; i < M; i++) {
        count[i+1] += count[i];
    }

 /* 度数分布に従ってデータを配列aから配列bにコピーする */
    for (i = n - 1; i >= 0; i--) {
        b[--count[a[i]]] = a[i];
    }
}

void print_data(int data[], int array_length)
{
    int i;
    for (i = 0; i < array_length; i++) {
        printf("%d\n", data[i]);
    }
}
