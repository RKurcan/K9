#ifndef K9_DEFAULT_BELGE_DEGISKENLERI_H 
#define K9_DEFAULT_BELGE_DEGISKENLERI_H 

#include "belge_struct.h"             
BELGELER_STRUCT belgeler[] = {
	{ "6","3","0","0","0","1","0","20","0",18,"210","150","0","ADAK ÖDMK LAZER BOŞ A4","" },
	{ "6","3","0","0","0","1","0","20","0",9,"210","150","1","ADAK ÖDMK LAZER MATBUU A4","" },
	{ "3","3","0","0","0","1","0","20","0",22,"210","150","0","ADAK THSMK LAZER BOŞ A4","" },
	{ "9","5","0","0","0","1","0","20","0",45,"210","270","5","ADAK İRSALİYE LAZER MATBUU A4","" },
	{ "9","5","0","0","0","1","0","20","0",49,"210","270","5","ADAK İRSALİYE LAZER BOŞ A4","" },
	{ "5","5","0","0","0","1","0","20","0",46,"210","295","4","ADAK FATURA LAZER BOŞ A4","" },
	{ "5","5","0","0","0","1","0","20","0",19,"210","295","4","ADAK FATURA LAZER MATBUU A4","" },
	{ "3","3","0","0","0","1","0","20","0",10,"210","150","0","ADAK THSMK LAZER MATBUU A4","" },
	{ "13","1","0","0","0","1","0","20","0",25,"210","270","0","ADAK SERBEST MESLEK MAKBUZU","" },
{ "","","","","","","","","",-1,"","","","","" }
};

