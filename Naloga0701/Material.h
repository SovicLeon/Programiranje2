//
// Created by Leon on 21. 04. 2022.
//

#ifndef NALOGA0701_MATERIAL_H
#define NALOGA0701_MATERIAL_H


#include <string>

class Material {
private:
    std::string name;
    int id, quantity;
public:
    Material();
    Material(std::string name, int id, int quantity);
    std::string toString() const;
};


#endif //NALOGA0701_MATERIAL_H
