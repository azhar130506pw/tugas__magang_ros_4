#include "../include/manajemen_buku/Buku.h"

Buku::Buku(int id, const std::string& judul, const std::string& penulis, int tahun)
    : id(id), judul(judul), penulis(penulis), tahun(tahun) {}

void Buku::tampilkan() const {
    std::cout << "ID: " << id << ", Judul: " << judul
              << ", Penulis: " << penulis << ", Tahun: " << tahun << std::endl;
}
