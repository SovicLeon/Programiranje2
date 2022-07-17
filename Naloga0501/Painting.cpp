//
// Created by Leon on 30. 03. 2022.
//

#include "Painting.h"

Painting::Painting(std::string title, Artist *artist, std::string description, int price, int year,
                   PaintingTechnique technique) : Artwork(title, artist, description, price, year), technique(technique) {
}

std::string Painting::paintingTechniqueToString() const {
    switch (technique) {
        case PaintingTechnique::Oil:
            return "Oil";
        case PaintingTechnique::Acrylic:
            return "Acrylic";
        case PaintingTechnique::Graphite:
            return "Graphite";
    }
}

std::string Painting::toString() const {
    std::string priceString = std::to_string(price);
    std::string yearString = std::to_string(year);
    std::string techniqueString;
    techniqueString = paintingTechniqueToString();
    return title + " " + artist->toString() + " " + description + " " + priceString + " " + yearString + " " + techniqueString;
}

void Painting::print() const {
    std::cout << toString();
}
