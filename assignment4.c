#include <stdio.h>
int bubble_sort(int arr[], int count);//�Լ� ȣ��


int main() {
    int array[7] = { 1, 5, 2, 6, 3, 7, 4 }; // ���������� ���� �ʹ� ���Ƽ� �迭 ũ�� 7���� ����
    int cut_array[10] = { 0 };
    int bubble, first, last, find;
    printf("������ ������ �ڸ��� ���° ���ڸ� ��Ÿ���� ���� : ");
    scanf("%d %d %d", &first, &last, &find);
    for (int i = first-1; i < last; i++)//�迭�� �ڸ���, �迭 ������ 0�̱� ������ first-1�� ����.
    {
        cut_array[i-first+1] = array[i];
    }
  
    bubble = bubble_sort(cut_array, last-first+1);//�Լ��� ����
    printf("\n�߶� ������ �迭 : ");
    for (int j = 0; j < last-first+1; j++) 
    {
        printf("%d ", cut_array[j]);
    }
    printf("\n%d��° ���� : %d", find,cut_array[find-1]);
    return 0;
}

int bubble_sort(int arr[], int count) {// �迭�� �����ϴ� �Լ�
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

