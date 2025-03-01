class Baju extends Aksesoris {
    private String untuk;
    private int size;
    private String merk;

    public Baju() {
        super();
        this.untuk = "";
        this.size = 0;
        this.merk = "";
    }

    public Baju(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna, String untuk, int size, String merk) {
        super(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    public void setUntuk(String untuk) { this.untuk = untuk; }
    public void setSize(int size) { this.size = size; }
    public void setMerk(String merk) { this.merk = merk; }

    public String getUntuk() { return this.untuk; }
    public int getSize() { return this.size; }
    public String getMerk() { return this.merk; }
}