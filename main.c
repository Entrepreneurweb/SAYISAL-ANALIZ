#include <stdio.h>
#include <math.h>

// Fonksiyon tanımı (örnek olarak f(x) = x^2 kullanıyoruz)
double fonksiyon(double x) {
    return x * x;
}

// Sayısal türev hesaplama fonksiyonları
double fark_ileri(double x, double h) {
    return (fonksiyon(x + h) - fonksiyon(x)) / h;
}

double fark_geri(double x, double h) {
    return (fonksiyon(x) - fonksiyon(x - h)) / h;
}

double fark_merkez(double x, double h) {
    return (fonksiyon(x + h) - fonksiyon(x - h)) / (2 * h);
}

int main() {
    double x, h;

    // Kullanıcıdan x ve h değerlerini al
    printf("Türev almak istediğiniz x değerini girin: ");
    scanf("%lf", &x);

    printf("Adım boyutunu (h) girin: ");
    scanf("%lf", &h);

    // Sayısal türev sonuçları
    double turev_ileri = fark_ileri(x, h);
    double turev_geri = fark_geri(x, h);
    double turev_merkez = fark_merkez(x, h);

    // Sonuçları yazdır
    printf("\nSayısal türev sonuçları:\n");
    printf("Fark İleri Yöntemi: %.5f\n", turev_ileri);
    printf("Fark Geri Yöntemi: %.5f\n", turev_geri);
    printf("Fark Merkez Yöntemi: %.5f\n", turev_merkez);

    return 0;
}
