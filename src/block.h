#pragma once
#include <iostream>

class Block {
    public:
        Block(std::string data);
        void set_prev_hash(std::string s);
        void set_hash(std::string s);
        void set_no(int n);
        std::string sha256(const std::string str);
    private:
        int m_blockNo;
        std::string m_data;
        std::string m_hash;
        std::string m_prev_hash;
        int m_nonce;
        char* m_time_stamp;
};
