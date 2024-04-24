#include "../external_libs/Hash_Table/include/hash_table/hash_table.h"
#include <iostream>
#include <string>

template <typename Object> 
class Graph {
    Hash_Table<Object> myMap;
public:
    Graph(int hashSize, hashfunction* hf) : myMap(hf, hashSize) {

    }

    Graph(int hashSize) : myMap(hashSize) {

    }

    Graph(hashfunction* hf) : myMap(hf) {

    }


    Graph() : myMap(20) {
        
    }

    ///* SIMPLE TEST FUNCTIONS..

    void mapInsert(std::string key, Object obj) {
        myMap.hash_insert(key, obj);
    }

    void printMap() {
        myMap.printTable();
    }


    //*/
    

   //Hash_Table<Object>* getMap

};