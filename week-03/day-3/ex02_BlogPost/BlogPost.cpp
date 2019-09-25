//
// Created by Kemény Bálint on 2019. 09. 25..
//

#include "BlogPost.h"

void BlogPost::setAuthorName(const std::string &authorName) {
    _authorName = authorName;
}

void BlogPost::setTitle(const std::string &title) {
    _title = title;
}

void BlogPost::setText(const std::string &text) {
    _text = text;
}

void BlogPost::setPublicationDate(const std::string &publicationDate) {
    _publicationDate = publicationDate;
}
