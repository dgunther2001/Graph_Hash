#include <iostream>
#include "graph/graph.h"
#include <hash_table/hash_table.h>
using namespace std;

class students {
private: 
    std::string name;
    int age;

public:

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    students(std::string n, int a) {
        name = n;
        age = a;
    }
    
    
    bool operator==(const students& otherStudent) const {
        return (name == otherStudent.name && age == otherStudent.age);
    }
    
    

    bool operator!=(const students& otherStudent) const {
        return (name != otherStudent.name || age != otherStudent.age);
    }

    
    friend ostream& operator<< (ostream& os, const students& s)
    {
        os << s.name << ": " << s.age;
        return os;
    }
    

};

int main() {

    Graph<students> myGraph1(10, false);
    
    students* student1 = new students("Daniel", 23);
    students* student2 = new students("Hannah", 22);
    students* student3 = new students("Zach", 23);

    //cout << student3 << "\n";

    myGraph1.insertNode(student1->getName(), student1);
    myGraph1.insertNode(student2->getName(), student2);
    myGraph1.insertNode(student3->getName(), student3);

    myGraph1.insertEdge("Daniel", "Hannah");

    myGraph1.printGraph();

    //std::cout << "Hello Graphs!\n";
    //Hash_Table<int> myTable(10);

    //myTable.hash_insert("Daniel", 33);

    //myTable.printTable();

    /*
    Graph<int> myGraph(10);

    myGraph.insertNode("Daniel", 77);
    myGraph.insertNode("Hannah", 65);

    Graph_Node<int>* myNode = new Graph_Node("Joe", 27);

    std::cout << myNode->getKey() << "\n";
    std::cout << myNode->getObject() << "\n";



    std::cout << myGraph.getGraphNode("Daniel")->getKey() << "\n";
    std::cout << myGraph.getGraphNode("Daniel")->getObject() << "\n";
    

    myGraph.insertEdge("Daniel", "Hannah");
    */
    //myGraph.mapInsert("Daniel", 23);
    //myGraph.printGraph();

    return 0;
}