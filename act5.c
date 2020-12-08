#define BYTES 32

#include <sodium.h>

char buf[BYTES];
int getrandombytes(int nbytes,char * buf)
{

    if (sodium_init() < 0) return 1;
    randombytes_buf(buf, nbytes);
    return 0;
}
void print_hex(char * str){
    while (*str != 0) {
        printf("%02x ", (unsigned char) *str);
        str++;
    }
    printf("\n");
}
int main(int argc , char **argv){
    getrandombytes(BYTES,buf);
    print_hex(buf);
}