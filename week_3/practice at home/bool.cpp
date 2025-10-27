//bool is short for boolean>>basically means if it is true or false
#include <cstdio>
int main() {
    
    bool a = true;
    bool b = false;

    printf("a is %d\n", a);
    printf("b is %d\n", b);

    //printf("size is %d\n", sizeof(a) * 8);

    if(a && b) {
    //if(a || b) {
    //if(!a != !b) {
        puts("true");
    } else {
        puts("false");
    }

    return 0;
}