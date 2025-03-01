#include <iostream>
#include <string>

using namespace std;

class PetShop {
    private:
    // buat atribut yang dibutuhkan
        int id;
        string nama_produk;
        int harga_produk;
        int stok_produk;

    public:
        PetShop(){ // konsruktor default (kosong)
            this->id = 0;
            this->nama_produk = "";
            this->harga_produk = 0;
            this->stok_produk = 0;
        }
        
        PetShop(int id, string nama_produk, int harga_produk, int stok_produk){ // konstruktor dengan parameter
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }

        void setID(int id){ // ID setter
            this->id = id;
        }
        void setNama_produk(string nama_produk){ // nama_produk setter
            this->nama_produk = nama_produk;
        }
        void setHarga_produk(int harga_produk){ // harga_produk setter
            this->harga_produk = harga_produk;
        }
        void setStok_produk(int stok_produk){ // stok_produk setter
            this->stok_produk = stok_produk;
        }       


        int getID(){ // ID getter
            return this->id;
        }
        string getNama_produk(){ // nama_produk getter
            return this->nama_produk;
        }
        int getHarga_produk(){ // harga_produk getter
            return this->harga_produk;
        }
        int getStok_produk(){ // stok_produk getter
            return this->stok_produk;
        }    

        ~PetShop(){
        }


};