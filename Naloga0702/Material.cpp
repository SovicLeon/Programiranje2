//
// Created by Leon on 21. 04. 2022.
//

#include "Material.h"

Material::Material() : name("Placeholder"), id(-1), quantity(0) {
}

Material::Material(std::string name, int id, int quantity) : name(name), id(id), quantity(quantity) {
}

std::string Material::toString() const {
    return "ID: " + std::to_string(id) + ": " + name + ", quantity: " + std::to_string(quantity);
}
