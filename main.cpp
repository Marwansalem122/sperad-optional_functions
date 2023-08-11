#include <iostream>
#include <optional>
using namespace std;
template <typename... Args>
void spread (Args ...arg){
    ((cout << arg << ' '), ...);
}
optional<int> divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return nullopt; // Return an empty optional
    }
}

int main() {
    //optional fun
    int num1 = 10;
    int num2 = 5;

    auto result = divide(num1, num2);
    if (result.has_value()) {
        cout << "Result: " << result.value() <<endl;
    } else {
        cout << "Division by zero!" << endl;
    }
     //spread operator
    spread ("marwan",21,50000);
    return 0;
}

