#include <stdio.h>
#include <assert.h>
int main() {
    char dir;
    unsigned int n;
    int cur = 50;
    unsigned int zeros = 0;
    while(scanf("%c%u\n", &dir, &n) != EOF) {
        if (n == 0 && cur == 0) {
            zeros++;
            continue;
        }

        int shift;
        if (dir == 'L') {
            shift = (100 - cur)%100 + n;
            cur -= n;
            while (cur < 0) cur += 100;
        }
        else {
            shift = cur + n;
            cur += n;
            cur %= 100;
        }
        zeros += (shift/100);
       
        assert(cur >= 0 && cur < 100);
    }
    printf("%u\n", zeros);
    return 0;
}
