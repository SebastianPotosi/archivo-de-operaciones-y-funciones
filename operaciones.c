#include <stdio.h>
#include <string.h>

// Función para calcular el precio por kilómetro según el tipo de ruta
float calcularPrecioRuta(char tipoRuta) {
    switch (tipoRuta) {
        case 'U':
            return 0.10;
        case 'I':
            return 0.15;
        case 'N':
            return 0.20;
        default:
            return 0.0;
    }
}

// Función para calcular el descuento según el rango de distancia
float calcularDescuento(float costoTotal) {
    if (costoTotal < 50.0) {
        return 0.0;
    } else if (costoTotal >= 50.0 && costoTotal < 100.0) {
        return costoTotal * 0.05;
    } else if (costoTotal >= 100.0 && costoTotal < 500.0) {
        return costoTotal * 0.1;
    } else {
        return costoTotal * 0.2;
    }
}