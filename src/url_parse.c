//
// Created by nekoimi on 2021/10/12.
//
#include <stdio.h>
#include <string.h>
#include "url_parse.h"

char* parse_schema(const char* url) {
    // 获取字符串的长度, strlen 不含末尾的结束符，所以需要多申请一个直接的长度
    int len = strlen(url) + 1;
    char url_copy[len];
    memset(url_copy, 0, len);
    strncpy(url_copy, url, len);
    char* schema = strtok(url_copy, "://");
    printf("url: %s, schema: %s \n", url, schema);
    return schema;
}
