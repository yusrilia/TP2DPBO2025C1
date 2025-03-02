<?php
require_once "PetShop.php";

class Aksesoris extends PetShop {
    protected $jenis;
    protected $bahan;
    protected $warna;

    public function __construct($id = 0, $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto = "",  $jenis = "", $bahan = "", $warna = "") {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }
    // setter and getters
    public function setJenis($jenis) { $this->jenis = $jenis; }
    public function setBahan($bahan) { $this->bahan = $bahan; }
    public function setWarna($warna) { $this->warna = $warna; }

    public function getJenis() { return $this->jenis; }
    public function getBahan() { return $this->bahan; }
    public function getWarna() { return $this->warna; }

}


?>