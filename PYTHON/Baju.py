from Aksesoris import Aksesoris
class Baju(Aksesoris):
    def __init__(self, id=0, namadProduk="", hargadProduk=0, stokdProduk=0, jenis="", bahan="", warna="", untuk="", size=0, merk=""):
        super().__init__(id, namadProduk, hargadProduk, stokdProduk, jenis, bahan, warna)
        self.untuk = untuk
        self.size = size
        self.merk = merk
    
    def setUntuk(self, untuk):
        self.untuk = untuk
    def setSize(self, size):
        self.size = size
    def setMerk(self, merk):
        self.merk = merk
    
    def getUntuk(self):
        return self.untuk
    def getSize(self):
        return self.size
    def getMerk(self):
        return self.merk