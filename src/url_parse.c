//
// Created by nekoimi on 2021/10/12.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "url_parse.h"

char *parse_schema(const char *url) {
    char *p = strstr(url, "://");
    if (p == NULL) {
        printf("URL format error!");
        exit(1);
    }
    long len = (p - url) + 1;
    char* schema = (char*)malloc(len);
    memset(schema, 0, len);
    strncpy(schema, url, len - 1);
    printf("url: %s, schema: %s\n", url, schema);
    return schema;
}

char* parse_domain(const char* url, const char* schema) {
    // 移动到://后面
    // url 现在已经是 :// 之后的部分了
    url = url + strlen(schema) + strlen("://");

    char a[3] = {'/', '?', '#'};
    int p = 0;
    int min = 0;
    char* s = NULL;

    for (int i = 0; i < 3; ++i) {
        s = strchr(url, a[i]);
        if (s != NULL) {
            p = s - url;
            if (i == 0 || min > p) {
                min = p;
            }
        }
    }

    if (min == 0) {
        min = strlen(url);
    }

    char* domain = (char*)malloc(min + 1);
    memset(domain, 0, min + 1);
    strncpy(domain, url, min);
    printf("url: %s, domain: %s\n", url, domain);
    return domain;
}
