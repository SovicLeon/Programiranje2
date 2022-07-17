#include "Gallery.h"
#include "Film.h"
#include "TwoInOne.h"

bool ascendingYear(std::shared_ptr<Artwork> i, std::shared_ptr<Artwork> j) {
    if (i->getYear() < j->getYear()) {
        return true;
    }
    return false;
}

bool descendingYear(std::shared_ptr<Artwork> i, std::shared_ptr<Artwork> j) {
    if (i->getYear() > j->getYear()) {
        return true;
    }
    return false;
}

bool ascendingPrice(std::shared_ptr<Artwork> i, std::shared_ptr<Artwork> j) {
    if (i->getPrice() < j->getPrice()) {
        return true;
    }
    return false;
}

bool isRenaissanceArt(std::shared_ptr<Artwork> a) {
    if (a->getYear() >= 1400 && a->getYear() <= 1600) {
        return true;
    }
    return false;
}

bool isOlderThan2000(std::shared_ptr<Artwork> a) {
    if (a->getYear() > 2000) {
        return true;
    }
    return false;
}

bool isRenaissanceArtist(std::shared_ptr<Artwork> a) {
    if (a->getArtist()->getDateOfBirth().getYear() >= 1400 && a->getArtist()->getDateOfBirth().getYear() <= 1600) {
        return true;
    }
    return false;
}

int main() {
    Date dateOfBirthArtist1(18,2,1500);
    std::shared_ptr<Artist> testArtist1 = std::make_shared<Artist>("Leon Sovic", "Not an artist.", dateOfBirthArtist1);
    Date dateOfBirthArtist2(12,2,1577);
    std::shared_ptr<Artist> testArtist2 = std::make_shared<Artist>("Person Two", "Second person that is a artist.", dateOfBirthArtist2);
    Date dateOfBirthArtist3(28,5,1982);
    std::shared_ptr<Artist> testArtist3 = std::make_shared<Artist>("The Third", "The third one.", dateOfBirthArtist3);
    Date dateOfBirthArtist4(3,3,2001);
    std::shared_ptr<Artist> testArtist4 = std::make_shared<Artist>("Famous Artist", "Very very famous mhm.", dateOfBirthArtist4);
    Date dateOfBirthArtist5(8,8,1908);
    std::shared_ptr<Artist> testArtist5 = std::make_shared<Artist>("Cool Artist", "He is very cool yes.", dateOfBirthArtist5);

    std::shared_ptr<Gallery> gallery1 = std::make_shared<Gallery>("Luvre", "Koroska 21", 21.5, 38.8, 45.4, 5, 3);

    gallery1->addArtwork(std::make_shared<Artwork>("Art4",testArtist4,"Created for FERI, nice4.",40,2021));
    gallery1->addArtwork(std::make_shared<Artwork>("Art5",testArtist5,"Created for FERI, nice5.",50,1901));
    gallery1->addArtwork(std::make_shared<Artwork>("Art6",testArtist4,"Created for FERI, nice6.",60,1902));
    gallery1->addArtwork(std::make_shared<Artwork>("Art7",testArtist1,"Created for FERI, nice7.",700,1903));

    std::cout << std::endl;

    gallery1->addArtwork(std::make_shared<Painting>("Painting1", testArtist1, "Painting test 1 h", 12203, 1500, PaintingTechnique::Oil));
    gallery1->addArtwork(std::make_shared<Painting>("Painting2", testArtist3, "Painting test 2 huh", 15203, 1989, PaintingTechnique::Graphite));
    gallery1->addArtwork(std::make_shared<Painting>("Painting3", testArtist2, "Painting test 3 ha", 10803, 1989, PaintingTechnique::Acrylic));
    gallery1->addArtwork(std::make_shared<Film>("Film1", testArtist4, "Film test 1 test", 16, 2009, 160, 74, Genre::Adventure));
    gallery1->addArtwork(std::make_shared<Film>("Film2", testArtist5, "Film test 2 is test", 8, 1999, 120, 83, Genre::SciFi));

    gallery1->sort(ascendingYear);
    std::cout << gallery1->toString();
    std::cout << std::endl << std::endl;
    gallery1->sort(descendingYear);
    gallery1->printArtworks();
    std::cout << std::endl << std::endl;
    gallery1->sort(ascendingPrice);
    gallery1->printArtworks();

    std::cout << std::endl;
    std::cout << std::endl;

    std::vector<std::shared_ptr<Artwork>> filterVec;
    filterVec = gallery1->filter(isRenaissanceArtist);

    if (filterVec.size() > 0) {
        std::cout << "Renaissance artist artworks: " << std::endl;
        for (int i = 0; i < filterVec.size(); ++i) {
            std::cout << filterVec[i]->toString() << "\n";
        }
    } else {
        std::cout << "There is no renaissance artists!" << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::shared_ptr<Artwork> findArtwork = gallery1->find(isRenaissanceArt);
    if (findArtwork != NULL) {
        std::cout << "Artwork in renaissance: " << gallery1->find(isRenaissanceArt)->toString() << std::endl;
    } else {
        std::cout << "There is no artwork in renaissance!" << std::endl;
    }
    std::cout << std::endl;


    PrintIfPainting paint;
    gallery1->printArtworks(paint);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "\nBefore filter: \n";
    gallery1->printArtworks();
    gallery1->filterOut(isOlderThan2000);
    std::cout << "\nAfter filter: \n";
    gallery1->printArtworks();
    std::cout << std::endl;
    std::cout << std::endl;

    gallery1->filterOut([](std::shared_ptr<Artwork> a) {
        if (a->getPrice() < 100) {
            return true;
        }
        return false;
    });

    gallery1->printArtworks();

    std::cout << std::endl;
    std::cout << std::endl;

    std::shared_ptr<TwoInOne> twoInOneFirst = std::make_shared<TwoInOne>(35,4030,1,"Asus","ENG",true);

    std::cout << "Two in one computer: " << twoInOneFirst->toString();

    return 0;
}