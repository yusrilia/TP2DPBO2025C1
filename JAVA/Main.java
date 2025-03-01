import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;



public class Main {
    public static void main(String[] args) {
        List<Baju> listBaju = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        int id = 1;
        
        listBaju.add(new Baju(id++, "kaos_anjing_garis", 30000, 15, "kaos", "katun", "biru", "anjing", 4, "MeowWear"));
        listBaju.add(new Baju(id++, "sweater_puppy", 50000, 10, "sweater", "wol", "merah", "puppy", 2, "PawStyle"));
        listBaju.add(new Baju(id++, "jaket_anjing", 45000, 8, "jaket", "denim", "hitam", "anjing", 5, "FurFashion"));
        listBaju.add(new Baju(id++, "kostum_halloween_puppy", 70000, 5, "kostum", "polyester", "oranye", "puppy", 3, "PetTrendy"));
        listBaju.add(new Baju(id++, "kaos_santai_anjing", 28000, 20, "kaos", "katun", "hijau", "anjing", 3, "PawWear"));
    
        int choice = -1;
        while (choice != 3) {
            System.out.println("1. Tampilkan semua baju");
            System.out.println("2. Tambah baju");
            System.out.println("3. Exit");
            System.out.print("Pilih menu: ");
            choice = scanner.nextInt();
            
            if (choice == 1) {
                // tampilkan dalam bentuk tabel                
                // cari length terpanjang untuk setiap atribut
                int mxLenID=2;
                int mxLenNamaProduk=11;
                int mxLenHargaProduk=13;
                int mxLenStokProduk=12;
                int mxLenJenis=5;
                int mxLenBahan=5;
                int mxLenWarna=5;
                int mxLenUntuk=5;
                int mxLenSize=4;
                int mxLenMerk=4;

                for (Baju baju : listBaju) {
                    mxLenID = Math.max(mxLenID, String.valueOf(baju.getID()).length());
                    mxLenNamaProduk = Math.max(mxLenNamaProduk, baju.getNamaProduk().length());
                    mxLenHargaProduk = Math.max(mxLenHargaProduk, String.valueOf(baju.getHargaProduk()).length());
                    mxLenStokProduk = Math.max(mxLenStokProduk, String.valueOf(baju.getStokProduk()).length());
                    mxLenJenis = Math.max(mxLenJenis, baju.getJenis().length());
                    mxLenBahan = Math.max(mxLenBahan, baju.getBahan().length());
                    mxLenWarna = Math.max(mxLenWarna, baju.getWarna().length());
                    mxLenUntuk = Math.max(mxLenUntuk, baju.getUntuk().length());
                    mxLenSize = Math.max(mxLenSize, String.valueOf(baju.getSize()).length());
                    mxLenMerk = Math.max(mxLenMerk, baju.getMerk().length());
                }

                System.out.println("-".repeat(mxLenID + mxLenNamaProduk + mxLenHargaProduk + mxLenStokProduk + mxLenJenis + mxLenBahan + mxLenWarna + mxLenUntuk + mxLenSize + mxLenMerk + 9 * 3 + 4));

                System.out.printf("| %-" + mxLenID + "s | %-" + mxLenNamaProduk + "s | %-" + mxLenHargaProduk + "s | %-" + mxLenStokProduk + "s | %-" + mxLenJenis + "s | %-" + mxLenBahan + "s | %-" + mxLenWarna + "s | %-" + mxLenUntuk + "s | %-" + mxLenSize + "s | %-" + mxLenMerk + "s |%n", "ID", "Nama Produk", "Harga Produk", "Stok Produk", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk");

                // print - sepanjang total length
                System.out.println("-".repeat(mxLenID + mxLenNamaProduk + mxLenHargaProduk + mxLenStokProduk + mxLenJenis + mxLenBahan + mxLenWarna + mxLenUntuk + mxLenSize + mxLenMerk + 9 * 3 + 4));
                
                // print isi data dalam tabel
                for (Baju baju : listBaju){
                        System.out.printf("| %-" + mxLenID + "d | %-" + mxLenNamaProduk + "s | %-" + mxLenHargaProduk + "d | %-" + mxLenStokProduk + "d | %-" + mxLenJenis + "s | %-" + mxLenBahan + "s | %-" + mxLenWarna + "s | %-" + mxLenUntuk + "s | %-" + mxLenSize + "d | %-" + mxLenMerk + "s |%n",
            baju.getID(), baju.getNamaProduk(), baju.getHargaProduk(), baju.getStokProduk(), baju.getJenis(), baju.getBahan(), baju.getWarna(), baju.getUntuk(), baju.getSize(), baju.getMerk());
                }
                
                System.out.println("-".repeat(mxLenID + mxLenNamaProduk + mxLenHargaProduk + mxLenStokProduk + mxLenJenis + mxLenBahan + mxLenWarna + mxLenUntuk + mxLenSize + mxLenMerk + 9 * 3 + 4));

            } else if (choice == 2) {
                System.out.print("Masukkan Nama Produk: ");
                String nama = scanner.next();
                System.out.print("Masukkan Harga: ");
                int harga = scanner.nextInt();
                System.out.print("Masukkan Stok: ");
                int stok = scanner.nextInt();
                System.out.print("Masukkan Jenis: ");
                String jenis = scanner.next();
                System.out.print("Masukkan Bahan: ");
                String bahan = scanner.next();
                System.out.print("Masukkan Warna: ");
                String warna = scanner.next();
                System.out.print("Masukkan Untuk: ");
                String untuk = scanner.next();
                System.out.print("Masukkan Size: ");
                int size = scanner.nextInt();
                System.out.print("Masukkan Merk: ");
                String merk = scanner.next();
                
                listBaju.add(new Baju(id++, nama, harga, stok, jenis, bahan, warna, untuk, size, merk));
            }
        }
        
        System.out.println("byeBye");
        scanner.close();
    }
}
