#include <stdio.h>
#include <string.h>
#include "url_parse.h"
#include "test.h"

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        return 1;
    }

    const char* url = argv[1];
    const char* schema = parse_schema(url);
    const char* domain = parse_domain(url, schema);
    const char* host = parse_host(domain);
    int port = parse_port(domain, schema);
    return 0;
}
