class Aksesoris extends PetShop {
    private String jenis;
    private String bahan;
    private String warna;

    public Aksesoris() {
        super();
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    public Aksesoris(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna) {
        super(id, namaProduk, hargaProduk, stokProduk);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    public void setJenis(String jenis) { this.jenis = jenis; }
    public void setBahan(String bahan) { this.bahan = bahan; }
    public void setWarna(String warna) { this.warna = warna; }

    public String getJenis() { return this.jenis; }
    public String getBahan() { return this.bahan; }
    public String getWarna() { return this.warna; }
}