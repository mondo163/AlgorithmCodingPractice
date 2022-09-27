// BinaryTreeAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Algorithms.h"
#include "TreeCreator.h"

int main() {
    //build and create the binary tree using the tree randomizer
    node* root = NULL;
    build(root);
    display(root);

    //inserts value into the tree
    /* int value = getNewValue();
     insert(root, value);
     std::cout << "Inserting " << value << " into list." << std::endl << std::endl;
     display(root);*/

    //removes target value from the tree
    /* remove(root, value);
     std::cout << "Removing " << value << " from list." << std::endl << std::endl;
     display(root);

    //removes even values from the tree for integers
     removeEven(root);
     std::cout << "Removing Evens." << std::endl << std::endl;
     display(root);*/

    //copy tree into a new pointer
    /* node *newRoot = NULL;
     copyTree(&(newRoot), root);
     std::cout << "Displaying copy:" << std::endl << std::endl;
     display(newRoot);
     destroy(newRoot);*/

    //Max value get the max value in the tree
    //std::cout << "The max value of the list is " << getMax(root) << std::endl;

    //displays all children within the tree
    /*std::cout << std::endl << " == Displaying Leaves == " << std::endl;
    printLeaves(root);
     std::cout << std::endl;*/

    //prints in reverse
    std::cout << " == Now printing in reverse == " << std::endl;
    traverseReverse(root);

    std::cout << std::endl << "The node count is: " << getNodeCount(root) << std::endl;

    destroy(root);
}
