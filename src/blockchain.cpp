#include "blockchain.h"
#include "block.h"

Blockchain::Blockchain(){
    Block genesis("Genesis");
    list.push_back(genesis);
    list.at(0).set_prev_hash(NULL);
    list.at(0).set_hash(list.at(0).sha256("apfel"));
    list.at(0).set_no(0);
    head = &list.at(0);
}

void add(Block b) {
     //////////////////////////////////
}
