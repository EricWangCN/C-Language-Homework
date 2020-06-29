#include <stdio.h>
#include <mm_malloc.h>

typedef struct {
    char szName[20];//Name of the student
    double dScore[2];//Score of two lessons
}STUDENT;

int FailNum(STUDENT *pStu,int nLen);

int main() {
    int nLen;
    printf("How many student in the class?:");
    scanf("%d",&nLen);
    STUDENT *Class = (STUDENT*)malloc(nLen* sizeof(STUDENT));
    for (int i = 0; i < nLen; ++i) {
        scanf("%s %lf %lf",Class[i].szName,&Class[i].dScore[0],&Class[i].dScore[1]);
    }
    printf("there are %d student(s) Failed!\n",FailNum(Class,nLen));
    return 0;
}

int FailNum(STUDENT *pStu,int nLen){
    int fail = 0;
    for (int i = 0; i < nLen; ++i) {
        if (pStu[i].dScore[0] < 60 || pStu[i].dScore[1] < 60) fail++;
    }
    return fail;
}