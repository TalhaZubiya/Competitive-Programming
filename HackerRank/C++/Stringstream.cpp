#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);

    vector<int> result;

    int num;
    char comma;

    while (ss >> num) {
        result.push_back(num);
        ss >> comma;
    }

    return result;
}

int main() {
    string str;
    cin >> str;

    vector<int> result = parseInts(str);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}