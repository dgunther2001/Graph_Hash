#include "../external_libs/Hash_Table/include/hash_table/hash_table.h"
#include "../external_libs/Linked_List/include/linked_list/linked_list.h"
#include <iostream>
#include <string>

template <typename Object> 
class Graph {
    Hash_Table<Object> myMap;
    int size;
public:
    Graph(int hashSize, hashfunction* hf) : myMap(hf, hashSize) {
        size = 0;
    }

    Graph(int hashSize) : myMap(hashSize) {
        size = 0;
    }

    Graph(hashfunction* hf) : myMap(hf) {
        size = 0;
    }


    Graph() : myMap(20) {
        size = 0;   
    }

    /* SIMPLE TEST FUNCTIONS..

    void mapInsert(std::string key, Object obj) {
        myMap.hash_insert(key, obj);
    }

    void printMap() {
        myMap.printTable();
    }


    */
    

   //Hash_Table<Object>* getMap

};