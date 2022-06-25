#include <iostream>
#include <queue>
using namespace std;

int main() {

    // create a priority queue of ints
    priority_queue<string> languages;

    cout << "Is the queue empty? ";

    // check if the queue is empty  
    if (languages.empty()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    cout << "Pushing elements..." << endl;

    // push element into the queue
    languages.push("Python");
    languages.push("C++");
    languages.push("Java");

    cout << "Is the queue empty? ";

    // check if the queue is empty
    if (languages.empty()) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}