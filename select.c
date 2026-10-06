#include <stdio.h>

int main()
{
    // 정렬할 배열
    int arr[] = { 5, 2, 8, 1, 9, 3 };

    // 배열의 크기
    int size = sizeof(arr) / sizeof(arr[0]);

    // 정렬 전 배열 출력
    printf("정렬 전: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // 버블 정렬
    // 인접한 두 숫자를 비교해서 큰 숫자를 오른쪽으로 이동
    for (int i = 0; i < size - 1; i++)
    {
        // 아직 정렬되지 않은 부분만 비교
        for (int j = 0; j < size - 1 - i; j++)
        {
            // 앞의 숫자가 뒤의 숫자보다 크면
            if (arr[j] > arr[j + 1])
            {
                // 두 숫자의 위치를 바꿈
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 정렬 후 배열 출력
    printf("정렬 후: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
