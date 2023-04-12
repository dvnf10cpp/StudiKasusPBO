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
2. Nama variabel, dalam parameter maupun blok kode harus jelas dan mendeskripsikan apa itu. 
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
    Pelanggan[] dataPelanggan = new Pelanggan[100]; //static array
    ArrayList<Pelanggan> dataPelanggan = new ArrayList<>(); //dynamic array

    void addData(Pelanggan pelanggan){}

    void deleteData(Pelanggan pelanggan){}
}
```

## Git Tutorial

Lakukan langkah berikut jika kodenya ingin direview. Batas review hari jumat jam 12.

### Upload kode ke github

#### Melalui web github
1. Pergi ke github dan jangan lupa untuk membuat akun github
2. Pergi ke repository kalian dan klik button hijau new.
3. Berikan nama reponya, set ke public dan click create repository
4. Pilih link upload an existing file
5. Upload kode java kalian ke bagian drag file
6. Jika semua kode sudah diupload, click commit changes

#### Melalui git
1. Lakukan download file git lewat website berikut : https://git-scm.com/downloads
2. Setelah didownload, jalankan file yang sudah didownload
3. Pilih next aja terus hingga instalasi selesai
4. Buka vscode kalian dan tekan ctrl+shift+p
5. Ketikkan ``Terminal: Select Default Profil``
6. Pilih bash sebagai terminal default kalian
7. Restart vscode dan buka terminal kalian melalui ctrl+backtick
8. Pergi ke web github dan create new repo, isi nama dan set ke public
9. Jalankan command berikut di terminal bash kalian : 
```
git config --global user.name "NamaKamu"
git config --global user.email "Email yang kamu tautkan ke github"
//Langkah kedua diatas hanya lakukan sekali, berikutnya tidak perlu
git init
git branch -M main
git add .
git commit -m "first commit"
git remote add origin "yang ada pada quick setup setelah membuat nama repo tanpa tanda kutip"
git push -u origin main
```

### Upload kode yang kalian ubah
Setiap melakukan perubahan dan ingin melakukan update ke github, <br>
Kalian bisa melakukannya dengan 2 cara.

#### Melalui Website
1. Pergi ke file java yang ingin kalian ubah dari local pc kalian ke github
2. Jangan lupa untuk melakukan copy paste isi kode file java yang kalian ubah
3. Pilih edit this file dengan icon pensil
4. Pencet ctrl+a dan paste kode dari vscode kalian
5. Setelah selesai, pencet commit changes

#### Melalui git
1. Jalankan command berikut di bash vscode kalian
```
git add . //jika ingin mengupdate semua perubahan yang ada di folder lokal kalian
git add Manusia.java //jika hanya ingin mengupdate file yang ingin kalian ubah
git commit -m "update apaaa"
git push origin main
```

### SEMANGATTTT KLO ADA YG KURANG PAHAM LANGSUNG TANYAIN AJA

