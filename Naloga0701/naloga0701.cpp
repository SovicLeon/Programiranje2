#include <iostream>
#include "VectorUtil.h"
#include "Planet.h"


using namespace std;

int main() {
    vector<Planet> list;
    cout << "Default generator of 10 objects" << endl;
    fillDefault<10>(list);

    cout << "Prints by using print function: " << endl;
    print(list);
    cout << endl << "Prints by using toString function: " << endl;
    cout << toString(list);

    cout << "\n\n\n";


    vector<Material> materials;
    fillDefault<12>(materials);
    print(materials);

    cout << "\n\nReturn new list with Reversed  order: " << endl;
    vector<Material> materials2 = reverse(materials);
    print(materials2);

    cout << "\n\nReturn new list with removed every nth element: " << endl;
    vector<Material> materials3 = getEveryNthElement<1>(materials2);
    print(materials3);

    return 0;
}