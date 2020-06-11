#include <cstdio>
#include <string>

#include "assist_tools.h"
#include "double_linked_list.h"
#include "linked_list.h"
#include "sorted_linked_list.h"
int main() {
    sieve::DoubleLinkedList dll(3);
    dll.Insert(1, 0);
    dll.Insert(1, 0);
    dll.Insert(1, 0);
    dll.Insert(1, 0);
    dll.Insert(1, 0);
    dll.Insert(1, 0);
    dll.InsertToHead(5);
    dll.Delete(dll.Size() - 1);
    printf("%s\n", dll.ToString().c_str());

    return 0;
}
