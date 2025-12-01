#include <stdio.h>
#include <assert.h>

int main() {
    char dir;
    int n;
    int cur = 50;
    unsigned int zeros = 0;
    while(scanf("%c%d\n", &dir, &n) != EOF) {
        if (dir == 'L') n *= -1;

        cur += n;
       
        while (cur < 0) cur += 100;
        cur %= 100;

        if (cur == 0) zeros++;
        assert(cur >= 0 && cur < 100);
    }
    printf("%u\n", zeros);
    return 0;
}
