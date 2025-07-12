🚨 Deteksi Jarak dengan Arduino, Sensor HC-SR04, dan LED
Proyek ini merupakan sistem sederhana untuk mendeteksi jarak objek menggunakan sensor ultrasonik HC-SR04 dan indikator LED, dikendalikan oleh Arduino Uno. LED akan menyala ketika objek terdeteksi berada dalam jarak tertentu.

🔧 Komponen yang Digunakan:
Arduino Uno

Sensor Ultrasonik HC-SR04

LED Merah

Resistor 220Ω

Breadboard dan Kabel Jumper

⚙️ Cara Kerja:
Sensor HC-SR04 mengirimkan gelombang ultrasonik melalui pin Trig.

Ketika gelombang memantul dari objek, pin Echo menerima sinyal balik.

Arduino menghitung waktu tempuh sinyal untuk menentukan jarak objek.

Jika objek berada lebih dekat dari batas jarak yang ditentukan (misalnya 10 cm), maka LED akan menyala.

Jika tidak, LED tetap mati.

🧠 Konsep yang Dipelajari:
Input/Output digital dengan Arduino

Pengukuran jarak menggunakan sensor ultrasonik

Penggunaan logika kondisi (if)

Rangkaian dasar dengan LED dan resistor

💡 Aplikasi Sederhana:
Deteksi keberadaan objek

Sensor parkir mini

Sistem peringatan jarak dekat
