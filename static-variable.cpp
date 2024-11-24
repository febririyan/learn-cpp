// akan membuat static variable
#include <iostream>
using namespace std;

// membuat function
void demo () {

    static int count = 0;
    cout << count << " ";

    // nilai di perbaharui
    // akan di gunakan untuk selanjutnya
    // function call
    count++;
}

int main () {
    // membuat loop
    for (int i = 0; i < 10; i++)
    demo();

    return 0;
}