#include "../external_libs/Hash_Table/include/hash_table/hash_table.h"
#include "../external_libs/Linked_List/include/linked_list/linked_list.h"
#include <iostream>
#include <string>

template <typename Object> 
class Graph_Node {
private:
    std::string key; // the key which should be contained within the object
    Object object; // the object itself
    Linked_List<Graph_Node*> adjList; // linked list of graph_node pointers

public:
    Graph_Node(std::string k, Object obj) {
        key = k;
        object = obj;
    }
};

template <typename Object>
class Graph {
    Hash_Table<Graph_Node<Object>> myMap;
    int size;
    bool digraph;
public:
    /* CONSTRUCTORS */
    Graph(int hashSize, hashfunction* hf, bool d) : myMap(hf, hashSize) {
        size = 0;
        digraph = d;
    }
    Graph(int hashSize, hashfunction* hf) : myMap(hf, hashSize) {
        size = 0;
        digraph = true;
    }

    Graph(int hashSize, bool d) : myMap(hashSize) {
        size = 0;
        digraph = d;
    }
    Graph(int hashSize) : myMap(hashSize) {
        size = 0;
        digraph = true;
    }

    Graph(hashfunction* hf , bool d) : myMap(hf) {
        size = 0;
        digraph = d;
    }
    Graph(hashfunction* hf) : myMap(hf) {
        size = 0;
        digraph = true;
    }

    Graph(bool d) : myMap(20) {
        size = 0;   
        digraph = d;
    }
    Graph() : myMap(20) {
        size = 0;   
    }

    /* NON-CONSTRUCTOR METHODS */
    bool graphContainsNode(std::string checkKey) {
        if (myMap.hashContains(checkKey)) {
            return true;
        } else {
            return false;
        }
    }


    void insertNode(std::string key, Object value) {
        if (graphContainsNode(key)) {
            return;
        } else {
            Graph_Node<Object>* newNode = new Graph_Node(key, value);
            myMap.hash_insert(key, *newNode);
        }
    }

    void printGraph() {
        for(int i = 0; i < myMap.getSize(); i++) {
            if (myMap.entries[i] != NULL) {
                std::cout << myMap.entries[i]->getKey() << "\n";
            }
        }
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