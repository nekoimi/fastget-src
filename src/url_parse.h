//
// Created by nekoimi on 2021/10/12.
//

#ifndef FASTGET_URL_PARSE_H
#define FASTGET_URL_PARSE_H

/**
 * 解析schema
 * @param url
 * @return
 */
char* parse_schema(const char* url);

/**
 * 解析domain
 * @param url
 * @param schema
 * @return
 */
char* parse_domain(const char* url, const char* schema);

#endif //FASTGET_URL_PARSE_H
