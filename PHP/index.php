<?php
    require_once "Baju.php";

    $idCounter = 1;
    $listBaju = [];    
    $listBaju[] = new Baju($idCounter++, "Kaos Anjing", 30000, 10,"images/image.jpg", "Kaos", "Katun", "Biru", "Anjing", 4, "MeowWear");
    $listBaju[] = new Baju($idCounter++, "Sweater Puppy", 50000, 8, "images/image.jpg", "Sweater", "Wol", "Merah", "Puppy", 3, "PawStyle");
    $listBaju[] = new Baju($idCounter++, "Jaket Kucing", 45000, 5, "images/image.jpg", "Jaket", "Denim", "Hitam", "Kucing", 5, "FurFashion");
    $listBaju[] = new Baju($idCounter++, "Kostum Halloween", 70000, 7, "images/image.jpg", "Kostum", "Polyester", "Oranye", "Puppy", 2, "PetTrendy");
    $listBaju[] = new Baju($idCounter++, "Kaos Santai", 28000, 12, "images/image.jpg", "Kaos", "Katun", "Hijau", "Anjing", 3, "PawWear");

?>

<!DOCTYPE html>
<html>
<head>
    <title>Daftar Baju</title>
    <style>
        table { border-collapse: collapse; width: 100%; }
        th, td { border: 1px solid black; padding: 8px; text-align: left; }
        th { background-color: #f2f2f2; }
    </style>
</head>
<body>    

    <h2>Daftar Baju</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
            <th>Foto</th>
        </tr>
        
        <?php foreach ($listBaju as $baju): ?>
        <tr>
            <td><?= $baju->getID(); ?></td>
            <td><?= $baju->getNamaProduk(); ?></td>
            <td><?= $baju->getHargaProduk(); ?></td>
            <td><?= $baju->getStokProduk(); ?></td>
            <td><?= $baju->getJenis(); ?></td>
            <td><?= $baju->getBahan(); ?></td>
            <td><?= $baju->getWarna(); ?></td>
            <td><?= $baju->getUntuk(); ?></td>
            <td><?= $baju->getSize(); ?></td>
            <td><?= $baju->getMerk(); ?></td>
            <td><img src="<?= $baju->getFoto(); ?>" width="100px" height="100px"></td>

        </tr>
        <?php endforeach; ?>
    </table>

</body>
</html>
