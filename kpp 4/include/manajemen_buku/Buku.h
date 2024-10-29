#ifndef BUKU_H
#define BUKU_H

#include <string>
#include <iostream>

class Buku {
private:
    int id;
    std::string judul;
    std::string penulis;
    int tahun;

public:
    Buku(int id, const std::string& judul, const std::string& penulis, int tahun);
    void tampilkan() const;
};

#endif
