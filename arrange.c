#include <stdbool.h>
#include <unistd.h>

int system(const char *command);

int main() {
    while(true) {
        system("xfdesktop --arrange");
        sleep(1);
    }
    return 0;
}
