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

    printf("=== ȸ������ ===\n");

    printf("\n����� ���� �Է�\n");
    printf("ID: ");
    scanf("%s", id);

    printf("��й�ȣ: ");
    scanf("%s", password);

    add_user(id, password);

    printf("\nȸ�������� �Ϸ�Ǿ����ϴ�.\n");

    return 0;
}