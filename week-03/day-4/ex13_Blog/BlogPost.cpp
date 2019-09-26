#include "BlogPost.h"

BlogPost::BlogPost() = default;

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

const std::string &BlogPost::getAuthorName() const {
    return _authorName;
}

const std::string &BlogPost::getTitle() const {
    return _title;
}

const std::string &BlogPost::getText() const {
    return _text;
}

const std::string &BlogPost::getPublicationDate() const {
    return _publicationDate;
}
