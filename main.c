#include <stdio.h>
#include "set.h"
int main() {
    set* set1;
    set1 = createSet();
    for (int i=9;i>0;i--){
        insertItem(set1, i);
    }

    printSet(set1);
    findElement(*set1, 2);
    printf("\n");




    erase(set1, 1);
    erase(set1, 3);
    erase(set1, 8);
    erase(set1, 4);
    printSet(set1);

    insertItem(set1, 1);
    insertItem(set1, 4);
    printSet(set1);

    printf("%d", getSize(*set1));
    printf("\n");

    printf("%d", isEmptySet(*set1));
    printf("\n");

    eraseAll(set1);
    printSet(set1);

    insertItem(set1, 5);
    insertItem(set1, 1);
    insertItem(set1, 2);
    insertItem(set1, 3);
    printSet(set1);



    eraseAll(set1);
    printSet(set1);



    return 0;
}