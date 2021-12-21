#include <iostream>
#include <array>
using namespace std;

template <typename T, size_t size>
int linearSearch(const array<T, size>& items, const T& key) {
for (size_t i=0; i < items.size(); ++i) {
if (key == items[i]) { // if found,
return i; // return location of key
}
}
return -1; // key not found
}




int main() {
int searchKey; // value to locate
const size_t arraySize = 100; // size of array
array<int, arraySize> data; // create array
data = {67,   75,   81,   64,   37,   42,   23,   11,    3,   96,   55,   71,   80,   12,    6,
 19,   95,   47,   35,   70,   14,   60,   17,   87,   62,   73,    2,   32,   99,    5,
 76,   79,   77,   69,   53,   28,   24,   65,   22,   41,    8,   30,    4,    7,   10,
 72,   26,   84,   48,   52,   54,   85,   34,   94,   78,   38,   16,   57,    9,   13,
 50,   51,  100,   25,   43,   66,   82,   20,   98,   74,    1,   93,   63,   29,   56,
 68,   83,   44,   40,   59,   49,   39,   31,   86,   61,   92,   18,   90,   97,   45,
 88,   33,   91,   36,   27,   21,   15,   58,   46,   89  }; // create some data
cout << "Enter integer search key: ";
cin >> searchKey;
int element = linearSearch(data, searchKey);
if (element != -1) {
cout << "Found value in element " << element << endl;
} else {
cout << "Value not found" << endl;
}
}
