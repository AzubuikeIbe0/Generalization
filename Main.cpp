#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    // Char tree
    BinarySearchTree<char> charBST('b');

    charBST.InsertNode('a');
    charBST.InsertNode('c');

    // Float tree
    BinarySearchTree<float> floatBST(5.0);
    floatBST.InsertNode(3.5);
    floatBST.InsertNode(7.2);

    return 0;

}