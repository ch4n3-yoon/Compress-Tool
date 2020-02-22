#include <stdio.h>
#include <unistd.h>
#include <zlib.h>

#define FILE_READ_FAILED -1

int main(int argc, char * argv[]) {
    char * filename = argv[1];
    
    if (argc < 2) {
        printf("[*] Usage : %s [filename]\n", argv[0]);
        return -1;
    }

    if (access(filename, R_OK) == FILE_READ_FAILED) {
        printf("[x] '%s' does not exist.\n", filename);
        return -1;
    }
}
