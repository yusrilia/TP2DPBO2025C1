<?php
require_once "PetShop.php";
class PetShop {
    protected $id;
    protected $nama_produk;
    protected $harga_produk;
    protected $stok_produk;
    protected $foto;

    public function __construct($id = 0, $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto = "") {
        $this->id = $id;
        $this->nama_produk = $nama_produk;
        $this->harga_produk = $harga_produk;
        $this->stok_produk = $stok_produk;
        $this->foto = $foto;
    }

    public function setID($id) { $this->id = $id; }
    public function setNamaProduk($nama_produk) { $this->nama_produk = $nama_produk; }
    public function setHargaProduk($harga_produk) { $this->harga_produk = $harga_produk; }
    public function setStokProduk($stok_produk) { $this->stok_produk = $stok_produk; }
    public function setFoto($foto) { $this->foto = $foto; }

    public function getID() { return $this->id; }
    public function getNamaProduk() { return $this->nama_produk; }
    public function getHargaProduk() { return $this->harga_produk; }
    public function getStokProduk() { return $this->stok_produk; }
    public function getFoto() { return $this->foto; }
}

?>