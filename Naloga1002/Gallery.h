//
// Created by Leon on 21. 03. 2022.
//

#ifndef NALOGA0401_GALLERY_H
#define NALOGA0401_GALLERY_H


#include <vector>
#include "Artwork.h"
#include "Painting.h"
#include "PrintIfPainting.h"
#include "Building.h"
#include "Representative.h"
#include <algorithm>
#include <functional>

class Gallery : public Building {
private:
    std::string name;
    std::vector<std::shared_ptr<Artwork>> artworks;
public:
    Gallery(std::string name, std::string address, double height, double width, double length, unsigned int floors, unsigned int undergroundFloors);
    void addArtwork(std::shared_ptr<Artwork> artwork);
    void printArtworks() const;
    std::string toString() const override;
    std::shared_ptr<Artwork> getOldestArtwork() const;
    std::vector<std::shared_ptr<Artist>> getAllArtistsBornAfter(unsigned year) const;
    void sort(bool (*c)(std::shared_ptr<Artwork>, std::shared_ptr<Artwork>));
    std::shared_ptr<Artwork> find(std::function<bool(std::shared_ptr<Artwork>)> c) const;
    void printArtworks(PrintIfPainting i) const;
    void filterOut(std::function<bool(std::shared_ptr<Artwork>)> c);
    std::vector<std::shared_ptr<Artwork>> filter(std::function<bool(std::shared_ptr<Artwork>)> c) ;
};


#endif //NALOGA0401_GALLERY_H