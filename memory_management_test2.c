#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FILE_NAME "sample.txt"
#define BLOCK_SIZE 16

char* getBlock(int fd)
{
    char* buf = (char*)malloc(BLOCK_SIZE);
    if (!buf) {
        return NULL;
    }
    if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {
        return NULL;
    }
    return buf;
}

int mmt2(void)
{
    int fd, ret = -1;
    char* data;

    fd = open(FILE_NAME, O_RDONLY, 0);
    if (fd < 0) {
        printf("failed to open %s\n", FILE_NAME);
        return -1;
    }

    data = getBlock(fd);
    if (!data) {
        printf("failed to get block data\n");
        goto out;
    }

    printf("block data is : %s\n", data);
    ret = 0;

out:
    if (data) {
        free(data);
    }

    close(fd);

    return ret;
}
