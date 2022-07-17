#include "Artwork.h"

void printArtworksInTimePeriod(std::vector<Artwork *> &artworks, unsigned int yearFrom, unsigned int yearTo) {
    for (unsigned int i = 0; i < artworks.size(); i++) {
        if (artworks[i]->getYear() >= yearFrom && artworks[i]->getYear() <= yearTo) {
            artworks[i]->print();
            std::cout << std::endl;
        }
    }
}

int main() {
    std::vector<Artwork *> artworks;

    Artwork Artwork1("Mona", "Da Vinci", "It is an artwork", 2300000, 1403);
    Artwork Artwork2("The Last Supper", "Da Vinci", "I think it's a artwork", 10000, 1683);
    Artwork Artwork3("Mundi", "Unknown", "This is another Da Vinci artwork", 9873211, 1399);

    std::cout << "First artwork: " << Artwork1.toString() << std::endl;
    Artwork2.print();
    std::cout << std::endl;

    Artwork2.setPrice(250000);

    std::cout << "Second artwork: " << Artwork2.toString() << std::endl;

    std::cout << "Third artwork name: " << Artwork3.getTitle() << std::endl;

    std::cout << "Third artwork name: " << Artwork3.getArtist() << std::endl;

    Artwork *Artwork4 = new Artwork("The Starry Night", "Van Gogh", "Famous artwork", 10, 1889);

    std::cout << "Fourth artwork: " << Artwork4->toString() << std::endl;

    Artwork4->setDescription("Famous artwork by Vincent van Gogh");

    Artwork4->print();
    std::cout << std::endl;

    Artwork *Artwork5 = new Artwork("Picture5", "Test Artist", "This is the description of Artwork5", 100, 2022);
    std::cout << std::endl;
    std::cout << "Picture5 description: " << Artwork5->getDescription();
    std::cout << std::endl;
    std::cout << "Picture5 price: " << Artwork5->getPrice();
    std::cout << std::endl;
    std::cout << "Picture5 year: " << Artwork5->getYear();
    std::cout << std::endl;

    delete Artwork4;
    delete Artwork5;

    for (int i = 0; i < 5; ++i) {
        artworks.push_back(new Artwork("Artwork" + std::to_string(i + 1), "Vector Artist" + std::to_string(i + 1),
                                       "This is the description of vector artwork " + std::to_string(i + 1),
                                       (i + 1) * 100, 2018 + i));
    }

    artworks.push_back(
            new Artwork("Artwork", "Vector Artist6", "This is the description of vector artwork ", 10, 1900));
    artworks.push_back(
            new Artwork("Artwork", "Vector Artist7", "This is the description of vector artwork ", 300, 1930));
    artworks.push_back(
            new Artwork("Artwork", "Vector Artist8", "This is the description of vector artwork ", 500, 2000));
    artworks.push_back(
            new Artwork("Artwork", "Vector Artist9", "This is the description of vector artwork ", 700, 1999));
    artworks.push_back(
            new Artwork("Artwork", "Vector Artist10", "This is the description of vector artwork ", 800, 2010));

    for (unsigned int i = 0; i < artworks.size(); i++) {
        std::cout << artworks[i]->toString() << ((i < artworks.size() - 1) ? ", " : ".") << std::endl;
    }

    std::cout << std::endl;

    printArtworksInTimePeriod(artworks, 2000, 2020);

    for (Artwork* art : artworks) {
        delete art;
    }

    return 0;
}