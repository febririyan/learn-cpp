// C++ program to use thread_local storage specifier
#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

// Defining thread-local variable
thread_local int value = 10;
// Mutex for synchronization
mutex mtx;

int main()
{
    // Created 3 threads
    // Modify value in thread 1
    thread th1([]() {
        value += 18;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 1 value: " << value << '\n';
    });

    thread th2([]() {
        // Modify value in thread 2
        value += 7;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 2 value: " << value << '\n';
    });

    thread th3([]() {
        // Modify value in thread 3
        value += 13;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 3 value: " << value << '\n';
    });

    // Wait for all threads to finish
    th1.join();
    th2.join();
    th3.join();

    // Print the value of value in the main thread
    cout << "Main thread value: " << value << '\n';

    return 0;
}