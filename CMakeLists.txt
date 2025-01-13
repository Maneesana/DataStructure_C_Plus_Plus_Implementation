cmake_minimum_required(VERSION 3.30)
project(DataStructure_Using_C_plus_plus)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructure_Using_C_plus_plus main.cpp
        Big_O_Notation/big_o_notation.cpp
        Big_O_Notation/big_o_notation.h
        Array/array.cpp
        Array/array.h
        Linked_List/link_list.cpp
        Linked_List/link_list.h
        Stacks/stacks.cpp
        Stacks/stacks.h
        Queues/queues.cpp
        Queues/queues.h
        Hash_Table/hash_table.cpp
        Hash_Table/hash_table.h
        Binary_Tree/binary_tree.cpp
        Binary_Tree/binary_tree.h
        AVL_Tree/avl_tree.cpp
        AVL_Tree/avl_tree.h
        Heap/heap.cpp
        Heap/heap.h
        Tries/tries.cpp
        Tries/tries.h
        Graphs/graph.cpp
        Graphs/graph.h
        Undirected_Graphs/undirected_graph.cpp
        Undirected_Graphs/undirected_graph.h
        Algorithms/String_Algorithms/string_algorithms.cpp
        Algorithms/String_Algorithms/string_algorithms.h
        Algorithms/Searching_Algorithms/searching_algorithms.cpp
        Algorithms/Searching_Algorithms/searching_algorithms.h
        Algorithms/String_Manipulation_Algorithms/string_manipulation_algorithms.cpp
        Algorithms/String_Manipulation_Algorithms/string_manipulation_algorithms.h
        Shared/DataStructureExampleRunnable.h
        Big_O_Notation/big_o_notation_example.h
        Binary_Tree/binary_tree_example.h
        AVL_Tree/avl_tree_example.h
)
