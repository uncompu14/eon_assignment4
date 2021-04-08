#include <stdio.h>
int bubble_sort(int arr[], int count);//함수 호출


int main() {
    int array[7] = { 1, 5, 2, 6, 3, 7, 4 }; // 이퀄라이져 값이 너무 많아서 배열 크기 7으로 설정
    int cut_array[10] = { 0 };
    int bubble, first, last, find;
    printf("어디부터 어디까지 자를고 몇번째 숫자를 나타낼지 결정 : ");
    scanf("%d %d %d", &first, &last, &find);
    for (int i = first-1; i < last; i++)//배열을 자르기, 배열 시작은 0이기 때문에 first-1을 해줌.
    {
        cut_array[i-first+1] = array[i];
    }
  
    bubble = bubble_sort(cut_array, last-first+1);//함수값 대입
    printf("\n잘라서 정렬한 배열 : ");
    for (int j = 0; j < last-first+1; j++) 
    {
        printf("%d ", cut_array[j]);
    }
    printf("\n%d번째 숫자 : %d", find,cut_array[find-1]);
    return 0;
}

int bubble_sort(int arr[], int count) {// 배열을 정리하는 함수
    int temp;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

