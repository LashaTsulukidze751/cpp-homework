#include <iostream>

using namespace std;
class ArrayClass {
private:
    int* arr;
    int size;
public:
    ArrayClass(int* arr, int size) {
        this->size = size;
        this->arr = new int[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
    }
    ~ArrayClass() {
        delete[] arr;
    }
    void printArray() {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};
int main() {
    int myArray[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(myArray) / sizeof(myArray[0]);
    
    ArrayClass arrayClass(myArray, size);
    arrayClass.printArray();
    
    return 0;
}