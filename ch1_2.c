
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int main(){
    FILE *fp;

    if((fp=fopen("test.txt", "r")) == NULL){//fopen()을 사용해 파일을 연다 파일이 존재하지 않으면 오류가 발생해 NULL값을 리턴한다.
        printf("errno=%d\n", errno);
        exit(1);
    }
    fclose(fp);
}