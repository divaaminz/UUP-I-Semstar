#include <stdio.h>

int main(){
    int x = 10;
    int y = x && (x = 20);
    printf("%d %d", x, y);
}