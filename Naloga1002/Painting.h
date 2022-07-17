//
// Created by Leon on 30. 03. 2022.
//

#ifndef NALOGA0501_PAINTING_H
#define NALOGA0501_PAINTING_H


#include "Artwork.h"


enum class PaintingTechnique {
    Oil, Acrylic, Graphite
};

class Painting : public Artwork {
private:
    PaintingTechnique technique;
public:
    Painting(std::string title, std::shared_ptr<Artist> artist, std::string description, int price, int year, PaintingTechnique technique);
    std::string paintingTechniqueToString() const;
    std::string toString() const override;
    void print() const override;
};


#endif //NALOGA0501_PAINTING_H
