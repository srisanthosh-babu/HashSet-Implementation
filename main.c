#include"header.h"
int main(){
    HashSet*set=createHashSet();
    addHashSet(set,5);
    addHashSet(set,6);
    addHashSet(set,7);
    addHashSet(set,8);
    addHashSet(set,5);
    displayHashSet(set);
    removeHashSet(set,6);
    displayHashSet(set);
    addHashSet(set,6);
    displayHashSet(set);
    deleteHashSet(set);
    return 0; 
    
}