#include "block.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
#include <ctime>
#include <openssl/sha.h>

Block::Block(std::string data) {
    time_t now = time(0);
    char* dt = ctime(&now);
    m_time_stamp = dt;
    m_data = data;
}

string Block::sha256(const string str)
{
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);
    stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++)
    {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    return ss.str();
}
void Block::set_no(int n) {
    m_blockNo = n;
}

void Block::set_hash(string s) {
    m_hash = s;
}

void Block::set_prev_hash(string s) {
    m_prev_hash = s;
}