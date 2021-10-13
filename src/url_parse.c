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

}
