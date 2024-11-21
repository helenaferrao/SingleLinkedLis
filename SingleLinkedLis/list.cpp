#include <iostream>
#include "SinglyLinkedList.cpp"

int main() {
    SinglyLinkedList<int> l1;

    // Add elements to the list
    l1.addATFront(5);
    l1.addATFront(10);
    l1.addAtEnd(20);
    l1.addATFront(30);

    // Remove the first and last elements
    l1.removeFirst();
    l1.removeLast();

    // Display the list
    std::cout << "List contents: ";
    l1.displayList();

    // Display the size of the list
    std::cout << "Size of list: " << l1.size() << std::endl;

    // Find a value in the list
    std::cout << "Enter the number to find: ";
    int val;
    std::cin >> val;

    if (l1.find(val) != nullptr) {
        std::cout << "Entered value is in the list." << std::endl;
    }
    else {
        std::cout << "Entered value is not in the list." << std::endl;
    }

    return 0;
}
