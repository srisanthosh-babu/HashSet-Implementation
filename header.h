#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TABLE_SIZE 1009


typedef struct node{
    int key;
    struct node*next;
} Node;

typedef struct {
    Node*table[TABLE_SIZE];
}HashSet;

HashSet* createHashSet();
int hash(int);
void addHashSet(HashSet*,int);
void removeHashSet(HashSet*,int);
bool hashSetContains(HashSet*,int);
void displayHashSet(HashSet*);
void deleteHashSet(HashSet*);

#endif