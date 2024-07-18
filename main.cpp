#include <iostream>
#include <sqlite3.h>

using namespace std;

int main(int argc, char** argv) {
    sqlite* DB;

    int exit = 0;
    exit = sqlite3_open("practice-c++.db", &DB);

    if (exit) {
        cerr << "Error opening DB" << sqlite3_errmsg(DB) << endl;
        return -1;

    } else {
        cout << "Database was opened" << endl;
        sqlite3_close(DB);
        return 0
    }
}