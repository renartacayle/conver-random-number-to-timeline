

---

## README (English)

### Seconds to Days–Hours–Minutes–Seconds Converter – C++ Console Program

This simple console program converts a total number of seconds into a breakdown of **days, hours, minutes, and seconds**.

### How It Works

* Input: total seconds (integer).
* The program divides the total seconds into:

  * **Days** – every 86 400 seconds
  * **Hours** – every 3 600 seconds
  * **Minutes** – every 60 seconds
  * **Seconds** – remainder after minutes

### Example

```
Input: 200000
Output: 2hari 7jam 33menit 20detik
```

### Requirements

* C++ compiler (g++, clang++, MSVC, etc.)
* Any OS with a working C++ toolchain

### Compile & Run

```bash
g++ -o time_converter main.cpp
./time_converter
```

---

## README (Bahasa Indonesia)

### Konversi Detik ke Hari–Jam–Menit–Detik – Program Konsol C++

Program konsol sederhana ini mengubah total jumlah detik menjadi **hari, jam, menit, dan detik**.

### Cara Kerja

* Input: total detik (bilangan bulat).
* Program akan menghitung:

  * **Hari** – setiap 86 400 detik
  * **Jam** – setiap 3 600 detik
  * **Menit** – setiap 60 detik
  * **Detik** – sisa setelah menit

### Contoh

```
Input: 200000
Output: 2hari 7jam 33menit 20detik
```

### Kebutuhan

* Kompiler C++ (g++, clang++, MSVC, dll.)
* Sistem operasi apa pun yang mendukung toolchain C++

### Kompilasi & Jalankan

```bash
g++ -o konversi_waktu main.cpp
./konversi_waktu
```

---

Place this file as `README.md` in your GitHub repository.
