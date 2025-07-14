#include <stdlib.h>

int main() {
    system("chromium --cipher-suite-blacklist=0x000a,0x009c,0x009d,0x002f,0x0035 --js-flags='--jitless' &!");
    return 0;
}
