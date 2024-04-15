#include <iostream>
#include <vector>
#include "test.h"

std::vector<int> creat_vec(int amount) {
    std::vector<int> tmp_vector;
    int a = 1;
    for (int i = 1; i < amount; i++, a *= 2) {
        tmp_vector.push_back(a);
    }
    tmp_vector.push_back(22);
    return tmp_vector;
}

int main(){
    setlocale(0, "ru");
    test::test_some_func(creat_vec);
}

