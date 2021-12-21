#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

template <typename T, size_t size>
int binarySearch(const array<T, size>& items, const T& key) {
int low = 0; // low index of elements to search
int high = items.size() - 1; // high index of elements to search
int middle = (low + high + 1) / 2; // middle element
int location = -1; // key’s index; -1 if not found
do { // loop to search for element
// if the element is found at the middle
if (key == items[middle]) {
location = middle; // location is the current middle
}
else if (key < items[middle]) { // middle is too high
high = middle - 1; // eliminate the higher half
}
else { // middle element is too low
low = middle + 1; // eliminate the lower half
}
middle = (low + high + 1) / 2; // recalculate the middle // in the next slide
} while ((low <= high) && (location == -1));
return location; // return location of key
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
sort(data.begin(), data.end()); // sort the array
int element = binarySearch(data, searchKey);
if (element != -1) {
cout << "Found value in element " << element << endl;
} else {
cout << "Value not found" << endl;
}
}
