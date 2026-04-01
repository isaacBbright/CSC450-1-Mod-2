#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, result;

    for (int i = 1; i <= 3; i++) {
        cout << "\n--- Input Set " << i << " ---" << endl;

        cout << "Enter first string: ";
        getline(cin, str1);

        cout << "Enter second string: ";
        getline(cin, str2);

        result = str1 + str2;

        cout << "Concatenated Result: " << result << endl;
    }
    system("pause");
    
    return 0;
}
