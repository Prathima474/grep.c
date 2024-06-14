#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Function to search for a pattern in a file
void search_in_file(const char *filename, const char *pattern) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("fopen");
        return;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern) != NULL) {
            printf("%s: %s", filename, line);
        }
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s pattern file1 [file2 ... fileN]\n", argv[0]);
        return 1;
    }

    const char *pattern = argv[1];

    for (int i = 2; i < argc; i++) {
        search_in_file(argv[i], pattern);
    }

    return 0;
}
