#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n; scanf("%d",&n);
    int flag = 0; char name[100];
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        if (strcmp(name, "anj") == 0) {
            flag = 1; break;
        }
    }

    if (flag) printf("뭐야;");
    else printf("뭐야?");

    return 0;
}
