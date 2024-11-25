#include <iostream>
using namespace std;

// // ini objek nya non statis
// class HjH {

//     int i;
//     public:
//     HjH () {
//         i = 0;
//         cout << "Insert Constructor" << endl;
//     }
//     ~HjH () {
//         cout << "Insert Destructor" << endl;
//     }
// };

// int main () {
//     int x = 0;
//     if (x == 0) {
//         HjH obj;
//     }

//     cout << "Return main \n";
// }

// sekarang kita akan membuat menjadi objeknya static

class HfH {
    int i;

    public:
    HfH () {
        i = 0;
        cout << "Insert Constructor \n";
    }

    ~HfH () {
        cout << "Insert Destructor \n";
    }
};

int main () {
    int x = 0;
    if (x == 0) {
        static HfH obj;
    }

    cout << "End to main \n";
}