//
// Created by Leon on 21. 03. 2022.
//

#include "Gallery.h"

Gallery::Gallery(std::string name) : name(name) {
}

void Gallery::addArtwork(Artwork *artwork) {
    artworks.push_back(artwork);
}

void Gallery::printArtworks() const {
    for (int i = 0; i < artworks.size(); ++i) {
        artworks[i]->print();
        std::cout << std::endl;
    }
}

std::string Gallery::toString() const {
    std::string artworksString;
    for (int i = 0; i < artworks.size(); ++i) {
        artworksString += "\n" + artworks[i]->toString();
    }
    return name + ":" + artworksString;
}

Artwork *Gallery::getOldestArtwork() const {
    int oldest = 0;
    for (int i = 1; i < artworks.size(); ++i) {
        if (artworks[i]->getYear()<artworks[oldest]->getYear()) {
            oldest = i;
        }
    }
    return artworks[oldest];
}

std::vector<Artist *> Gallery::getAllArtistsBornAfter(unsigned int year) {
    std::vector<Artist*> returnArtists;
    bool exists = false;
    for (int i = 0; i < artworks.size(); ++i) {
        exists = false;
        if (artworks[i]->getArtist()->getDateOfBirth().getYear()>=year) {
            for (int j = 0; j < returnArtists.size(); ++j) {
                if (returnArtists[j]==artworks[i]->getArtist()) {
                    exists = true;
                }
            }
            if (!exists) {
                returnArtists.push_back(artworks[i]->getArtist());
            }
        }
    }
    return returnArtists;
}

void Gallery::sort(bool (*c)(Artwork *, Artwork *)) {
    for (int i = 0; i < artworks.size() - 1; ++i) {
        for (int j = 0; j < artworks.size() - i - 1; ++j) {
            if (!c(artworks[j],artworks[j + 1])) {
                std::swap(artworks[j],artworks[j + 1]);
            }
        }
    }
}

Artwork *Gallery::find(bool (*c)(Artwork *)) const {
    return *std::find_if(artworks.begin(),artworks.end(),c);
}

void Gallery::printArtworks(PrintIfPainting i) const {
    for_each(artworks.begin(),artworks.end(),i);
}

std::vector<Artwork *> Gallery::filter(bool (*c)(Artwork *)) const {
    std::vector<Artwork*> returnVec;
    for(int i = 0; i < artworks.size(); ++i) {
        if (c(artworks[i])) {
            returnVec.push_back(artworks[i]);
        }
    }
    return returnVec;
}
