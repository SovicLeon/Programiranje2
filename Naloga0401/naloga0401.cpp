#include "Gallery.h"

void clearVector(const std::vector<Artist*> &array) {
    for (Artist* i : array) {
        delete i;
    }
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

    gallery1->addArtwork(new Artwork("Art1",testArtist1,"Created for FERI, nice1.",100,2018));
    gallery1->addArtwork(new Artwork("Art2",testArtist2,"Created for FERI, nice2.",200,2019));
    gallery1->addArtwork(new Artwork("Art3",testArtist3,"Created for FERI, nice3.",300,1890));
    gallery1->addArtwork(new Artwork("Art4",testArtist4,"Created for FERI, nice4.",400,2021));
    gallery1->addArtwork(new Artwork("Art5",testArtist5,"Created for FERI, nice5.",500,1901));
    gallery1->addArtwork(new Artwork("Art6",testArtist4,"Created for FERI, nice6.",600,1902));
    gallery1->addArtwork(new Artwork("Art7",testArtist1,"Created for FERI, nice7.",700,1903));
    gallery1->printArtworks();
    std::cout << std::endl;
    std::cout << gallery1->toString() << std::endl << std::endl;

    gallery1->getOldestArtwork()->print();

    std::cout << std::endl << std::endl;

    oldArtists = gallery1->getAllArtistsBornAfter(2000);
    for (int i = 0; i < oldArtists.size(); ++i) {
        std::cout << oldArtists[i]->toString() << std::endl;
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