//
// Created by tamas on 12.03.2021.
//

#include "set.h"

set* createSet(){
    set* s;
    s = (set*)malloc(1 * sizeof(set));
    if (s == NULL){
        printf("hiba");
    }
    s->min_item = 0;
    s->max_item = 0;
    s->size = 0;
    s->items = (int*)calloc(sizeof(int), 1);
    return s;

}

void freeSet(set* s){
    free((*s).items);
}

int getSize(set s){
    int count = 0;
    for (int i = 0; i < s.max_item; ++i) {
        if (s.items[i] == 1){
            count++;
        }
    }
    return count;
}

void erase(set* s, int n){
    if ((*s).max_item > n){
        (*s).items[n] = 0;
    } else
        printf("hiba");
}

void eraseAll(set *s){
    for (int i = 0; i < (s->max_item - s->min_item + 1); ++i) {
        s->items[i] = 0;
    }
}

// valamiert rossz erteket ad vissza
void findElement(set s, int n){
    int first = s.min_item;
    int last = s.max_item - 1;
    int middle = (first + last) / 2;
    while (first <= last){
        if (s.items[middle] < n)
            first = middle + 1;
        else if (s.items[middle] == n){
            printf("%d", middle + 1);
            break;
        } else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Nincs ilyen elem.");
}


void insertItem(set* s, int n){
    if (s->max_item > n){
        s->items[n] = 1;
    } else{
        s->items = (int*)realloc(s->items, ((n +1)*sizeof (int)));
        s->max_item = n;
        s->items[n] = 1;
    }
}

void printSet(set* s){
    for (int i = 0; i < (s->max_item - s->min_item + 1); ++i) {
        if (s->items[i] == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int isEmptySet(set s){
    if (getSize(s) == 0){
         return 0;
    }
    return 1;
}