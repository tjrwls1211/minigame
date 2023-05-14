#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user {
    char id[21];
    char password[20];
} User;

User* users = NULL;
int member = 0;

void add_user(char* id, char* password) {
    users = (User*)realloc(users, sizeof(User) * (member)+1);
    strcpy(users[member].id, id);
    strcpy(users[member].password, password);
    member++;
}

int main(void) {
    char id[21];
    char password[20];

    printf("=== 회원가입 ===\n");

    printf("\n사용자 정보 입력\n");
    printf("ID: ");
    scanf("%s", id);

    printf("비밀번호: ");
    scanf("%s", password);

    add_user(id, password);

    printf("\n회원가입이 완료되었습니다.\n");

    return 0;
}