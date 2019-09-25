//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX02_BLOGPOST_BLOGPOST_H
#define EX02_BLOGPOST_BLOGPOST_H

#include <iostream>


class BlogPost {
public:
    void setAuthorName(const std::string &authorName);
    void setTitle(const std::string &title);
    void setText(const std::string &text);
    void setPublicationDate(const std::string &publicationDate);

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //EX02_BLOGPOST_BLOGPOST_H
