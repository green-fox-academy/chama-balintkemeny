//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX01_POSTIT_POSTIT_H
#define EX01_POSTIT_POSTIT_H

#include <iostream>


class PostIt {
public:
    void setBackgroundColor(const std::string &backgroundColor);
    void setText(const std::string &text);
    void setTextColor(const std::string &textColor);

    const std::string &getBackgroundColor() const;
    const std::string &getText() const;
    const std::string &getTextColor() const;

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;
};


#endif //EX01_POSTIT_POSTIT_H
