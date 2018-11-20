#include "Bitkey.hpp"
#include "BitkeyUtil.hpp"
#include "cstring"


// Holeに対して発行された検証用の公開鍵
const char * pubkeyStr = "3059301306072a8648ce3d020106082a8648ce3d03010703420004d759a8fc47019adaa7f1d847d42d1cf86995b02149ca76dbf66c02c22473701ebc3dbf32d9b92f2c99037d1aa9c02d1d04a11f4a76625a7d6f1c07d125c9633e";
// BKPで発行されたデジタルキーの情報
const char * key = "e85a2e24dc2c0c1963b72e6f8a6d6e4a56b16f5b64deeb52aa9f871b225a6401411ae1a15cdf2f5c7f173a479e619cc69a02913531dec3642aca08aa7d08436175b5cdec77c92515388391be14d973c78bc69d0597c2a8d5cd279aa6cd5d2705b60165827a6c6ad57b83bbd62077fca6b64c168db2e141c5b3d9e2e01236696ac3e4b20d57ad1e97aedeb1209f3bdad96071523dab34bd152db61b05cacd20ad530c02187dfba717baf66d3e3f0bc069e5979f8fe05c1b90a2b21c143e64dc9affc0184c0c030028115e5ed23d1eea1adea3fe9680c0eadea6b5f863b1a6e3e60736307c713f188ceb93b841951ceba21f19f468705ffbec9f441b8fe7fcda15dc8494848a4a568cb53919";
// BKPで発行されたデジタル署名(ecdsaの場合, R, Sという二つの要素で構成)
const char * sigR = "de23f6be48d35175abb5a5f10c5120d6708b55d5679ef11504153c807069b2bf";
const char * sigS = "21a2bfaa4d7f9072a22d4aa0385fa10929c3acf6841b58275f0e74efaaa9f0d2";

const char * Bitkey::hex2bin(const char *hex, char *bin, size_t binsize) {
    // if (hex && bin) {
    //     for (; binsize && isxdigit(hex[0]) && isxdigit(hex[1]); hex += 2, bin += 1, binsize -= 1) {
    //         int r = sscanf(hex, "%2hhx", bin);
    //         if (r != 1) {
    //             break;
    //         }
    //     }
    // }
    return hex;
}

Bitkey::Bitkey (
    BitkeyUtil _bitkeyUtil) {
        bitkeyUtil = _bitkeyUtil;
}

int Bitkey::verifyKey(unsigned char *hole, unsigned char *key){
    // int keyLen = strlen(pubkeyStr) / 2;
    // char * pubkeyBytes[keyLen];
    // hex2bin(pubkeyStr, pubkeyBytes, keyLen);
    // printf("key: %s\n", pubkeyBytes);

    // mbedtls_x509_crl * crl;
    // mbedtls_x509_crl_init(crl);
    // int x509_res = mbedtls_x509_crl_parse_der(crl, pubkeyStr, sizeof(pubkeyStr));
    // printf("crl: %s\n", crl->entry);


    return 4;
}




