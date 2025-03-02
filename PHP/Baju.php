<?php
require_once "Aksesoris.php";
class Baju extends Aksesoris {
    protected $untuk;
    protected $size;
    protected $merk;

    public function __construct($id = 0, $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto = "",  $jenis = "", $bahan = "", $warna = "", $untuk = "", $size = 0, $merk = "") {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }
    // setters and getters 
    public function setUntuk($untuk) { $this->untuk = $untuk; }
    public function setSize($size) { $this->size = $size; }
    public function setMerk($merk) { $this->merk = $merk; }

    public function getUntuk() { return $this->untuk; }
    public function getSize() { return $this->size; }
    public function getMerk() { return $this->merk; }

}

?>