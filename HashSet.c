#include "header.h"

int hash ( int key ){
    return key % TABLE_SIZE ;
}

HashSet* createHashSet() {
    HashSet*obj=(HashSet*)malloc(sizeof(HashSet));
    if(obj==NULL){
        printf("\nMemory allocation failed\n");
    }
    for(int i=0 ; i < TABLE_SIZE ; i++) {
        obj->table[i]=NULL;
    }
    printf("\nHashSet created successfully\n");
    return obj;
}

void addHashSet(HashSet*obj,int key) {
    int index=hash(key);
    if(hashSetContains(obj,key)){
        printf("\nElement Already present in the set\n");
        return;
    }
    Node*newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("\nMemory allocation failed\n");
    }
    newNode->key=key;
    newNode->next=obj->table[index];
    obj->table[index]=newNode;
    printf("\nElement added to the Set successfully\n");
}

void removeHashSet(HashSet*obj,int key){
    int index=hash(key);
    Node*cur=obj->table[index],*prev=NULL;
    while(cur){
        if(cur->key==key){
            if(prev){
                prev->next=cur->next;
            }else{
                obj->table[index]=cur->next;
            }
            free(cur);
            return;
        }
        prev=cur;
        cur=cur->next;
    }
    printf("\nElement removed successfully\n");
}

bool hashSetContains(HashSet*obj,int key){
    int index=hash(key);
    Node*cur=obj->table[index];
    while(cur){
        if(cur->key==key){
            return true;
        }
        cur=cur->next;
    }
    return false;
}

void displayHashSet(HashSet*obj){
    for(int i=0;i<TABLE_SIZE;i++){
        Node*cur=obj->table[i];
        while(cur){
            printf("\n%d",cur->key);
            cur=cur->next;
        }
    }
}

void deleteHashSet(HashSet*obj){
    for(int i=0 ; i<TABLE_SIZE ;i++){
        Node*cur=obj->table[i];
        while(cur){
            Node*temp=cur;
            cur=cur->next;
            free(temp);
        }
    }
    free(obj);
    printf("\nHashSet deleted Successfully\n");
}
