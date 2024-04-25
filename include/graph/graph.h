#include "../external_libs/Hash_Table/include/hash_table/hash_table.h"
#include "../external_libs/Linked_List/include/linked_list/linked_list.h"
#include <iostream>
#include <string>
#include <iomanip> 

/*
template <typename Object> 
class List_Entries {
private:
    typename std::conditional< 
    std::is_same<Object, int>::value || 
    std::is_same<Object, char>::value || 
    std::is_same<Object, float>::value || 
    std::is_same<Object, double>::value || 
    std::is_same<Object, bool>::value || 
    std::is_same<Object, short>::value || 
    std::is_same<Object, long>::value || 
    std::is_same<Object, long long>::value || 
    std::is_same<Object, unsigned short>::value || 
    std::is_same<Object, unsigned int>::value || 
    std::is_same<Object, unsigned long>::value || 
    std::is_same<Object, unsigned long long>::value, 
    Object, 
    Object*
    >::type object;

    std::string key;

public:
    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    List_Entries(std::string k, Object* obj) {
        key = k;
        object = obj;
    }

    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    List_Entries(std::string k, Object obj) {
        key = k;
        object = obj;
    }

    bool operator==(const List_Entries& otherEntry) const {
        return (key == otherEntry.key && object == otherEntry.object);
    }
    bool operator!=(const List_Entries& otherEntry) const {
        return (key != otherEntry.key || object != otherEntry.object);
    }

    std::string getKey() {
        return key;
    }

    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Object* getObject() {
        return object;
    }

    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Object getObject() {
        return object;
    }

};
*/

template <typename Object> 
class Graph_Node {
private:
    typename std::conditional< 
    std::is_same<Object, int>::value || 
    std::is_same<Object, char>::value || 
    std::is_same<Object, float>::value || 
    std::is_same<Object, double>::value || 
    std::is_same<Object, bool>::value || 
    std::is_same<Object, short>::value || 
    std::is_same<Object, long>::value || 
    std::is_same<Object, long long>::value || 
    std::is_same<Object, unsigned short>::value || 
    std::is_same<Object, unsigned int>::value || 
    std::is_same<Object, unsigned long>::value || 
    std::is_same<Object, unsigned long long>::value, 
    Object, 
    Object*
    >::type object;

    std::string key; // the key which should be contained within the object

public:

    std::string getKey() {
        return key;
    }
    
    Linked_List<Graph_Node<Object>*> adjList;

    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Graph_Node(std::string k, Object* obj) {
        key = k;
        object = obj;
    }

    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Graph_Node(std::string k, Object obj) {
        key = k;
        object = obj;
    }

    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Object* getObject() {
        return object;
    }

    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Object getObject() {
        return object;
    }

    
};

template <typename Object>
class Graph {
    /*
    typename std::conditional< 
    std::is_same<Object, int>::value || 
    std::is_same<Object, char>::value || 
    std::is_same<Object, float>::value || 
    std::is_same<Object, double>::value || 
    std::is_same<Object, bool>::value || 
    std::is_same<Object, short>::value || 
    std::is_same<Object, long>::value || 
    std::is_same<Object, long long>::value || 
    std::is_same<Object, unsigned short>::value || 
    std::is_same<Object, unsigned int>::value || 
    std::is_same<Object, unsigned long>::value || 
    std::is_same<Object, unsigned long long>::value, 
    Hash_Table<Graph_Node<Object>>, 
    Hash_Table<Graph_Node<Object*>>
    >::type myMap;
    */

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

    /*
    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    Graph_Node<Object*> getGraphNode(std::string key) {
        //if (!graphContainsNode(key)) { return NULL; }
        Node<Graph_Node<Object>>* returnObj = *(myMap.hash_get_entry(key));
        return returnObj;
    }
    */

