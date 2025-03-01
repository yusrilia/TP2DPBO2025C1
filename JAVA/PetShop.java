import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class PetShop {
    private int id;
    private String namaProduk;
    private int hargaProduk;
    private int stokProduk;

    public PetShop() {
        this.id = 0;
        this.namaProduk = "";
        this.hargaProduk = 0;
        this.stokProduk = 0;
    }

    public PetShop(int id, String namaProduk, int hargaProduk, int stokProduk) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.hargaProduk = hargaProduk;
        this.stokProduk = stokProduk;
    }

    public void setID(int id) { this.id = id; }
    public void setNamaProduk(String namaProduk) { this.namaProduk = namaProduk; }
    public void setHargaProduk(int hargaProduk) { this.hargaProduk = hargaProduk; }
    public void setStokProduk(int stokProduk) { this.stokProduk = stokProduk; }

    public int getID() { return this.id; }
    public String getNamaProduk() { return this.namaProduk; }
    public int getHargaProduk() { return this.hargaProduk; }
    public int getStokProduk() { return this.stokProduk; }
}





