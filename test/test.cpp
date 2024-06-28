#include <iostream>
#include <vector>
#include <algorithm> // for std::find

int main() {
    // Define a vector
    std::vector<int> vec = {10, 20, 30, 40, 50};
    
    // Element to find
    int element = 30;
    
    // Use std::find to get an iterator to the element
    auto it = std::find(vec.begin(), vec.end(), element);
    
    // Check if the element was found
    if (it != vec.end()) {
        // Calculate the index (position) of the element
        int index = std::distance(vec.begin(), it);
        std::cout << "Element " << element << " is at position: " << index << std::endl;
    } else {
        std::cout << "Element " << element << " not found in the vector." << std::endl;
    }
    
    return 0;
}
