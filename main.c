#include <stdio.h>
#include "set.h"
int main() {
    set set1;
    set1 = createSet();
    insertItem(&set1, 5);

    return 0;
}
