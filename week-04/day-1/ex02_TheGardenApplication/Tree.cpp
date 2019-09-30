//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "Tree.h"

Tree::Tree(std::string name) : Plant() {
    _name = name;
    _type = "tree";
    _absorbingAbility = 0.4;
    _waterNeed = 10;
    _waterLevel = 0;
}
