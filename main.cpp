#include <iostream>
#include <sqlite3.h>
#include <fstream>

int main(int argc, char** argv) {
    sqlite* DB;

    std::ifstream ifs("sql-query.txt");
    std::string content( ( std::istreambuf_iterator<char>(ifs)),
                        (std::istreambuf_iterator<char>() ) );

    int exit = 0;
    exit = sqlite3_open("practice-c++.db", &DB);

    if (exit) {
        std::cerr << "Error opening DB" << sqlite3_errmsg(DB) <<  std::endl;
        return -1;

    } else {
         std::cout << "Database was opened" <<  std::endl;
        sqlite3_close(DB);
        return 0
    }
}