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

    // 삽입 정렬
    // 두 번째 값부터 하나씩 꺼내서
    // 이미 정렬된 부분의 알맞은 위치에 삽입
    for (int i = 1; i < size; i++)
    {
        // 현재 삽입할 값을 저장
        int key = arr[i];

        // 비교할 위치
        int j = i - 1;

        // 정렬된 부분에서 key보다 큰 값을 오른쪽으로 이동
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // key를 알맞은 위치에 삽입
        arr[j + 1] = key;
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