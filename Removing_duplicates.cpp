#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> sort_vector(std::vector<int> vec) {
    std::vector<int> new_vec ;
    bool check = false;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < new_vec.size(); j++)
        {
            if (vec[i] == new_vec[j])
                check = true;
        }
        if (check == false)
        {
            new_vec.push_back(vec[i]);
        }
        check = false;
    }

    return new_vec;
}


int main()
{
    int size ;
    std::cin >> size;
    std::vector<int> vec;
    for (int i = 0; i < size; ++i) {
        int el;
        std::cin >> el; 
        vec.push_back(el);
    }
    vec = sort_vector(vec);
    std::cout << "\n";

    std::sort(vec.begin(), vec.end(), std::greater<>());
    for (int el : vec) {
        std::cout << el;
    }

    return 0;
}
