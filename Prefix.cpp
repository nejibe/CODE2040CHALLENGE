#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int ARRAY_SIZE = 13;

string* returnArrayWithoutPrefix(string, const string*, int&);

int main() {

    int count = 0;
    string prefix = "non";
    string array[ARRAY_SIZE] = {"Array", "nonarray", "containing", "noncontaining", "only", "nononly", "the", "strings", "that", "do", "not", "start", "prefix(non)"};
    string *newArray = returnArrayWithoutPrefix(prefix, array, count);

    for(int i = 0; i < count; i++){
        cout << newArray[i] << endl;
    }

    delete[] newArray;
    return 0;
}
string* returnArrayWithoutPrefix(string pre, const string* arr, int& COUNT){

    string* newArray = new string[ARRAY_SIZE];

    for(int index = 0; index < ARRAY_SIZE; index++){

        if(pre.size() > arr[index].size()){
            newArray[COUNT] = arr[index];
            COUNT++;
            continue;
        }
        else if(!(arr[index].substr(0, pre.size()) == pre)){
            newArray[COUNT] = arr[index];
            COUNT++;
        }
    }
    return newArray;
}
