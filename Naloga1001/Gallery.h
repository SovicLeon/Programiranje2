//
// Created by Leon on 21. 03. 2022.
//

#ifndef NALOGA0401_GALLERY_H
#define NALOGA0401_GALLERY_H


#include <vector>
#include "Artwork.h"
#include "Painting.h"
#include "PrintIfPainting.h"
#include <algorithm>

class Gallery {
private:
    std::string name;
    std::vector<Artwork*> artworks;
public:
    Gallery(std::string name);
    void addArtwork(Artwork* artwork);
    void printArtworks() const;
    std::string toString() const;
    Artwork* getOldestArtwork() const;
    std::vector<Artist*> getAllArtistsBornAfter(unsigned year);
    void sort(bool (*c)(Artwork*, Artwork*));
    Artwork* find(bool (*c)(Artwork*)) const;
    void printArtworks(PrintIfPainting i) const;
    std::vector<Artwork*> filter(bool (*c)(Artwork*)) const;
};


#endif //NALOGA0401_GALLERY_H