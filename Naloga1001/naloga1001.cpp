#include "Gallery.h"
#include "Film.h"

void clearVector(const std::vector<Artist*> &array) {
    for (Artist* i : array) {
        delete i;
    }
}

bool ascendingYear(Artwork* i, Artwork* j) {
    if (i->getYear() < j->getYear()) {
        return true;
    }
    return false;
}

bool descendingYear(Artwork* i, Artwork* j) {
    if (i->getYear() > j->getYear()) {
        return true;
    }
    return false;
}

bool ascendingPrice(Artwork* i, Artwork* j) {
    if (i->getPrice() < j->getPrice()) {
        return true;
    }
    return false;
}

bool isRenaissanceArt(Artwork* a) {
    if (a->getYear() >= 1400 && a->getYear() <= 1600) {
        return true;
    }
    return false;
}

bool isCheaperThan(Artwork* a) {
    if (a->getPrice() < 5000) {
        return true;
    }
    return false;
}

int main() {
    std::vector<Artist*> oldArtists;

    Date dateOfBirthArtist1(18,2,2002);
    Artist *testArtist1 = new Artist("Leon Sovic", "Not an artist.", dateOfBirthArtist1);
    Date dateOfBirthArtist2(12,2,1998);
    Artist *testArtist2 = new Artist("Person Two", "Second person that is a artist.", dateOfBirthArtist2);
    Date dateOfBirthArtist3(28,5,1982);
    Artist *testArtist3 = new Artist("The Third", "The third one.", dateOfBirthArtist3);
    Date dateOfBirthArtist4(3,3,2001);
    Artist *testArtist4 = new Artist("Famous Artist", "Very very famous mhm.", dateOfBirthArtist4);
    Date dateOfBirthArtist5(8,8,1908);
    Artist *testArtist5 = new Artist("Cool Artist", "He is very cool yes.", dateOfBirthArtist5);

    Gallery* gallery1 = new Gallery("Luvre");

    gallery1->addArtwork(new Artwork("Art4",testArtist4,"Created for FERI, nice4.",400,2021));
    gallery1->addArtwork(new Artwork("Art5",testArtist5,"Created for FERI, nice5.",500,1901));
    gallery1->addArtwork(new Artwork("Art6",testArtist4,"Created for FERI, nice6.",600,1902));
    gallery1->addArtwork(new Artwork("Art7",testArtist1,"Created for FERI, nice7.",700,1903));

    std::cout << std::endl;

    gallery1->addArtwork(new Painting("Painting1", testArtist1, "Painting test 1 h", 12203, 1500, PaintingTechnique::Oil));
    gallery1->addArtwork(new Painting("Painting2", testArtist3, "Painting test 2 huh", 15203, 1989, PaintingTechnique::Graphite));
    gallery1->addArtwork(new Painting("Painting3", testArtist2, "Painting test 3 ha", 10803, 1989, PaintingTechnique::Acrylic));
    gallery1->addArtwork(new Film("Film1", testArtist4, "Film test 1 test", 16, 2009, 160, 74, Genre::Adventure));
    gallery1->addArtwork(new Film("Film2", testArtist5, "Film test 2 is test", 8, 1999, 120, 83, Genre::SciFi));

    gallery1->sort(ascendingYear);
    std::cout << "Ascending year: \n" << gallery1->toString();
    std::cout << std::endl << std::endl;
    gallery1->sort(descendingYear);
    std::cout << "Descending year: \n" << gallery1->toString();
    std::cout << std::endl << std::endl;
    gallery1->sort(ascendingPrice);
    std::cout << "Ascending price: \n" << gallery1->toString();

    std::cout << std::endl;

    Artwork *findArtwork = gallery1->find(isRenaissanceArt);
    if (findArtwork) {
        std::cout << "\n\nArtwork in renaissance: " << gallery1->find(isRenaissanceArt)->toString() << std::endl;
    } else {
        std::cout << "\n\nThere is no artwork in renaissance!" << std::endl;
    }
    std::cout << std::endl;

    PrintIfPainting paint;
    gallery1->printArtworks(paint);

    std::cout << std::endl;
    std::cout << std::endl;


    std::vector<Artwork*> filterVec;
    filterVec = gallery1->filter(isCheaperThan);

    for (int i = 0; i < filterVec.size(); ++i) {
        std::cout << filterVec[i]->toString() << "\n";
    }

    delete testArtist1;
    delete testArtist2;
    delete testArtist3;
    delete testArtist4;
    delete testArtist5;
    delete gallery1;

    clearVector(oldArtists);

    return 0;
}