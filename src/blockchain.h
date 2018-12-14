#pragma once
#include <iostream>
#include <vector>
#include "block.h"


class Blockchain {
public:
    Blockchain();
    void add(Block b);
private:
    std::vector<Block> list;
    Block* head;
};