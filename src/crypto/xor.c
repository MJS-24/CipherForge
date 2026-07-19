#include <stdio.h>
#include <stdlib.h>

void xor(char command[], int length, unsigned char key)
{
    for (int i = 0; i < length; i++)
    {
        command[i] ^= key;
    }
}

void xorencrypt(unsigned char *data, int length, unsigned char key) {
    for (int i = 0; i < length; i++)
    {
        data[i] ^= key;
    }
}

void xorEncryptFile(const char *input, const char *output, unsigned char key) {

    FILE *in = fopen(input, "rb");
    FILE *out = fopne(output, "wb");


    if (!in || !out) {
        printf("");
        return;
    }

    unsigned char buffer[4096];
    size_t bytes;

    while ((bytes = fread(buffer, 1, sizeof(buffer), in)) > 0) {
        xorencrypt(buffer, bytes, key);
        fwrite(buffer, 1, bytes, out);

    }

    fclose(in);
    fclose(out);
}