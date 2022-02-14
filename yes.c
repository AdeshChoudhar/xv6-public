#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if (argc == 1) {
        while (1) {
            printf(1, "y\n");
        }
    } else {
        while (1) {
            int i = 1;
            printf(1, "%s", argv[i++]);
            for (; i < argc; i++) {
                printf(1, " %s", argv[i]);
            }
            printf(1, "\n");
        }
    }
    exit();
}
