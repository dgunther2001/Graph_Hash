#include <iostream>
#include "graph/graph.h"
#include <hash_table/hash_table.h>
#include <stack/stack.h>
using namespace std;

class student {
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

    student(std::string n, int a) {
        name = n;
        age = a;
    }
    
    
    bool operator==(const student& otherStudent) const {
        return (name == otherStudent.name && age == otherStudent.age);
    }
    
    

    bool operator!=(const student& otherStudent) const {
        return (name != otherStudent.name || age != otherStudent.age);
    }

    
    friend ostream& operator<< (ostream& os, const student& s)
    {
        os << s.name << ": " << s.age;
        return os;
    }
    

};

int main() {

    Graph<student> myGraph1(10, false);
    
    student* student1 = new student("Daniel", 23);
    student* student2 = new student("Hannah", 22);
    student* student3 = new student("Zach", 23);

    //cout << student3 << "\n";

    myGraph1.insertNode(student1->getName(), student1);
    myGraph1.insertNode(student2->getName(), student2);
    myGraph1.insertNode(student3->getName(), student3);

    myGraph1.insertEdge("Daniel", "Hannah");
    myGraph1.insertEdge("Daniel", "Zach");

    //myGraph1.printGraph();
    

    std::cout << "\n";

    myGraph1.depthFirstTraversal(student1->getName());

    std::cout << "\n";

    //std::cout << "Hello Graphs!\n";
    //Hash_Table<int> myTable(10);

    //myTable.hash_insert("Daniel", 33);

    //myTable.printTable();

    /*
    Graph<int> myGraph(10);

    myGraph.insertNode("Daniel", 77);
    myGraph.insertNode("Hannah", 65);

    myGraph.insertEdge("Daniel", "Hannah");

    myGraph.printGraph();
    */
    

    //Graph_Node<int>* myNode = new Graph_Node("Joe", 27);

    
    //std::cout << myNode->getKey() << "\n";
    //std::cout << myNode->getObject() << "\n";



    //std::cout << myGraph.getGraphNode("Daniel")->getKey() << "\n";
    //std::cout << myGraph.getGraphNode("Daniel")->getObject() << "\n";



    
    //myGraph.mapInsert("Daniel", 23);
    //myGraph.printGraph();

    //cout << "\n\n\n";

    /*
    Stack<student> studentStack;

    studentStack.push(student1);
    studentStack.push(student2);
    studentStack.push(student3);

    studentStack.printStack();
    */

    return 0;
}