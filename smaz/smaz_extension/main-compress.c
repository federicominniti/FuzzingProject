#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "smaz.h"
int main(int argc, char** argv) {
    char* filename = argv[1];
    char *content;
    long length;
    FILE *fp;

    // apre il file in lettura
    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        return 1;
    }

    // determina la lunghezza del file
    fseek(fp, 0, SEEK_END);
    length = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // alloca la memoria per contenere il contenuto del file
    content = (char *)malloc(length + 1);

    // legge il contenuto del file nella stringa
    fread(content, 1, length, fp);

    // chiude il file
    fclose(fp);

    char buffer[8192];
    
    smaz_compress(content, length, buffer, 8192);
    // libera la memoria allocata
    free(content);
    return 0;
}