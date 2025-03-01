from PetShop import PetShop
from Aksesoris import Aksesoris
from Baju import Baju

if __name__ == "__main__":
    listBaju = []
    idCounter = 1
    
    listBaju+=[(Baju(idCounter, "kaos_anjing_garis", 30000, 15, "kaos", "katun", "biru", "anjing", 4, "MeowWear"))]
    idCounter += 1
    listBaju+=[(Baju(idCounter, "sweaterPuppy", 50000, 10, "sweater", "wol", "merah", "puppy", 2, "PawStyle"))]
    idCounter += 1
    listBaju+=[(Baju(idCounter, "jaket_kucing", 70000, 5, "jaket", "kulit", "hitam", "kucing", 3, "PurrWear"))]
    idCounter += 1
    listBaju+=[Baju(idCounter, "jaket_anjing", 45000, 8, "jaket", "denim", "hitam", "anjing", 5, "FurFashion")]
    idCounter += 1
    listBaju+=[Baju(idCounter, "kaosSantai_anjing", 28000, 20, "kaos", "katun", "hijau", "anjing", 3, "PawWear")]
    
    while True:
        print("1. Tampilkan semua baju")
        print("2. Tambah baju")
        print("3. Exit")
        choice = int(input("Pilih menu: "))
        
        if choice == 1:
            # print tabel
            mxLenID=2
            mxLenNamaProduk=11
            mxLenHargaProduk=13
            mxLenStokProduk=12
            mxLenJenis=5
            mxLenBahan=5
            mxLenWarna=5
            mxLenUntuk=5
            mxLenSize=4
            mxLenMerk=4

            # find max length of each column
            for baju in listBaju:
                if mxLenID < len(str(baju.getID())): mxLenID = len(str(baju.getID()))
                if mxLenNamaProduk < len(baju.getNamaProduk()): mxLenNamaProduk = len(baju.getNamaProduk())
                if mxLenHargaProduk < len(str(baju.getHargaProduk())): mxLenHargaProduk = len(str(baju.getHargaProduk()))
                if mxLenStokProduk < len(str(baju.getStokProduk())): mxLenStokProduk = len(str(baju.getStokProduk()))
                if mxLenJenis < len(baju.getJenis()): mxLenJenis = len(baju.getJenis())
                if mxLenBahan < len(baju.getBahan()): mxLenBahan = len(baju.getBahan())
                if mxLenWarna < len(baju.getWarna()): mxLenWarna = len(baju.getWarna())
                if mxLenUntuk < len(baju.getUntuk()): mxLenUntuk = len(baju.getUntuk())
                if mxLenSize < len(str(baju.getSize())): mxLenSize = len(str(baju.getSize()))
                if mxLenMerk < len(baju.getMerk()): mxLenMerk = len(baju.getMerk())
            
            # print pembatas atas
            print("-"* (mxLenID+mxLenNamaProduk+mxLenHargaProduk+mxLenStokProduk+mxLenJenis+mxLenBahan+mxLenWarna+mxLenUntuk+mxLenSize+mxLenMerk+31))
            # print header
            print("| ID "+ " "*(mxLenID-2) + "| Nama Produk "+ " "*(mxLenNamaProduk-11) + "| Harga Produk  "+ " "*(mxLenHargaProduk-13) + "| Stok Produk  "+ " "*(mxLenStokProduk-12) + "| Jenis "+ " "*(mxLenJenis-5) + "| Bahan "+ " "*(mxLenBahan-5) + "| Warna "+ " "*(mxLenWarna-5) + "| Untuk "+ " "*(mxLenUntuk-5) + "| Size "+ " "*(mxLenSize-4) + "| Merk "+ " "*(mxLenMerk-4) + "|")
            # print pembatas header
            print("-"* (mxLenID+mxLenNamaProduk+mxLenHargaProduk+mxLenStokProduk+mxLenJenis+mxLenBahan+mxLenWarna+mxLenUntuk+mxLenSize+mxLenMerk+31))
            # print data
            for baju in listBaju:
                print("| "+str(baju.getID())+ " "*(mxLenID-len(str(baju.getID()))+1) + "| "+baju.getNamaProduk()+ " "*(mxLenNamaProduk-len(baju.getNamaProduk())+1) + "| "+str(baju.getHargaProduk())+ " "*(mxLenHargaProduk-len(str(baju.getHargaProduk()))+1) + "| "+str(baju.getStokProduk())+ " "*(mxLenStokProduk-len(str(baju.getStokProduk()))+1) + "| "+baju.getJenis()+ " "*(mxLenJenis-len(baju.getJenis())+1) + "| "+baju.getBahan()+ " "*(mxLenBahan-len(baju.getBahan())+1) + "| "+baju.getWarna()+ " "*(mxLenWarna-len(baju.getWarna())+1) + "| "+baju.getUntuk()+ " "*(mxLenUntuk-len(baju.getUntuk())+1) + "| "+str(baju.getSize())+ " "*(mxLenSize-len(str(baju.getSize()))+1) + "| "+baju.getMerk()+ " "*(mxLenMerk-len(baju.getMerk())+1) + "|")
            # print pembatas bawah
            print("-"* (mxLenID+mxLenNamaProduk+mxLenHargaProduk+mxLenStokProduk+mxLenJenis+mxLenBahan+mxLenWarna+mxLenUntuk+mxLenSize+mxLenMerk+31))



        
        elif choice == 2:
            idCounter += 1
            nama = input("Masukkan Nama Produk: ")
            harga = int(input("Masukkan Harga Produk: "))
            stok = int(input("Masukkan Stok Produk: "))
            jenis = input("Masukkan Jenis: ")
            bahan = input("Masukkan Bahan: ")
            warna = input("Masukkan Warna: ")
            untuk = input("Masukkan Untuk: ")
            size = int(input("Masukkan Size: "))
            merk = input("Masukkan Merk: ")
            
            listBaju.append(Baju(idCounter, nama, harga, stok, jenis, bahan, warna, untuk, size, merk))
        elif choice == 3:
            print("byeBye")
            break
