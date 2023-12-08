#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // 打开文件以写入内容
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("无法打开文件。\n");
        return 1;
    }

    // 写入内容到文件
    fprintf(file, "Hello, File I/O in C!\n");
    fprintf(file, "This is a simple example.");

    // 关闭文件
    fclose(file);

    // 打开文件以读取内容
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("无法打开文件。\n");
        return 1;
    }

    // 读取内容并输出到控制台
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    // 关闭文件
    fclose(file);

    return 0;
}
