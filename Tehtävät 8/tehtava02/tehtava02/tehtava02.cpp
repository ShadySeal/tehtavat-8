#include <iostream>
#include <string>
#include <vector>

class MaastoRuutu {
public:
    std::string maastoTyyppi;
    int liikkumisVaikeusKerroin;
    int taisteluVaikeusKerroin;

    class Objekti {
    public:
        std::string nimi;
        int vaikutusKuntoPisteisiin;
        int vaikutusRahaan;
    };

    std::vector<Objekti> objektit;

    class Vihollinen {
    public:
        std::string tyyppi;
        int hyokkaysVoima;
        int puolustusVoima;
        int kuntoPisteet;
    };

    std::vector<Vihollinen> viholliset;
};

class PelaajaHahmo {
public:
    std::string nimi;
    int peliTaso;
    int kuntoPisteet;
    int maksimiKuntoPisteet;
    int varallisuus;

    class TaisteluVaruste {
    public:
        std::string nimi;
        int hyokkaysVoima;
        int puolustusVoima;
    };

    std::vector<TaisteluVaruste> taisteluVarusteet;

    class MuuObjekti {
    public:
        std::string nimi;
        int vaikutusKuntoPisteisiin;
        int vaikutusRahaan;
    };

    std::vector<MuuObjekti> muutObjektit;
};

int main() {
    MaastoRuutu ruutu;
    ruutu.maastoTyyppi = "metsä";
    ruutu.liikkumisVaikeusKerroin = 3;
    ruutu.taisteluVaikeusKerroin = 5;

    MaastoRuutu::Objekti objekti;
    objekti.nimi = "kultaharkko";
    objekti.vaikutusKuntoPisteisiin = 0;
    objekti.vaikutusRahaan = 40;
    ruutu.objektit.push_back(objekti);

    MaastoRuutu::Vihollinen vihollinen;
    vihollinen.tyyppi = "örkki";
    vihollinen.hyokkaysVoima = 50;
    vihollinen.puolustusVoima = 30;
    vihollinen.kuntoPisteet = 75;
    ruutu.viholliset.push_back(vihollinen);

    PelaajaHahmo pelaaja;
    pelaaja.nimi = "Pelaaja1";
    pelaaja.peliTaso = 1;
    pelaaja.kuntoPisteet = 100;
    pelaaja.maksimiKuntoPisteet = 150;
    pelaaja.varallisuus = 50;

    PelaajaHahmo::TaisteluVaruste taisteluVaruste;
    taisteluVaruste.nimi = "kirves";
    taisteluVaruste.hyokkaysVoima = 10;
    taisteluVaruste.puolustusVoima = 2;
    pelaaja.taisteluVarusteet.push_back(taisteluVaruste);

    PelaajaHahmo::MuuObjekti muuObjekti;
    muuObjekti.nimi = "sammakonreisirohto";
    muuObjekti.vaikutusKuntoPisteisiin = 15;
    muuObjekti.vaikutusRahaan = 0;
    pelaaja.muutObjektit.push_back(muuObjekti);

    return 0;
}
