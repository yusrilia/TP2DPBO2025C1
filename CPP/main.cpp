#include <bits/stdc++.h>
#include "Baju.cpp"

using namespace std;

int main(){
    list <Baju> listBaju;
    int id=1; // id dimulai dari 1
    
    listBaju.push_back(Baju(id++, "kaos_anjing_garis", 30000, 15, "kaos", "katun", "biru", "anjing", 4, "MeowWear"));
    listBaju.push_back(Baju(id++, "sweater_puppy", 50000, 10, "sweater", "wol", "merah", "puppy", 2, "PawStyle"));
    listBaju.push_back(Baju(id++, "jaket_anjing", 45000, 8, "jaket", "denim", "hitam", "anjing", 5, "FurFashion"));
    listBaju.push_back(Baju(id++, "kostum_halloween_puppy", 70000, 5, "kostum", "polyester", "oranye", "puppy", 3, "PetTrendy"));
    listBaju.push_back(Baju(id++, "kaos_santai_anjing", 28000, 20, "kaos", "katun", "hijau", "anjing", 3, "PawWear"));
    
    // menu untuk menampilkan, menambah dan exit 
    int choice =-1;
    while (choice != 3){

        cout << "1. Tampilkan semua baju" << endl;
        cout << "2. Tambah baju" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih menu: ";
        cin >> choice;

        if (choice == 1){
            // tampilkan dalam bentuk tabel

            // cari length terpanjang untuk setiap atribut
            int mxLenID, mxLenNama_produk, mxLenHarga_produk, mxLenStok_produk, mxLenJenis, mxLenBahan, mxLenWarna, mxLenUntuk, mxLenSize, mxLenMerk;
            mxLenID=2;
            mxLenNama_produk=11;
            mxLenHarga_produk=13;
            mxLenStok_produk=12;
            mxLenJenis=5;
            mxLenBahan=5;
            mxLenWarna=5;
            mxLenUntuk=5;
            mxLenSize=4;
            mxLenMerk=4;

            for (list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); it++){
                mxLenID = max(mxLenID, (int)to_string(it->getID()).length());
                mxLenNama_produk = max(mxLenNama_produk, (int)it->getNama_produk().length());
                mxLenHarga_produk = max(mxLenHarga_produk, (int)to_string(it->getHarga_produk()).length());
                mxLenStok_produk = max(mxLenStok_produk, (int)to_string(it->getStok_produk()).length());
                mxLenJenis = max(mxLenJenis, (int)it->getJenis().length());
                mxLenBahan = max(mxLenBahan, (int)it->getBahan().length());
                mxLenWarna = max(mxLenWarna, (int)it->getWarna().length());
                mxLenUntuk = max(mxLenUntuk, (int)it->getUntuk().length());
                mxLenSize = max(mxLenSize, (int)to_string(it->getSize()).length());
                mxLenMerk = max(mxLenMerk, (int)it->getMerk().length());
            }
            
            // print tabel yang menyesuaikan dengan length terpanjang
            // print "-" sepanjang total length
            cout << string(mxLenID + mxLenNama_produk + mxLenHarga_produk + mxLenStok_produk + mxLenJenis + mxLenBahan + mxLenWarna + mxLenUntuk + mxLenSize + mxLenMerk + 9*3+2, '-') << endl;
            
            // print header
            cout << "| ID" << string(mxLenID - 2, ' ') 
            << " | Nama Produk" << string(mxLenNama_produk - 11, ' ') 
            << " | Harga Produk" << string(mxLenHarga_produk - 13, ' ') 
            << " | Stok Produk" << string(mxLenStok_produk - 12, ' ') 
            << " | Jenis" << string(mxLenJenis - 5, ' ') 
            << " | Bahan" << string(mxLenBahan - 5, ' ') 
            << " | Warna" << string(mxLenWarna - 5, ' ') 
            << " | Untuk" << string(mxLenUntuk - 5, ' ') 
            << " | Size" << string(mxLenSize - 4, ' ') 
            << " | Merk" << string(mxLenMerk - 4, ' ') << " |" << endl;

            cout << string(mxLenID + mxLenNama_produk + mxLenHarga_produk + mxLenStok_produk + mxLenJenis + mxLenBahan + mxLenWarna + mxLenUntuk + mxLenSize + mxLenMerk + 9*3+2, '-') << endl;
           
            // print isi
            for (list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); it++){
                cout << "| " << it->getID() << string(mxLenID - to_string(it->getID()).length(), ' ') << " | " 
                    << it->getNama_produk() << string(mxLenNama_produk - it->getNama_produk().length(), ' ') << " | " 
                    << it->getHarga_produk() << string(mxLenHarga_produk - to_string(it->getHarga_produk()).length()-1, ' ') 
                    << " | " << it->getStok_produk() << string(mxLenStok_produk - to_string(it->getStok_produk()).length()-1, ' ') << " | " 
                    << it->getJenis() << string(mxLenJenis - it->getJenis().length(), ' ') << " | " 
                    << it->getBahan() << string(mxLenBahan - it->getBahan().length(), ' ') << " | " 
                    << it->getWarna() << string(mxLenWarna - it->getWarna().length(), ' ') << " | " 
                    << it->getUntuk() << string(mxLenUntuk - it->getUntuk().length(), ' ') << " | " 
                    << it->getSize() << string(mxLenSize - to_string(it->getSize()).length(), ' ') << " | " 
                    << it->getMerk() << string(mxLenMerk - it->getMerk().length(), ' ') << " |" << endl;
            }
            cout << string(mxLenID + mxLenNama_produk + mxLenHarga_produk + mxLenStok_produk + mxLenJenis + mxLenBahan + mxLenWarna + mxLenUntuk + mxLenSize + mxLenMerk + 9*3+2, '-') << endl;
            

        } else if (choice == 2){
            id++;
            int harga_produk, stok_produk, size;
            string nama_produk, jenis, bahan, warna, untuk, merk;

            cout << "Masukkan Nama Produk: ";
            cin >> nama_produk;
            cout << "Masukkan Harga Produk: ";
            cin >> harga_produk;
            cout << "Masukkan Stok Produk: ";
            cin >> stok_produk;
            cout << "Masukkan Jenis: ";
            cin >> jenis;
            cout << "Masukkan Bahan: ";
            cin >> bahan;
            cout << "Masukkan Warna: ";
            cin >> warna;
            cout << "Masukkan Untuk: ";
            cin >> untuk;
            cout << "Masukkan Size: ";
            cin >> size;
            cout << "Masukkan Merk: ";
            cin >> merk;

            listBaju.push_back(Baju(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna, untuk, size, merk));
        }

    }

    cout << "byeBye" << endl;

    return 0;
}