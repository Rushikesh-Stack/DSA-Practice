#include <iostream>
using namespace std;

class MyCustomArray {
public:
    int total_size;     // Total memory reserved
    int used_size;      // Memory to be used
    int* base_address;  // Pointer to first element

    // Constructor
    MyCustomArray(int tSize, int uSize) {
        total_size = tSize;
        used_size = uSize;
        base_address = new int[total_size];
    }

    // Destructor
    ~MyCustomArray() {
        delete[] base_address;
    }

    // Set values interactively
    void setValues() {
        int n;
        for (int i = 0; i < used_size; ++i) {
            std::cout << "Enter the element " << i << ": ";
            std::cin >> n;
            base_address[i] = n;
        }
    }

    // Display values
    void show() const {
        for (int i = 0; i < used_size; ++i) {
            std::cout << base_address[i] << std::endl;
        }
    }
};

int main() {
    MyCustomArray marks(100, 2);
    cout<<"We are running setValues()\n";
    marks.setValues();
    cout<<"We are running show()\n";
    marks.show();

    std::cout << "Successfully Compiled" << std::endl;
    return 0;
}