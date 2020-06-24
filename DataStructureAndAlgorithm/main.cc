#include "defs.h"
#include "linked_list.h"
#include <iostream>

int main() {
    int array[]{3, 5, 6, 4, 40, 7, 22, 8, 9, 10};
    sieve::LinkedList ll;
    ll.Insert(TestData(32));
    auto i = ll.GetData(0);
    std::cout << i->GetData() << std::endl;
    return 0;
}
