class PetShop:
    def __init__(self, id=0, namaProduk="", hargaProduk=0, stokProduk=0):
        self.id = id
        self.namaProduk = namaProduk
        self.hargaProduk = hargaProduk
        self.stokProduk = stokProduk
    
    def setID(self, id):
        self.id = id
    def setNamaProduk(self, namaProduk):
        self.namaProduk = namaProduk
    def setHargaProduk(self, hargaProduk):
        self.hargaProduk = hargaProduk
    def setStokProduk(self, stokProduk):
        self.stokProduk = stokProduk
    
    def getID(self):
        return self.id
    def getNamaProduk(self):
        return self.namaProduk
    def getHargaProduk(self):
        return self.hargaProduk
    def getStokProduk(self):
        return self.stokProduk