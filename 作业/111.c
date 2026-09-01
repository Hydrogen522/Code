#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pwd[101];
    int len, i;
    int ok = 1;
    int hasLower = 0, hasDigit = 0, hasSpecial = 0;
    const char *specials = "~!@#$%*";

    // 输入密码
    if (fgets(pwd, sizeof(pwd), stdin) == NULL) {
        return 0;
    }

    // 去掉末尾换行符
    len = (int)strlen(pwd);
    if (len > 0 && pwd[len - 1] == '\n') {
        pwd[len - 1] = '\0';
        len--;
    }

    // 条件1：长度在 8~16 之间
    if (len < 8 || len > 16) {
        ok = 0;
    }

    // 条件2：开头必须是大写
    if (!isupper((unsigned char)pwd[0])) {
        ok = 0;
    }

    // 条件3：至少包含一个小写字母、一个数字、一个特殊符号
    for (i = 0; pwd[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)pwd[i];

        if (islower(ch)) {
            hasLower = 1;
        } else if (isdigit(ch)) {
            hasDigit = 1;
        } else if (strchr(specials, ch) != NULL) {
            hasSpecial = 1;
        }
    }

    if (!hasLower || !hasDigit || !hasSpecial) {
        ok = 0;
    }

    // 输出结果
    puts(ok ? "true" : "false");

    return 0;
}