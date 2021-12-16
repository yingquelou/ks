// 
"use strict"
function n_Determinant(a, Order) {
    var i = 0, j = 0, l = 0, k = 0, Product = 1;
    for (; j < Order - 1; ++j) {
        if (a[j][j]) {
            for (i = j + 1; i < Order; ++i) {
                k = -a[i][j] / a[j][j];
                if (k) {
                    a[i][j] = 0;
                    for (l = j + 1; l < Order; ++l) {
                        a[i][l] += k * a[j][l];
                    }
                }
            }
        }
    }
    for (l = 0; l < Order; ++l) {
        Product *= a[l][l];
    }
    return Product;
}
// var a = [];
var n = 3;
var a = [];
for (var i = 0; i < n; ++i) {
    var b = [];
    for (var j = 0; j < n; ++j) {
        b[j] = Math.floor(Math.random() * 10) + 1;
        // console.log(b[j]);
    }
    a[i] = b;
}
// for (var i = 0; i < n; ++i) { console.log(a[i]); }
console.log(n_Determinant(a, 3));
