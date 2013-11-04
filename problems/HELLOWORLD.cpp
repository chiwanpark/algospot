/**
* HELLOWORLD
*
* @author Chiwan Park
* @solved 2013. 11. 04
*
* http://algospot.com/judge/problem/read/HELLOWORLD
*/
#include <iostream>

using namespace std;

int do_HELLOWORLD_main(int argc, const char *argv[]) {
    int C;

    cin >> C;
    for (int i = 0; i < C; ++i) {
        string name;
        cin >> name;
        cout << "Hello, " << name << "!" << endl;
    }

    return 0;
}

#ifndef DRIVER

int main(int argc, const char *argv[]) {
    return do_HELLOWORLD_main(argc, argv);
}

#endif
