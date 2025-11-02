#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int length = str.length();
    int flag = 1;
    for(int x = 0; x < length; x++) {
        if(flag == 1) {
            if(str[x] == '-' || str[x] == '_') {
                str[x] = '~';
            }

            else {
                str[x] = toupper(str[x]);
                flag = 0;
            }
        }

        else {
            if(str[x] == '-' || str[x] == '_') {
                str[x] = '~';
            }

            else {
                str[x] = tolower(str[x]);
                flag = 1;
            }
        }
    }

    cout << str << endl;
    return 0;
}