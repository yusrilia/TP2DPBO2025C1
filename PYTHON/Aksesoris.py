from PetShop import PetShop
class Aksesoris(PetShop):
    def __init__(self, id=0, namaProduk="", hargaProduk=0, stokProduk=0, jenis="", bahan="", warna=""):
        super().__init__(id, namaProduk, hargaProduk, stokProduk)
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna
    
    def setJenis(self, jenis):
        self.jenis = jenis
    def setBahan(self, bahan):
        self.bahan = bahan
    def setWarna(self, warna):
        self.warna = warna
    
    def getJenis(self):
        return self.jenis
    def getBahan(self):
        return self.bahan
    def getWarna(self):
        return self.warna