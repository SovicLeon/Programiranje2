//
// Created by Leon on 21. 03. 2022.
//

#include "Gallery.h"

Gallery::Gallery(std::string name, std::string address, double height, double width, double length, unsigned int floors, unsigned int undergroundFloors) : name(name),
                                                                                                                                                           Building(address, height, width, length, floors, undergroundFloors) {
}

void Gallery::addArtwork(std::shared_ptr<Artwork> artwork) {
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
    artworksString += "Building at: " + address + ", dimensions(W x H x L): " + std::to_string(width) + ", " + std::to_string(height) + ", " + std::to_string(length) + ", with " + std::to_string(floors) + " floors and " + std::to_string(undergroundFloors) + " underground floors.\nArtworks:";
    for (int i = 0; i < artworks.size(); ++i) {
        artworksString += "\n" + artworks[i]->toString();
    }
    return name + ": \n" + artworksString;
}

std::shared_ptr<Artwork> Gallery::getOldestArtwork() const {
    int oldest = 0;
    for (int i = 1; i < artworks.size(); ++i) {
        if (artworks[i]->getYear()<artworks[oldest]->getYear()) {
            oldest = i;
        }
    }
    return artworks[oldest];
}

std::vector<std::shared_ptr<Artist>> Gallery::getAllArtistsBornAfter(unsigned int year) const {
    std::vector<std::shared_ptr<Artist>> returnArtists;
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

void Gallery::sort(bool (*c)(std::shared_ptr<Artwork>, std::shared_ptr<Artwork>)) {
    for (int i = 0; i < artworks.size() - 1; ++i) {
        for (int j = 0; j < artworks.size() - i - 1; ++j) {
            if (!c(artworks[j],artworks[j + 1])) {
                std::swap(artworks[j],artworks[j + 1]);
            }
        }
    }
}

std::shared_ptr<Artwork> Gallery::find(std::function<bool(std::shared_ptr<Artwork>)> c) const {
    return *std::find_if(artworks.begin(),artworks.end(),c);
}

void Gallery::printArtworks(PrintIfPainting i) const {
    for_each(artworks.begin(),artworks.end(),i);
}

void Gallery::filterOut(std::function<bool(std::shared_ptr<Artwork>)> c) {
    for (int i = artworks.size()-1; i >= 0; --i) {
        if (c(artworks[i])) {
            artworks.erase(artworks.begin() + i);
        }
    }
}

std::vector<std::shared_ptr<Artwork>> Gallery::filter(std::function<bool(std::shared_ptr<Artwork>)> c) {
    std::vector<std::shared_ptr<Artwork>> returnVec;
    for(int i = 0; i < artworks.size(); ++i) {
        if (c(artworks[i])) {
            returnVec.push_back(artworks[i]);
        }
    }
    return returnVec;
}
