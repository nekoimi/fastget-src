#include <stdio.h>
#include <string.h>
#include "url_parse.h"

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        return 1;
    }

    const char* url = argv[1];
    parse_schema(url);

    return 0;
}
