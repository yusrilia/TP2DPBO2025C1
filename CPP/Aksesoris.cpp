#include <iostream>
#include <string>
#include "PetShop.cpp"

using namespace std;

class Aksesoris : public PetShop{
    private:
        string jenis;
        string bahan;
        string warna;
    
    public:
        Aksesoris(){
            this->jenis = "";
            this->bahan = "";
            this->warna = "";
        }

        Aksesoris(int id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna){
            this->setID(id);
            this->setNama_produk(nama_produk);
            this->setHarga_produk(harga_produk);
            this->setStok_produk(stok_produk);
            this->jenis = jenis;
            this->bahan = bahan;
            this->warna = warna;
        }

        void setJenis(string jenis){
            this->jenis = jenis;
        }
        void setBahan(string bahan){
            this->bahan = bahan;
        }
        void setWarna(string warna){
            this->warna = warna;
        }

        string getJenis(){
            return this->jenis;
        }
        string getBahan(){
            return this->bahan;
        }
        string getWarna(){
            return this->warna;
        }

        ~Aksesoris(){
        }



};