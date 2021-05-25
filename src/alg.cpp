// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <cctype>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"
BST<std::string> makeTree(const char* filename) {
    BST<std::string>Tree;
    std::string word = "";
    std::ifstream file(filename);
    if (!file) {
        std::cout << "File error!" << std::endl;
        return Tree;
    }
    else {
        while (!file.eof()) {
            int ch = file.get();
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                if (ch >= 'A' && ch <= 'Z') 
                    ch = tolower(ch);
                word += ch;
            }
            else if (!word.empty()) {
                Tree.add(word);
                word = "";
            }
        }
    }
    file.close();
    return Tree;
}
