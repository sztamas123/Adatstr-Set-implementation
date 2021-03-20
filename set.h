//
// Created by tamas on 12.03.2021.
//

#ifndef SET_SET_H
#define SET_SET_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct {
    int* items;
    int size;
    int min_item;
    int max_item;
}set;

set* createSet();
void freeSet(set*);
void insertItem(set*, int);
int getSize(set);
void erase(set*, int);
void eraseAll(set*);
void findElement(set, int);
void printSet(set*);
int isEmptySet(set);



#endif //SET_SET_H