   /*
    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    */
    Graph_Node<Object>* getGraphNode(std::string key) {
        //if (!graphContainsNode(key)) { return NULL; }
        Node<Graph_Node<Object>>* returnObj = (myMap.hash_get_entry(key));
        return returnObj->getObject();//.getObject();
    }

    
    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    void insertNode(std::string key, Object* value) {
        if (graphContainsNode(key)) {
            return;
        } else {
            Graph_Node<Object>* newNode = new Graph_Node<Object>(key, value);
            myMap.hash_insert(key, newNode);
        }
    }


    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    void insertNode(std::string key, Object value) {
        if (graphContainsNode(key)) {
            return;
        } else {
            Graph_Node<Object>* newNode = new Graph_Node<Object>(key, value);
            myMap.hash_insert(key, newNode);
        }
    }

    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    void insertEdge(std::string keyFrom, std::string keyTo) {
        if (!graphContainsNode(keyFrom) || !graphContainsNode(keyTo)) { // if one of the keys doesn't exist, we cannot create a connection
            return;
        } else {
            Graph_Node<Object>* to = myMap.hash_get_entry(keyTo)->getObject();
            Graph_Node<Object>* from = myMap.hash_get_entry(keyFrom)->getObject();

            //append the to node to the from node

            to->adjList.addNode(&from);
    
            if (!digraph) {
                from->adjList.addNode(&to);
            } 
            
        }
    }

    // TODO IMPLEMENT THE PRIMITIVE VERSION OF ADD EDGE!!!!!!
    /*
    template <typename T = Object, typename std::enable_if<std::is_same<T, int>::value || 
    std::is_same<T, char>::value || 
    std::is_same<T, float>::value || 
    std::is_same<T, double>::value || 
    std::is_same<T, bool>::value || 
    std::is_same<T, short>::value || 
    std::is_same<T, long>::value || 
    std::is_same<T, long long>::value || 
    std::is_same<T, unsigned short>::value || 
    std::is_same<T, unsigned int>::value || 
    std::is_same<T, unsigned long>::value || 
    std::is_same<T, unsigned long long>::value>::type* = nullptr>
    void insertEdge(std::string keyFrom, std::string keyTo) {
        if (!graphContainsNode(keyFrom) || !graphContainsNode(keyTo)) { // if one of the keys doesn't exist, we cannot create a connection
            return;
        } else {
            Graph_Node<Object>* to = myMap.hash_get_entry(keyTo)->getObject();
            Graph_Node<Object>* from = myMap.hash_get_entry(keyFrom)->getObject();

            //append the to node to the from node

            to->adjList.addNode(&from);
    
            if (!digraph) {
                from->adjList.addNode(&to);
            } 
            
        }
    }
    */
    
    
    
    template <typename T = Object, typename std::enable_if<!std::is_same<T, int>::value && 
    !std::is_same<T, char>::value && 
    !std::is_same<T, float>::value && 
    !std::is_same<T, double>::value && 
    !std::is_same<T, bool>::value && 
    !std::is_same<T, short>::value && 
    !std::is_same<T, long>::value && 
    !std::is_same<T, long long>::value && 
    !std::is_same<T, unsigned short>::value && 
    !std::is_same<T, unsigned int>::value && 
    !std::is_same<T, unsigned long>::value && 
    !std::is_same<T, unsigned long long>::value>::type* = nullptr>
    void printGraph() {
        for(int i = 0; i < myMap.getSize(); i++) {
            if (myMap.entries[i] != NULL) {
                std::cout << std::setw(1) << myMap.entries[i]->getKey() << "\t";
                std::cout << std::setw(2) << "(" << myMap.entries[i]->getObject() << ")";
                std::cout << std::setw(5) << ":" << std::setw(5);
                std::cout << "{";
                for(int j = 0; j < myMap.entries[i]->getObject()->adjList.getSize(); j++) {
                    auto objPtr = myMap.entries[i]->getObject()->adjList.getObjAtIndex(j);
                    if (objPtr != nullptr) {
                        std::cout << objPtr->getKey() << ", ";
                    }
                    /*
                    Object obj = currentGraphNode->getObject();
                    

                    if (j != myMap.entries[i]->getObject()->adjList.getSize() - 1) {
                        std::cout << ", ";
                    }
                    */
                }
                std::cout << "}";
                std::cout << "\n";
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