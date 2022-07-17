#include "TextUtility.h"

int main() {
    std::string str = "lorem ipsum dolor, adipiscing magna? facil isi 2.5 morbi tempus urna id. Gravida non tellus orci! molestieac sed lectus. a";
    str = TextUtility::capitalize(str);
    std::cout << str;
    std::cout << std::endl;
    str = TextUtility::capitalize(str);
    std::cout << str;
    std::cout << std::endl;
    std::cout << "Lorem ipsum dolor, adipiscing magna? Facil isi 2.5 morbi tempus urna id. Gravida non tellus orci! Molestieac sed lectus. A\n";

    str = TextUtility::toUpperCase(str);
    std::cout << std::endl;
    std::cout << str;
    str = "Lorem ipsum dolor 12, adipiscing Magna.";
    str = TextUtility::toUpperCase(str);
    std::cout << std::endl;
    std::cout << str;
    str = TextUtility::toUpperCase(str);
    std::cout << std::endl;
    std::cout << str;
    std::cout << std::endl;
    std::cout << "LOREM IPSUM DOLOR 12, ADIPISCING MAGNA.\n\n";

    str = TextUtility::toLowerCase(str);
    std::cout << str;
    std::cout << std::endl;
    str = "Lorem ipsum dolor 12, adipiscing Magna. LOREM IPSUM DOLOR 12, ADIPISCING MAGNA.";
    str = TextUtility::toLowerCase(str);
    std::cout << str;
    std::cout << std::endl;
    str = TextUtility::toLowerCase(str);
    std::cout << str;
    std::cout << std::endl;
    std::cout << "lorem ipsum dolor 12, adipiscing magna. lorem ipsum dolor 12, adipiscing magna.\n\n";

    str = "432423";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;
    str = "4234 234";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;
    str = "4453asd";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;
    str = " s.d";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;
    str = "";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;
    str = "0";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;
    str = " ";
    std::cout << TextUtility::isNumeric(str);
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << TextUtility::contains("Lorem ipsum dolor.", "sum");
    std::cout << std::endl;
    std::cout << TextUtility::contains("Neobvezna naloga.", "goft");
    std::cout << std::endl;
    std::cout << TextUtility::contains("Lorem ipsum dolor.", ".");
    std::cout << std::endl;
    std::cout << TextUtility::contains("Lorem ipsum dolor.", "L");
    std::cout << std::endl;
    std::cout << TextUtility::contains("Lorem ipsum dolor.", " d ");

    std::cout << std::endl;
    std::cout << TextUtility::substr("Lorem ipsum dolor.",6,10);
    std::cout << std::endl;
    std::cout << TextUtility::substr("Lorem ipsum dolor.",0,4);
    std::cout << std::endl;
    std::cout << TextUtility::substr("Lorem ipsum dolor.",12,30);
    std::cout << std::endl;
    std::cout << TextUtility::substr("Lorem ipsum dolor.",5,6);

    return 0;
}