#include <stdio.h>
#include <string.h>
#include "url_parse.h"
#include "test.h"

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        return 1;
    }

    const char* url = argv[1];
    const char* domain = parse_schema(url);
    parse_domain(url, domain);

    return 0;
}
