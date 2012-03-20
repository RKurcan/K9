#ifndef BANKA_ENUM_H
#define BANKA_ENUM_H

#define BANKA_MAKROLARI_SATIR_SAYISI 54

enum HESABA_ETKISI_ENUM {
    ENUM_BNK_BORC_ARTTIR       = 10,
    ENUM_BNK_ALACAK_ARTTIR     = 20
};

enum BANKA_HESAP_TURLERI_ENUM {
    ENUM_BNK_BANKA_HESABI           = 10,
    ENUM_BNK_CARI_HESAP             = 20,
    ENUM_BNK_MUHASEBE_HESABI        = 30,
    ENUM_BNK_POS_HESABI             = 40,
    ENUM_BNK_KREDI_KARTI_HESABI     = 50,
    ENUM_BNK_KASA_HESABI            = 60,
    ENUM_BNK_POS_KOMISYON_HESABI    = 70
};

enum BANKA_MODULU_FIS_TURLERI {
    ENUM_BANKA_ACILIS_FISI        = 801,
    ENUM_BANKA_MAKRO_FISI         = 802,
    ENUM_BANKA_HAREKET_FISI       = 901,
    ENUM_BANKA_PARA_YAT_CEKME_FISI= 902,
    ENUM_BANKA_VIRMAN_FISI        = 903
};


enum BANKA_ROUND_SEKLI {
    ENUM_ROUND          = 0,
    ENUM_ROUND_UP       = 1,
    ENUM_ROUND_DOWN     = 2
};

enum BANKA_FIS_TURU {
    ENUM_BANKA_FISI     = 10,
    ENUM_BANKA_ENT_FISI = 20
};

#endif // BANKA_ENUM_H
