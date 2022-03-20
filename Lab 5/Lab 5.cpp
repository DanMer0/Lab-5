#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    vector<int> vector{1, 4, 9, 16, 25};

    long long product = 1;
    size_t count = 0;
    for_each(vector.begin(), vector.end(), [&product, &count](int value) {
        ++count;
        product *= value;
        });

    cout << "Среднее геометрическое: " << pow(product, 1.0 / count) << endl;
    return 0;
}
