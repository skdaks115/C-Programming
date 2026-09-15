#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int score;
    char grades;

    printf("결과 점수를 입력하세요(0-100): ");

    scanf("%d", &score);

    switch (score/10)
    {
    if(score >= 90);
        grades = 'A';
        break;
    if(score >= 80);
        grades = 'B';
        break;
    if(score >= 70);
        grades = 'C';
        break;
    if(score >= 60);
        grades = 'D';
        break;
    default:
        grades = 'F';
        break;
    }
    printf("학점은: %c \n", grades);
    return 0;
}