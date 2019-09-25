#include <iostream>
#include "PostIt.h"

int main() {
    PostIt note1;
    note1.setBackgroundColor("orange");
    note1.setText("Idea 1");
    note1.setTextColor("blue");

    PostIt note2;
    note2.setBackgroundColor("pink");
    note2.setText("Awesome");
    note2.setTextColor("black");

    PostIt note3;
    note3.setBackgroundColor("yellow");
    note3.setText("Superb!");
    note3.setTextColor("green");

    std::cout << "BgColor: " << note1.getBackgroundColor() << ", text: " << note1.getText() << ", text col.: "
              << note1.getTextColor() << std::endl;

    return 0;
}