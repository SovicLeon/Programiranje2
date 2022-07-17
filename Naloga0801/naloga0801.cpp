#include <iostream>
#include "SparseMatrix2D.h"
#include "Antenna.h"

using namespace std;

int main() {
    Antenna a(1330.0,"Sony");
    Element<Antenna> e(1, 1, a);
    cout << e.getValue().toString();
    SparseMatrix2D<Antenna> bigAntennaMatrix(10, 10, Antenna(0, "undisclosed"));
    bigAntennaMatrix.set(5, 5, a);
    cout << endl << bigAntennaMatrix.at(5, 5).toString();
    cout << endl << bigAntennaMatrix.at(5, 4).toString();
    bigAntennaMatrix.set(5, 5, Antenna(150.5, "Ericsson"));
    cout << endl << bigAntennaMatrix.at(5, 5).toString();
    cout << endl;

    for (int i = 0; i < bigAntennaMatrix.getSizeX(); i++) {
        for (int j = 0; j < bigAntennaMatrix.getSizeY(); j++) {
            cout << bigAntennaMatrix.at(i,j).toString() << (j != bigAntennaMatrix.getSizeY() - 1 ? " ; " : "");
        }
        cout << endl;
    }

    SparseMatrix2D<int> bigIntMatrix(10, 10, 0);
    bigIntMatrix.set(5, 5, 8);
    bigIntMatrix.set(2, 3, 7);
    bigIntMatrix.set(2, 2, 4);

    for (int i = 0; i < bigIntMatrix.getSizeX(); i++) {
        for (int j = 0; j < bigIntMatrix.getSizeY(); j++) {
            cout << bigIntMatrix.at(i,j) << (j != bigIntMatrix.getSizeY() - 1 ? " ; " : "");
        }
        cout << endl;
    }

    //cout << bigIntMatrix.at(2,3);

    Element<int> e2(0,0,1);
    bigIntMatrix.fillRow(2,1);

    Element<int> e3(0,0,2);
    bigIntMatrix.fillColumn(2,e3);


    cout << endl << endl;

    for (int i = 0; i < bigIntMatrix.getSizeX(); i++) {
        for (int j = 0; j < bigIntMatrix.getSizeY(); j++) {
            cout << bigIntMatrix.at(i,j) << (j != bigIntMatrix.getSizeY() - 1 ? " ; " : "");
        }
        cout << endl;
    }

    return 0;
}
