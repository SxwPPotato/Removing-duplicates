#include <iostream>
#include <algorithm>
#include <set>

int main()
{
    int size ;
    std::cin >> size;
    std::set<int, std::greater<int>> st;
    
    for (int i = 0; i < size; ++i) {
        int el;
        std::cin >> el; 
        st.insert(el);
    }
    
    std::cout << "\n";

    for (int el : st) {
        std::cout << el << " ";
    }

    return 0;
}
