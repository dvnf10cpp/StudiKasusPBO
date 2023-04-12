# PBO Studi Kasus

## Study Case

Untuk studi kasus, bisa dilihat pada file perpustkaan, trainreservation dan cinemareservation <br>
Setiap studi kasus setidaknya menerapkan konsep enkapsulasi dan inheritance <br>
Untuk implementasi lebih detailnya, bisa dilihat pada file masing-masing

## Code Convention

Panduan kode supaya kode memiliki struktur yang rapih dan struktur directory / folder yang rapih

### Gaya Kode
1. Tanda curly braces `{}` harus selalu baris baru supaya lebih rapi.
Contoh : 
```
public class Student
{
    public void intro()
    {
        for(int i = 0; i < 10; i++)
        {

        }
        if(true)
        {

        }
    }
}
```
2. nama variabel, dalam parameter maupun blok kode harus jelas dan mendeskripsikan apa itu. 
Contoh : 
```
Weapon w = new Weapon(); //Salah!
Weapon wpn = new Weapon(); //Salah!
Weapon senjata = new Weapon(); //Benar!
Weapon weapon = new Weapon(); //Benar!
```
3. Jika suatu nama variabel atau method/behavior ada 2 kata, gunakan huruf kapital pada kata ke 2. 
Contoh : 
```
public void ngerjainTugas(); //Benar!
public void ngerjaintugas(); //Salah!
```
4. Begitu juga dengan nama class. Setiap kata diawali dengan huruf kapital.
Contoh : 
```
class BangunDatar{} //Benar!
class bangunDatar{} //Salah!
class Bangundatar{} //Salah!
class bangundatar{} //Salah!
```
5. Terapkan Konsep Single Responsbility Principle pada setiap class dan method
Contoh : 
```
class App
{
    //Class ini seharusnya cukup mengatur bagaimana aplikasi berjalan
    //Untuk menampung data array, bikin class lain

    void appLogin(){} //begitu juga dengan method, satu method memiliki 1 tugas, bukan 2 tugas

    void appRegister(){}
}

class Data
{
    //Class ini berfungsi cukup untuk menampung data, read and write data
    Pelanggan[] dataPelanggan = new Pelanggan[100];

    void addData(Pelanggan pelanggan){}

    void deleteData(Pelanggan pelanggan){}
}
```

## Git Tutorial

### Upload kode yang kalian ubah
Misal, kalian udah buat atau mengubah kode Hero.java dan kalian ingin menguploadnya kesini supaya bisa aku baca, <br/>
nah langkah-langkahnya tuh gini : 
1. Pergi ke folder github ini yang ada file java yang kalian ubah.
2. Klik file javanya jika sudah ketemu
3. Cari icon pensil di sekitar bagian kanan layar kalian, pilih edit this file
4. Copas kodenya dari vscode ke github
5. Kebawah, terus pada commit change, buat judul singkat tentang apa yang kalian ubah. 
6. Buat deskripsi singkat apa yang kalian ubah supaya progressnya bisa aku track
Contoh : 
<br/>

Awalnya pasti muncul gini :  

```
Commit Changes
Create Hero.java
Add an optinal description...
```

Ganti jadi gini :
```
Commit Changes
Tambahin behavior hero
pada baris kode 27, aku tambahin behavior giniginigini
```

### SEMANGATTTT KLO ADA YG KURANG PAHAM LANGSUNG TANYAIN AJA

