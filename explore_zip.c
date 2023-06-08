#include <stdio.h>
#include <zip.h>
#include "explore_zip.h"

void explore_zip(const char *zipFilePath, const char *password) {
    struct zip *z = zip_open(zipFilePath, 0, NULL);
    if (!z) {
        printf("Failed to open the zip file.\n");
        return;
    }

    zip_int64_t numEntries = zip_get_num_entries(z, 0);
    if (numEntries < 0) {
        printf("Failed to read the number of entries in the zip file.\n");
        zip_close(z);
        return;
    }

    for (zip_uint64_t i = 0; i < (zip_uint64_t)numEntries; i++) {
        const char *entryName = zip_get_name(z, i, 0);
        if (!entryName) {
            printf("Failed to read the name of entry %llu\n", i);
            continue;
        }

        printf("Entry: %s\n", entryName);
    }

    zip_close(z);
}
