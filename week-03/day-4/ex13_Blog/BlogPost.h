//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX13_BLOG_BLOGPOST_H
#define EX13_BLOG_BLOGPOST_H

#include <iostream>

class BlogPost {
public:
    BlogPost();
    void setAuthorName(const std::string &authorName);
    void setTitle(const std::string &title);
    void setText(const std::string &text);
    void setPublicationDate(const std::string &publicationDate);
    const std::string &getAuthorName() const;
    const std::string &getTitle() const;
    const std::string &getText() const;
    const std::string &getPublicationDate() const;

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};

#endif //EX13_BLOG_BLOGPOST_H
