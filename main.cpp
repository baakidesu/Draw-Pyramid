#include <iostream>



int main()
{
    int pyramidType;
    int pyramidSize;
    bool typedIndexCorrect = false;

    do {
        std::cout << "Which type of pyramid do you want? " << std::endl;
        std::cout << "1. Top to Down pyramid" << std::endl;
        std::cout << "2. Bottom to Up pyramid" << std::endl;
        std::cout << "3. Real pyramid." << std::endl;
        std::cout << "4. 2D Side-View pyramid." << std::endl;
        std::cout << "5. I don't want a pryramid." << std::endl;

        std::cin >> pyramidType;

        std::cout << "Enter the number of pyramid levels of your pyramid" << std::endl;
        std::cin >> pyramidSize;

        if (pyramidType <= 5 && pyramidType >= 1 ) {
            typedIndexCorrect = true;
        }else {
            std::cout << "Invalid Input" << std::endl;
        }
    }while (!typedIndexCorrect);

    switch (pyramidType) {
        case 1: //top to down
            for (int i = pyramidSize; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    std::cout << ".";
                }
                std::cout << std::endl;
            }
            break;
        case 2: //bottom to up
            for (int i = 1; i <= pyramidSize; i++) {
                for (int j = 1; j <= i; j++) {
                    std::cout << ".";
                }
                std::cout << std::endl;
            }
            break;
        case 3: // real pyramid
            break;
        case 4: //2d side view
            break;
        case 5: //nothing
            break;
    }

    return 0;
}
