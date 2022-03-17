// C++ program to convert centimeter into meter and kilometer
#include <iostream>
using namespace std;

int main() {
    float c, m, k;
    // c = centimeter
    // m = meter
    // k = kilometer

    cout << "Enter the length in centimeter::\n";
    cin >> c;

    /* Convert centimeter into meter and kilometer */
    m = (float)(c / 100);
    k = (float)(c / 100000);

    // Output
    cout << "\nLength in Meter      = " << m << " meter \n";
    cout << "Length in Kilometer  = " << k << " kilometer\n";
    return 0;
}