BELGE_DEGISKENLERI_STRUCT belgeler_degiskenleri[] = {
	{ "154","11","10","1",10,"0","0","11","44","Unvan ve Adres",0, 0, 60, "", 0, 0, 0, 0 },
	{ "155","11","10","1",10,"0","0","165","35","Ödeme Tarihi",0, 0, 10, "", 0, 0, 0, 0 },
	{ "156","11","10","1",10,"0","0","165","30","Ödeme Seri-Sıra",0, 0, 10, "", 0, 0, 0, 0 },
	{ "160","12","10","0",30,"0","0","180","80","Para Birimi",0, 0, 5, "", 0, 0, 0, 0 },
	{ "161","11","10","1",30,"0","0","34.95","126.26","Toplam Tutar ( Yazı İle )",0, 0, 60, "", 0, 0, 0, 0 },
	{ "162","11","10","1",30,"0","0","174","119","Toplam Tutar ( Rakam İle )",0, 0, 12, "", 0, 0, 0, 0 },
	{ "157","11","10","1",20,"0","0","12","80","Ödeme Şekli",0, 0, 20, "", 0, 0, 0, 0 },
	{ "158","11","10","1",20,"0","0","63.5","80","Açıklama",0, 0, 40, "", 0, 0, 0, 0 },
	{ "159","11","10","1",20,"0","0","167","80","Tutar",0, 0, 15, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","132","30","SERİ SIRA NO :",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","132","35","ÖDEME TARİHİ :",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","11.6","70","ÖDEME ŞEKLİ",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","64.03","70","AÇIKLAMA",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","166.67","70","TUTAR",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","0",40,"0","0","15","0","PARA BİRİMİ",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","16.6","126.27","YALNIZ :",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","16.34","132.86","ÖDEMEYİ YAPAN /",0, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","14","10","1",40,"0","0","129.37","17.4","TEDİYE MAKBUZU",0, 0, 0, "", 0, 0, 0, 0 },
	{ "154","13","10","1",10,"0","0","15","45","Unvan ve Adres",1, 0, 60, "", 0, 0, 0, 0 },
	{ "156","13","10","1",10,"0","0","165","50","Ödeme Seri-Sıra",1, 0, 10, "", 0, 0, 0, 0 },
	{ "160","8","10","0",30,"0","0","195","79","Para Birimi",1, 0, 5, "", 0, 0, 0, 0 },
	{ "161","13","10","1",30,"0","0","40","126","Toplam Tutar ( Yazı İle )",1, 0, 60, "", 0, 0, 0, 0 },
	{ "162","13","10","1",30,"0","0","175","120","Toplam Tutar ( Rakam İle )",1, 0, 12, "", 0, 0, 0, 0 },
	{ "163","13","10","1",30,"0","0","40","133","Ödemeyi Yapan Kişi",1, 0, 60, "", 0, 0, 0, 0 },
	{ "157","13","10","1",20,"0","0","25","79","Ödeme Şekli",1, 0, 20, "", 0, 0, 0, 0 },
	{ "158","13","10","1",20,"0","0","45","79","Açıklama",1, 0, 512, "", 0, 0, 0, 0 },
	{ "159","13","10","1",20,"0","0","175","79","Tutar",1, 0, 15, "", 0, 0, 0, 0 },
	{ "73","11","10","1",10,"0","0","160.99","37.96","Seri - Sıra No",2, 0, 15, "", 0, 0, 0, 0 },
	{ "78","11","10","1",30,"0","0","36.69","122.85","Toplam (Yazı ile)",2, 0, 12, "", 0, 0, 0, 0 },
	{ "79","11","10","1",30,"0","0","160.89","122.16","Toplam (Rakam ile)",2, 0, 15, "", 0, 0, 0, 0 },
	{ "80","11","10","1",30,"0","0","54.93","129.93","Tahsil Eden Kişi",2, 0, 60, "", 0, 0, 0, 0 },
	{ "74","11","10","1",20,"0","0","11.14","76.79","Ödeme Şekli",2, 0, 10, "", 0, 0, 0, 0 },
	{ "75","11","10","1",20,"0","0","47.98","76.79","Açıklama",2, 0, 40, "", 0, 0, 0, 0 },
	{ "76","11","10","1",20,"0","0","148","76.79","Tutar",2, 0, 15, "", 0, 0, 0, 0 },
	{ "77","11","10","1",20,"0","0","174.65","76.79","Para Birimi",2, 0, 12, "", 0, 0, 0, 0 },
	{ "71","11","10","1",10,"0","0","19","38","Ünvan",2, 0, 15, "", 0, 0, 0, 0 },
	{ "72","11","10","1",10,"0","0","160.73","45","Tarih",2, 0, 10, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",50,"65","120","10.39","1.53",":/yonetim_icons/adak_logo.png",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","18","10","1",40,"0","0","132.63","13.05","TAHSİLAT MAKBUZU",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","20","1",40,"0","0","124","37.96","SERİ SIRA NO:",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","20","1",40,"0","0","120","45","TAHSİLAT TARİHİ:",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","10.8","70","ÖDEME ŞEKLİ",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","47.36","70","AÇIKLAMA",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","147.03","70","TUTAR",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","173.9","70","PARA BİRİMİ",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","20","1",40,"0","0","484.9","308.45","TAHSİLAT TARİHİ:",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","15.3","123.11","YALNIZ / ",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","11","10","1",40,"0","0","14.77","129.93","TAHSİL EDEN KİŞİ / ",2, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","134.12","132.75","KAŞE İMZA",2, 0, 0, "", 0, 0, 0, 0 },
	{ "185","10","10","1",10,"0","0","175","65","Düzenlenme Tarihi",3, 0, 10, "", 0, 0, 0, 0 },
	{ "186","10","10","1",10,"0","0","175","70","Düzenlenme Saati",3, 0, 5, "", 0, 0, 0, 0 },
	{ "217","10","10","1",10,"0","0","175","60","İrsaliye Tarihi",3, 0, 10, "", 0, 0, 0, 0 },
	{ "237","10","10","1",10,"0","0","175","75","Fatura Tarihi",3, 0, 10, "", 0, 0, 0, 0 },
	{ "238","10","10","1",10,"0","0","175","80","Fatura No",3, 0, 10, "", 0, 0, 0, 0 },
	{ "239","10","10","1",10,"0","0","175","85","Fiili Sevk Tarihi",3, 0, 10, "", 0, 0, 0, 0 },
	{ "196","13","10","0",30,"0","0","154.4","42.67","Brüt Tutar",3, 0, 12, "", 0, 0, 0, 0 },
	{ "197","13","10","0",30,"0","0","150.45","37.93","İskonto Tutarı",3, 0, 12, "", 0, 0, 0, 0 },
	{ "198","13","10","0",30,"0","0","125.16","30.82","Ara Toplam",3, 0, 12, "", 0, 0, 0, 0 },
	{ "199","13","10","0",30,"0","0","150.45","189.66","Toplam ( Rakam ile )",3, 0, 12, "", 0, 0, 0, 0 },
	{ "200","13","10","0",30,"0","0","10.54","224.96","Toplam ( Yazı İle )",3, 0, 60, "", 0, 0, 0, 0 },
	{ "203","13","10","0",30,"0","0","88.53","155.15","Son Cari Bakiye",3, 0, 15, "", 0, 0, 0, 0 },
	{ "204","13","10","0",30,"0","0","90.9","25.29","KDV Oranı 1",3, 0, 12, "", 0, 0, 0, 0 },
	{ "205","13","10","0",30,"0","0","114.88","38.2","KDV Oranı 2",3, 0, 12, "", 0, 0, 0, 0 },
	{ "206","13","10","0",30,"0","0","169.69","50.05","KDV Oranı 3",3, 0, 12, "", 0, 0, 0, 0 },
	{ "207","13","10","0",30,"0","0","152.03","75.34","KDV Oranı 4",3, 0, 12, "", 0, 0, 0, 0 },
	{ "208","13","10","0",30,"0","0","135.96","86.66","KDV Oranı 5",3, 0, 12, "", 0, 0, 0, 0 },
	{ "209","13","10","0",30,"0","0","119.62","82.98","ÖTV",3, 0, 12, "", 0, 0, 0, 0 },
	{ "211","13","10","1",30,"0","0","32.36","236","Teslim Alan",3, 0, 60, "", 0, 0, 0, 0 },
	{ "212","13","10","1",30,"0","0","128.06","236","Teslim Eden",3, 0, 60, "", 0, 0, 0, 0 },
	{ "213","13","10","1",30,"0","0","15","215.16","Dip Not",3, 0, 50, "", 0, 0, 0, 0 },
	{ "188","10","10","1",20,"0","0","15.02","127","Ürün Kodu",3, 0, 30, "", 0, 0, 0, 0 },
	{ "189","10","10","1",20,"0","0","46.9","127","Ürün Cinsi ve Açıklaması",3, 0, 50, "", 0, 0, 0, 0 },
	{ "190","10","10","1",20,"0","0","121.47","127","Birim",3, 0, 20, "", 0, 0, 0, 0 },
	{ "191","10","10","1",20,"0","0","93.27","127","Miktar",3, 0, 3, "", 0, 0, 0, 0 },
	{ "192","10","10","1",20,"0","0","148.61","127","Fiyat",3, 0, 10, "", 0, 0, 0, 0 },
	{ "193","13","10","0",20,"0","0","122.26","127","KDV Oranı",3, 0, 5, "", 0, 0, 0, 0 },
	{ "194","13","10","0",20,"0","0","0","127","İskonto",3, 0, 12, "", 0, 0, 0, 0 },
	{ "195","10","10","1",20,"0","0","175.22","127","Satış Tutarı",3, 0, 12, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",50,"90","125","6.85","4.74",":/yonetim_icons/adak_logo.png",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","54.53","İRSALİYE SERİ NO :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","59.53","İRSALİYE TARİHİ :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139.3","65.06","DÜZENLENME TARİHİ :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","70.6","DÜZENLENME SAATİ :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","138.94","75","FATURA TARİHİ :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","80.6","FATURA NO :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","85","FİİLİ SEVK TARİHİ :",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","14.23","120","ÜRÜN KODU",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","94.86","119.85","MİKTAR",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","123.58","120","BİRİM",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","148.87","120","FİYAT",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","175.48","120","SATIŞ TUTARI",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","44.79","120","ÜRÜN CİNSİ ve AÇIKLAMA",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","31.31","228.87","TESLİM EDEN",3, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","128.04","227.81","TESLİM ALAN",3, 0, 0, "", 0, 0, 0, 0 },
	{ "181","13","10","1",10,"0","0","15","104.41","Sevk Adresi",4, 0, 512, "", 0, 0, 0, 0 },
	{ "182","13","10","1",10,"0","0","15","95.36","Vergi Dairesi",4, 0, 50, "", 0, 0, 0, 0 },
	{ "183","13","10","1",10,"0","0","75.98","95","Vergi No",4, 0, 15, "", 0, 0, 0, 0 },
	{ "184","10","10","1",10,"0","0","175","55","Seri Sıra No",4, 0, 15, "", 0, 0, 0, 0 },
	{ "185","10","10","1",10,"0","0","175","65","Düzenlenme Tarihi",4, 0, 10, "", 0, 0, 0, 0 },
	{ "186","10","10","1",10,"0","0","175","70","Düzenlenme Saati",4, 0, 5, "", 0, 0, 0, 0 },
	{ "217","10","10","1",10,"0","0","175","60","İrsaliye Tarihi",4, 0, 10, "", 0, 0, 0, 0 },
	{ "237","10","10","1",10,"0","0","175","75","Fatura Tarihi",4, 0, 10, "", 0, 0, 0, 0 },
	{ "238","10","10","1",10,"0","0","175","80","Fatura No",4, 0, 10, "", 0, 0, 0, 0 },
	{ "239","10","10","1",10,"0","0","175","85","Fiili Sevk Tarihi",4, 0, 10, "", 0, 0, 0, 0 },
	{ "196","13","10","0",30,"0","0","154.4","42.67","Brüt Tutar",4, 0, 12, "", 0, 0, 0, 0 },
	{ "197","13","10","0",30,"0","0","150.45","37.93","İskonto Tutarı",4, 0, 12, "", 0, 0, 0, 0 },
	{ "198","13","10","0",30,"0","0","125.16","30.82","Ara Toplam",4, 0, 12, "", 0, 0, 0, 0 },
	{ "199","13","10","0",30,"0","0","150.45","189.66","Toplam ( Rakam ile )",4, 0, 12, "", 0, 0, 0, 0 },
	{ "200","13","10","0",30,"0","0","10.54","224.96","Toplam ( Yazı İle )",4, 0, 60, "", 0, 0, 0, 0 },
	{ "203","13","10","0",30,"0","0","88.53","155.15","Son Cari Bakiye",4, 0, 15, "", 0, 0, 0, 0 },
	{ "204","13","10","0",30,"0","0","90.9","25.29","KDV Oranı 1",4, 0, 12, "", 0, 0, 0, 0 },
	{ "205","13","10","0",30,"0","0","114.88","38.2","KDV Oranı 2",4, 0, 12, "", 0, 0, 0, 0 },
	{ "206","13","10","0",30,"0","0","169.69","50.05","KDV Oranı 3",4, 0, 12, "", 0, 0, 0, 0 },
	{ "207","13","10","0",30,"0","0","152.03","75.34","KDV Oranı 4",4, 0, 12, "", 0, 0, 0, 0 },
	{ "208","13","10","0",30,"0","0","135.96","86.66","KDV Oranı 5",4, 0, 12, "", 0, 0, 0, 0 },
	{ "209","13","10","0",30,"0","0","119.62","82.98","ÖTV",4, 0, 12, "", 0, 0, 0, 0 },
	{ "211","13","10","1",30,"0","0","30.3","237","Teslim Alan",4, 0, 60, "", 0, 0, 0, 0 },
	{ "212","13","10","1",30,"0","0","128.06","237","Teslim Eden",4, 0, 60, "", 0, 0, 0, 0 },
	{ "213","13","10","1",30,"0","0","10","218.37","Dip Not",4, 0, 50, "", 0, 0, 0, 0 },
	{ "188","10","10","1",20,"0","0","15.02","144","Ürün Kodu",4, 0, 30, "", 0, 0, 0, 0 },
	{ "189","10","10","1",20,"0","0","39.79","144","Ürün Cinsi ve Açıklaması",4, 0, 50, "", 0, 0, 0, 0 },
	{ "190","10","10","1",20,"0","0","114.35","144","Birim",4, 0, 20, "", 0, 0, 0, 0 },
	{ "191","10","10","1",20,"0","0","84.84","144","Miktar",4, 0, 3, "", 0, 0, 0, 0 },
	{ "192","10","10","1",20,"0","0","142.28","144","Fiyat",4, 0, 10, "", 0, 0, 0, 0 },
	{ "193","13","10","0",20,"0","0","122.26","144","KDV Oranı",4, 0, 5, "", 0, 0, 0, 0 },
	{ "194","13","10","0",20,"0","0","0","144","İskonto",4, 0, 12, "", 0, 0, 0, 0 },
	{ "195","10","10","1",20,"0","0","170.21","144","Satış Tutarı",4, 0, 12, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",50,"90","125","6.85","4.74",":/yonetim_icons/adak_logo.png",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","54.53","İRSALİYE SERİ NO :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","59.53","İRSALİYE TARİHİ :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139.3","65.06","DÜZENLENME TARİHİ :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","70.6","DÜZENLENME SAATİ :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","138.94","75","FATURA TARİHİ :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","80.6","FATURA NO :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","139","85","FİİLİ SEVK TARİHİ :",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","14.23","135","ÜRÜN KODU",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","85.37","135","MİKTAR",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","113.3","135","BİRİM",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","142.02","135","FİYAT",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","170.21","135","SATIŞ TUTARI",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","39","135","ÜRÜN CİNSİ ve AÇIKLAMA",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","30.08","229.92","TESLİM ALAN",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","128.22","230","TESLİM EDEN",4, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",50,"50","160","13.42","7",":/yonetim_icons/adak_logo.png",5, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","136","46","FATURA SERİ NO:",5, 0, 15, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","136","55","FATURA TARİHİ:",5, 0, 13, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","136","60","İRSALİYE NO:",5, 0, 11, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","136","65","İRSALİYE TARİHİ:",5, 0, 15, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","136","70","DÜZENLEME TARİHİ:",5, 0, 17, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","136","75","DÜZENLEME SAATİ:",5, 0, 15, "", 1, 0, 0, 0 },
	{ "81","10","10","1",10,"0","0","10","50","Fatura Adresi",5, 0, 50, "", 0, 0, 0, 0 },
	{ "84","11","10","1",10,"0","0","177","46","Seri Sıra Numarası",5, 0, 10, "", 0, 0, 0, 0 },
	{ "85","10","20","1",10,"0","0","177","55","Fatura Tarihi",5, 0, 12, "Sans Serif", 0, 0, 0, 0 },
	{ "86","10","20","1",10,"0","0","177","65","İrsaliye Tarihi",5, 0, 12, "Sans Serif", 0, 0, 0, 0 },
	{ "214","10","20","1",10,"0","0","177","70","Düzenlenme Tarihi",5, 0, 12, "", 0, 0, 0, 0 },
	{ "215","10","20","1",10,"0","0","177","75","Düzenlenme Saati",5, 0, 12, "", 0, 0, 0, 0 },
	{ "82","10","10","1",10,"0","0","10","85","Vergi Dairesi",5, 0, 40, "", 0, 0, 0, 0 },
	{ "83","10","10","1",10,"0","0","97.37","85","Vergi Numarası",5, 0, 13, "", 0, 0, 0, 0 },
	{ "-1","10","30","1",40,"0","0","10","115","ÜRÜN KODU",5, 0, 9, "", 1, 0, 0, 0 },
	{ "-1","10","30","1",40,"0","0","40","115","ÜRÜN CİNSİ VE AÇIKLAMA",5, 0, 22, "", 1, 0, 0, 0 },
	{ "-1","10","30","1",40,"0","0","146","115","BİRİM FİYATI",5, 0, 5, "", 1, 0, 0, 0 },
	{ "-1","10","30","1",40,"0","0","108","115","MİKTAR",5, 0, 6, "", 1, 0, 0, 0 },
	{ "-1","10","30","1",40,"0","0","175","115","SATIŞ TUTARI",5, 0, 12, "", 1, 0, 0, 0 },
	{ "88","10","10","1",20,"0","0","10","122.37","Ürün Kodu",5, 0, 10, "", 0, 0, 0, 0 },
	{ "89","10","10","1",20,"0","0","40","122.37","Ürün Cinsi ve Açıklama",5, 0, 60, "", 0, 0, 0, 0 },
	{ "91","10","20","1",20,"0","0","108","122.37","Ürün miktarı",5, 0, 5, "", 0, 0, 0, 0 },
	{ "90","10","10","1",20,"0","0","125.89","122.37","Ürün birimi",5, 0, 7, "", 0, 0, 0, 0 },
	{ "218","10","20","1",20,"0","0","141","122.37","İskonto sonrası birim fiyat",5, 0, 12, "", 0, 0, 0, 0 },
	{ "221","10","20","1",20,"0","0","173","122.37","Satır tutarı",5, 0, 12, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","140","240","BRÜT TUTAR:",5, 0, 10, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","140","245","İSKONTO TUTARI:",5, 0, 10, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","140","255","ÖTV TUTARI:",5, 0, 10, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","140","260","KDV TUTARI:",5, 0, 10, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","140","265","FATURA TUTARI:",5, 0, 13, "", 1, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","8.53","273","Yalnız;",5, 0, 7, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","8.16","283","Son C/H Bakiyeniz:",5, 0, 18, "", 0, 1, 0, 0 },
	{ "96","10","20","1",30,"0","0","177","240","Brüt Tutar",5, 0, 12, "", 0, 0, 0, 0 },
	{ "99","10","10","1",30,"0","0","20.84","273","Fatura tutarı yazı İle",5, 0, 60, "", 0, 0, 1, 0 },
	{ "102","10","10","1",30,"0","0","42.74","283","Son Cari Hesap Bakiyesi",5, 0, 15, "", 0, 1, 0, 0 },
	{ "231","10","20","1",30,"0","0","177","245","Toplam iskonto tutarı",5, 0, 12, "", 0, 0, 0, 0 },
	{ "232","10","20","1",30,"0","0","177","255","Fatura ÖTV tutarı",5, 0, 12, "", 0, 0, 0, 0 },
	{ "234","10","20","1",30,"0","0","177","260","Fatura KDV tutarı",5, 0, 12, "", 0, 0, 0, 0 },
	{ "100","10","20","1",30,"0","0","177","265","Fatura tutarı rakam İle",5, 0, 12, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","140","250","ARA TOPLAM",5, 0, 10, "Sans Serif", 1, 0, 0, 0 },
	{ "98","10","20","1",30,"0","0","177","250","Ara Toplam",5, 0, 12, "Sans Serif", 0, 0, 0, 0 },
	{ "-1","7","10","1",40,"0","0","13","24.05","ADAK BİLGİSAYAR VE YAZILIM LTD.ŞTİ.",5, 0, 35, "Century Schoolbook L", 0, 0, 0, 0 },
	{ "-1","7","10","1",40,"0","0","13","27.47","Maraşal Çakmak Cad. Meriç Sk. Halit Ahmet İş Mrkz.",5, 0, 50, "Century Schoolbook L", 0, 0, 0, 0 },
	{ "-1","7","10","1",40,"0","0","13","31","No:6/14 Şirinevler - İSTANBUL",5, 0, 29, "Century Schoolbook L", 0, 0, 0, 0 },
	{ "87","10","20","1",10,"0","0","177","60","İrsaliye No",5, 0, 12, "Sans Serif", 0, 0, 0, 0 },
	{ "81","10","10","1",10,"0","0","12","57","Fatura Adresi",6, 0, 50, "", 0, 0, 0, 0 },
	{ "85","10","20","1",10,"0","0","160","46","Fatura Tarihi",6, 0, 12, "", 0, 0, 0, 0 },
	{ "86","10","20","1",10,"0","0","160","59","İrsaliye Tarihi",6, 0, 12, "", 0, 0, 0, 0 },
	{ "82","10","10","1",10,"0","0","12","89","Vergi Dairesi",6, 0, 40, "", 0, 0, 0, 0 },
	{ "83","10","10","1",10,"0","0","101.37","89","Vergi Numarası",6, 0, 13, "", 0, 0, 0, 0 },
	{ "88","10","10","1",20,"0","0","12","109.37","Ürün Kodu",6, 0, 10, "", 0, 0, 0, 0 },
	{ "89","10","10","1",20,"0","0","40","109.37","Ürün Cinsi ve Açıklama",6, 0, 60, "", 0, 0, 0, 0 },
	{ "91","10","20","1",20,"0","0","109","109.37","Ürün miktarı",6, 0, 5, "", 0, 0, 0, 0 },
	{ "90","10","10","1",20,"0","0","123.89","109.37","Ürün birimi",6, 0, 7, "", 0, 0, 0, 0 },
	{ "218","10","20","1",20,"0","0","141","109.37","İskonto sonrası birim fiyat",6, 0, 12, "", 0, 0, 0, 0 },
	{ "221","10","20","1",20,"0","0","171","109.37","Satır tutarı",6, 0, 12, "", 0, 0, 0, 0 },
	{ "-1","10","10","1",40,"0","0","8.16","230","Son C/H Bakiyeniz:",6, 0, 18, "", 0, 0, 0, 0 },
	{ "96","10","20","1",30,"0","0","169","243","Brüt Tutar",6, 0, 12, "", 0, 0, 0, 0 },
	{ "99","10","10","1",30,"0","0","20.84","251","Fatura tutarı yazı İle",6, 0, 60, "", 0, 0, 0, 0 },
	{ "102","10","10","1",30,"0","0","43.74","230","Son Cari Hesap Bakiyesi",6, 0, 15, "", 0, 0, 0, 0 },
	{ "234","10","20","1",30,"0","0","169","255","Fatura KDV tutarı",6, 0, 12, "", 0, 0, 0, 0 },
	{ "100","10","20","1",30,"0","0","169","267","Fatura tutarı rakam İle",6, 0, 12, "", 0, 0, 0, 0 },
	{ "84","10","20","1",10,"0","0","160","53","Seri Sıra Numarası",6, 0, 12, "Sans Serif", 0, 0, 0, 0 },
	{ "87","10","20","1",10,"0","0","160","65.16","İrsaliye No",6, 0, 12, "Sans Serif", 0, 0, 0, 0 },
	{ "73","13","10","1",10,"0","0","163","52","Seri - Sıra No",7, 0, 15, "", 0, 0, 0, 0 },
	{ "78","13","10","1",30,"0","0","39","126","Toplam (Yazı ile)",7, 0, 12, "", 0, 0, 0, 0 },
	{ "79","13","10","1",30,"0","0","180","122","Toplam (Rakam ile)",7, 0, 60, "", 0, 0, 0, 0 },
	{ "80","13","10","1",30,"0","0","40","133","Tahsil Eden Kişi",7, 0, 60, "", 0, 0, 0, 0 },
	{ "74","13","10","1",20,"0","0","22","80","Ödeme Şekli",7, 0, 30, "", 0, 0, 0, 0 },
	{ "75","13","10","1",20,"0","0","55.58","80","Açıklama",7, 0, 128, "", 0, 0, 0, 0 },
	{ "76","13","10","1",20,"0","0","175","80","Tutar",7, 0, 15, "", 0, 0, 0, 0 },
	{ "77","13","10","1",20,"0","0","192.06","80","Para Birimi",7, 0, 12, "", 0, 0, 0, 0 },
	{ "71","13","10","1",10,"0","0","15","45","Ünvan",7, 0, 15, "", 0, 0, 0, 0 },
	{ "72","13","10","1",10,"0","0","163","58","Tarih",7, 0, 10, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","9.48","150.98","Net Ücret                 :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","124.67","88.48","Vergi No :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","112.02","28.44","Makbuz Seri / No :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","9.13","161.16","KDV ( Brüt % )         :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","9.48","172.04","Toplam Tahsilat       :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "241","13","10","1",10,"0","0","59","42.13","Ünvanı",8, 0, 60, "", 0, 0, 0, 0 },
	{ "242","13","10","1",10,"0","0","157.32","28.44","Seri-Sıra No",8, 0, 10, "", 0, 0, 0, 0 },
	{ "243","13","10","1",10,"0","0","158.03","19.31","Tarihi",8, 0, 10, "", 0, 0, 0, 0 },
	{ "244","13","10","1",10,"0","0","58.65","49.15","Adresi",8, 0, 512, "", 0, 0, 0, 0 },
	{ "245","13","10","1",10,"0","0","60.05","88.48","Vergi Dairesi",8, 0, 50, "", 0, 0, 0, 0 },
	{ "246","13","10","1",10,"0","0","150.65","88.83","Vergi No",8, 0, 15, "", 0, 0, 0, 0 },
	{ "253","13","10","1",30,"0","0","59.35","127.63","Brüt Ücret",8, 0, 12, "", 0, 0, 0, 0 },
	{ "254","13","10","1",30,"0","0","60.4","139.74","Kesintiler Stopaj",8, 0, 12, "", 0, 0, 0, 0 },
	{ "255","13","10","1",30,"0","0","60.4","150.98","Net Ücret",8, 0, 12, "", 0, 0, 0, 0 },
	{ "256","13","10","1",30,"0","0","60.05","161.51","KDV",8, 0, 5, "", 0, 0, 0, 0 },
	{ "257","13","10","1",30,"0","0","60.05","186.09","Toplam Hizmet Tutarı ( Yazı )",8, 0, 12, "", 0, 0, 0, 0 },
	{ "258","13","10","1",30,"0","0","59.7","172.04","Toplam Hizmet Tutarı ( Rakam )",8, 0, 21, "", 0, 0, 0, 0 },
	{ "259","13","10","1",20,"0","0","60.05","102","Yapılan Hizmet",8, 0, 128, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","9.48","185.73","Yalnız                      :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","8.78","49.15","Ad ve Soyad, Adresi  :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","134.15","18.26","Tarih   :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","9.13","89.18","Vergi Dairesi              :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","8.78","101.82","Yapılan Hizmet          :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","9.48","127.8","Brüt Ücret                :",8, 0, 0, "", 0, 0, 0, 0 },
	{ "-1","13","10","1",40,"0","0","8.78","140.09","Kesintiler ( Stopaj )  :",8, 0, 0, "", 0, 0, 0, 0 },
{ "","","","",-1,"","","","","", -1, 0, 0, "", 0, 0, 0, 0 }
};


 #endif
