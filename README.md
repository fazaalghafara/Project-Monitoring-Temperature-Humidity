# Project Monitoring Temperature & Humidity (ESP32 - Learning Phase)

## 📌 Deskripsi Singkat
Project ini adalah langkah pertama saya dalam mempelajari *Internet of Things (IoT). Tujuan utama dari sistem ini adalah sebagai riset awal (proof-of-concept) sebelum saya mengembangkan sistem monitoring suhu pada mesin yang memiliki titik panas untuk kompetisi **Inovillage*.

Pada project final nantinya, saya akan menggunakan sensor *MLX90614* (Contactless Infrared) untuk membaca titik panas mesin. Namun, sebagai tahap belajar dasar, saya memulai dengan menggunakan sensor *DHT11* untuk memahami cara kerja transmisi data, pembacaan sensor, dan penampilannya pada LCD.

## 🛠️ Komponen yang Digunakan
1. *ESP32* (Microcontroller)
2. *Sensor DHT11* (Suhu & Kelembapan)
3. *LCD 16x2 dengan I2C Module*
4. *Kabel Jumper*

## 🚀 Alur Kerja Sistem
Sistem membaca suhu dan kelembapan dari sensor DHT11, kemudian data diproses oleh ESP32 untuk ditampilkan secara real-time pada layar LCD 16x2. Ini membantu saya memahami bagaimana menangani latency data dan kestabilan pembacaan sensor sebelum beralih ke sensor industri yang lebih kompleks.

## 📈 Rencana Pengembangan (Roadmap)
- [x] Implementasi pembacaan DHT11 dasar.
- [x] Integrasi LCD 16x2.
- [ ] Implementasi sensor MLX90614 (Infrared Temperature).


## 📝 Catatan Belajar
Project ini sangat penting bagi saya karena di project Inovillage nanti, akurasi data suhu pada mesin sangat krusial untuk mengetahui titik panas yang diinginkan dan overheating.
