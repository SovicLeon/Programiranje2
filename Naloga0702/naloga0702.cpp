#include <iostream>
#include "VectorUtil.h"
#include "Planet.h"

using namespace std::string_literals;

using std::cout; using std::endl; using std::vector;

int main() {
    //system(("chcp "s + std::to_string(65001)).c_str());
    vector<Planet> list;
    cout << "Default generator of 10 objects" << endl;
    fillDefault<10>(list);

    cout << "Prints by using print function: " << endl;
    print(list);
    cout << endl << "Prints by using toString function: " << endl;
    cout << toString(list);
    cout << endl << "Prints by using printColor function: " << endl;
    printColor<ColorCode::Red>(list);
    cout << endl << "Prints by using printColor function: " << endl;
    printColor(list);

    cout << "\n\n\n";

    cout << "Slice: \n";

    vector<Planet> listSlice;
    vector<vector<Planet>> listSliceReturn;
    listSliceReturn = slice(listSlice,3);
    for (int i = 0; i < listSliceReturn.size(); ++i) {
        for (int j = 0; j < listSliceReturn[i].size(); ++j) {
            cout << listSliceReturn[i][j].toString() << " ";
        }
        cout << endl;
    }

    cout << "\n\n\n";

    vector<std::string> forbidden;
    forbidden.push_back("circumference");
    forbidden.push_back("star");
    cout << endl << "Prints by using toSafeString function: " << endl;
    cout << toSafeString(list,forbidden);

    cout << "\n\n\n";

    vector<Material> materials;
    fillDefault<12>(materials);
    print(materials);

    cout << "\n\nReturn new list with Reversed  order: " << endl;
    vector<Material> materials2 = reverse(materials);
    print(materials2);

    cout << "\n\n\n";

    cout << "\n\nReturn new list with Reversed  order: " << endl;
    cout << toReverseString(materials);

    cout << "\n\n\n";

    cout << endl << "Prints with highlighted vowels: " << endl;
    highlightVowels(list);


    cout << "\n\n\n";

    cout << endl << "Number of same elements as element e: " << endl;
    Planet e;
    cout << countItems(list,e);

    return 0;
}