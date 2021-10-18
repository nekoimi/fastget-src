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
 * <host>:<port>
 * @param url
 * @param schema
 * @return
 */
char* parse_domain(const char* url, const char* schema);

/**
 * 解析host
 * @param domain
 * @return
 */
char* parse_host(const char* domain);

/**
 * 解析port
 * @param domain
 * @param schema
 * @return
 */
int parse_port(const char* domain, const char* schema);

#endif //FASTGET_URL_PARSE_H
