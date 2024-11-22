#include <iostream>



int main()
{
    int pyramidType;
    int pyramidSize;
    bool typedIndexCorrect = false;

    do {
        std::cout << "Which type of pyramid do you want? " << std::endl;
        std::cout << "1. Top to Down half pyramid" << std::endl;
        std::cout << "2. Bottom to Up half pyramid" << std::endl;
        std::cout << "3. Real pyramid." << std::endl;
        std::cout << "4. I don't want a pryramid." << std::endl;

        std::cin >> pyramidType;

        std::cout << "Enter the number of pyramid levels of your pyramid" << std::endl;
        std::cin >> pyramidSize;

        if (pyramidType <= 5 && pyramidType >= 1 ) {
            typedIndexCorrect = true;
        }else {
            std::cout << "Invalid Input" << std::endl;
        }
    }while (!typedIndexCorrect);

    int dump = pyramidSize;
    switch (pyramidType) {
        case 1: //top to down half pyramid
            for (int i = pyramidSize; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    std::cout << ".";
                }
                std::cout << std::endl;
            }
            break;
        case 2: //bottom to up half pyramid
            for (int i = 1; i <= pyramidSize; i++) {
                for (int j = 1; j <= i; j++) {
                    std::cout << ".";
                }
                std::cout << std::endl;
            }
            break;
        case 3: // real pyramid

            for(int i=1; i <= pyramidSize; i++) {
                for(int j=dump; j > 1; j--) {
                    std::cout << " ";
                }
                for (int x = 1; x <= 2*i-1; x++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
                dump--;
            }
        break;

        case 4: //nothing
            std::cout << "I do nothing. See you!" << std::endl;
            break;
    }

    return 0;
}
