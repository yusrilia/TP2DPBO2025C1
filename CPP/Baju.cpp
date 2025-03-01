#include <iostream>
#include <string>
#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris{
    private:
        string untuk;
        int size;
        string merk;
    public:
        Baju(){
            this->untuk = "";
            this->size = 0;
            this->merk = "";
        }

        Baju(int id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna, string untuk, int size, string merk){
            this->setID(id);
            this->setNama_produk(nama_produk);
            this->setHarga_produk(harga_produk);
            this->setStok_produk(stok_produk);
            this->setJenis(jenis);
            this->setBahan(bahan);
            this->setWarna(warna);
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        void setUntuk(string untuk){
            this->untuk = untuk;
        }
        void setSize(int size){
            this->size = size;
        }
        void setMerk(string merk){
            this->merk = merk;
        }

        string getUntuk(){
            return this->untuk;
        }
        int getSize(){
            return this->size;
        }
        string getMerk(){
            return this->merk;
        }

        ~Baju(){
        }

};