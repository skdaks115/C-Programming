#include <stdio.h>

int main() {
    struct Students{
        char name[50];
        int score;
    };
    //학생 구조체 변수 선언
    struct Students s;
    //파일 포인터 3개 선언
    FILE *fp;
    FILE *pass;
    FILE *fail;
    int count;
    // "students.txt"파일을 쓰기 모드로 연다
    fp = fopen("students.txt", "w");
    if(fp == NULL){
        printf("파일 열기 실패");

        return 1;
    }

    printf("학생 수 입력");
    scanf("%d", &count);
    for(int i=0; i<count; i++)
    {
        printf("\n%d번째 학생 이름", i+1);
        scanf("%49s", s.name);
        printf("점수 : ");
        scanf("%d", &s.score);

        fprintf(fp, "%s %d\n",s.name,s.score);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");

    if(fp == NULL || pass == NULL || fail == NULL)
    {
        printf("파일 열기 실패\n");
        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);

        return 1;
    }


    while(fscanf(fp, "%49s %d", s.name, &s.score)==2) {
        if(s.score >= 80){
            fprintf(pass, "%s %d\n", s.name, s.score);
        }
        else{
            fprintf(fail, "%s %d\n", s.name, s.score);
        }
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);

    printf("파일 저장 및 분류 완료!");
}