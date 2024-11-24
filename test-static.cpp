#include <iostream>
using namespace std;

// kita akan membuat class objek
// class GfG {
//     public:
//     static int i;

//     GfG() {
//         // No nothing
//     };
// };

// int main () {
//     GfG kelas1;
//     GfG kelas2;

//     kelas1.i = 2;
//     kelas2.i = 4;

//     cout << kelas1.i << " " << kelas2.i;
// }

// kode di atas tidak bisa di eksekusi karena variable statis i tidak dapat membuat salinan di beberapa objek

// jadi variable statis i nya yang di dalam class harus di inisialisasi menggunakan nama class dan operator resolusi cakupan di luar

class GfG {
    public:
    static int i;

    GfG() {

    };
};

int GfG::i = 1;

int main () {
    GfG test;

    cout << test.i;
}