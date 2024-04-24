#include <iostream>
#include "graph/graph.h"
#include <hash_table/hash_table.h>

int main() {
    //std::cout << "Hello Graphs!\n";
    //Hash_Table<int> myTable(10);

    //myTable.hash_insert("Daniel", 33);

    //myTable.printTable();

    Graph<int> myGraph(5);
    myGraph.mapInsert("Daniel", 23);
    myGraph.printMap();

    return 0;
}