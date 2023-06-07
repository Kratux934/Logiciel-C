#include <stdio.h>
#include <zip.h>
#include "help.h"

void show_help() {
    printf("Usage: ./zip [OPTION]... [FILE]...\n");
    printf("Options:\n");
    printf(" -h, --help\tShow this help\n");
    printf(" -o, --open\tOpen a zip file for browsing\n");
    printf(" -b, --bruteforce\tTry to bruteforce the password\n");
    printf(" -d, --dictionary=FILE\tTry to bruteforce the password with a dictionary\n");
    printf(" -p, --password=PASSWORD\tUse this password\n");
    printf(" -e, --extract=FILE\tExtract this file\n");
    printf(" -i, --include=FILE\tInclude this file\n");
}
