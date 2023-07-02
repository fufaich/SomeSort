#include <iostream>
#include "SomeSort.h"

template <typename T, size_t N>
void printList(const T (&list)[N]) {
    std::cout << "List: [";
    for (size_t i = 0; i < N; i++) {
        std::cout << list[i];
        if (i != N - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main(){
    int list[] = {5,13,166,8,6,1,2,29};
    std:: cout << "Before" << std:: endl;
    printList(list);
    SomeSort(&list[0],&list[7]);
    std:: cout << "After" << std:: endl;
    printList(list);

    return 0;
}