#include <iostream>
#include <vector>
#include "test.h"

std::vector<int> creat_vec(int amount) {
    std::vector<int> tmp_vector{1, 2, 4, 8, 22};
    return tmp_vector;
}

int main(){
    setlocale(0, "ru");
    test::test_some_func(creat_vec);
}

