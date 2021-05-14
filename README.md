Ahoj,
tak nám konečně uzrál čas na závěrečný projekt. Za projekt lze získat 9 bodů (včetně cvičení max. 45 bodů) a odevzdání projektu je PODMÍNKOU PRO UDĚLENÍ ZÁPOČTU.
Aby byl projekt uznán pro zápočet, je nutné, aby splňoval následující:
1) Projekt je odevzdán nejpozději 14. 5. 2021 23:59:59 na emailovou adresu ******.*****@***.** v podobě souboru .cpp nebo archivu se soubory .cpp a .h. Dále je přiložen soubor s dokumentací k projektu (.docx či .txt). Soubor nebo archiv obsahuje v názvu váš univerzitní tag (aaa0000).
2) Projekt je možné zkompilovat a spustit pod defaultním kompilátorem MS Visual Studia (používám verzi Microsoft Visual Studio Community 2019, Version 16.8.6, takže těm, kteří ho nemají, doporučuju stáhnout a ověřit; zvláště si pohlídejte správnou inicializaci proměnných – zdravím uživatele kompilátorů gcc).
3) Projekt obsahuje pouze aktivní kód a komentáře, usnadňující orientaci či vysvětlující funkci částí kódu (žádné bloky "vypnutého" kódu).
4) Projekt má textový výstup do konzole, který je srozumitelný i bez náhledu do kódu.
5) Všechny třídy a metody mají název v angličtině.
Pokud nebude projekt splňovat výše uvedené body, pak ho ani nebudu opravovat.
V projektu se bude hodnotit splnění následujícího (daná část musí být plně funkční a plně splňovat zadání):
1) Alespoň 5 rozdílných tříd. Třídy mají atributy a/nebo metody, konstruktor a destruktor. (0,5b) Třídy jsou umístěny v samostatných hlavičkových a zdrojových souborech, v hlavním souboru je pouze funkce main(). (0,5b)
2) V main() funkci programu je vytvořeno několik instancí tříd a jsou volány metody, které demonstrují funkci vytvořených struktur a dávají smysl v kontextu projektu. (1b)
3) Alespoň jedna třída má implementováno dynamické pole ukazatelů na objekty jiné třídy (0,5b). Jsou implementovány metody pro přidání a mazání prvků pole (včetně přeskládání prázdného místa na konec). (0,5b)
4) Alespoň jedna třída má přetížený konstruktor. (1b)
5) Alespoň jedna třída má třídní proměnnou (static), která udržuje počet instancí třídy, včetně implementace do konstruktoru a destruktoru. (1b)
6) V projektu existuje dědičná struktura. (0,5b) V projektu existuje vícenásobná dědičnost (např. pro účely interface). (0,5b)
7) V projektu je implementována změna chování překrytím a protected atribut. (1b)
8) V projektu je implementována alespoň jedna ryze abstraktní třída. (1b)
9) V projektu je využit polymorfismus (např. v dynamickém poli ukazatelů na objekty různých tříd) (1b).
Projekt nemusí být složitý, stačí, aby se tam hodnocený prvek vyskytnul (např. není třeba 5 úrovní dědičnosti). Součástí nemusí být chování nad rámec zadaného projektu (např. u návrhu 6 níže není třeba implementovat samotné vykreslování prvků, stačí konzolový výstup "Rendering element xxx.").
Níže uvádím několik témat, z nichž si můžete zvolit. Náměty jsou inspirativní a je třeba je rozšířit. Pokud si nevyberete, můžete vymyslet vlastní námět.
1. Knihovna
Třídy v projektu mohou být knihovna, kniha, knihovník, zákazník. Knihovníci mohou přidávat a odebírat knihy z knihovny. Zákazníci si mohou knihy půjčovat, vracet je, platit pokuty a být vyzváni k vrácení knihy.
2. Zoo
Projekt může obsahovat výběhy, zvířata, ošetřovatele a návštěvníky. Dědičnost se nabízí u typů výběhů, zvířat či ošetřovatelů a zákazníků.
3. Ordinace
Ordinace obsahuje lékaře, sestry a pacienty. Pacienti si sjednávají termíny a mají svou kartu. Sestry a lékaři mohou provádět ošetření (záznam do karty pacienta), lékaři mohou navíc předepisovat léky.
4. IT fórum
Uživatelé mohou přidávat a číst články, přidávat komentáře a vytvářet projekty. V projektu může být více uživatelů. Dědičnost se nabízí u typů uživatelů, článků či projektů. Dědičnost se nabízí u článků a komentářů atributy čas zveřejnění, autor, počet upvotes. Další možnost je u uživatelů (administrator, user).
5. RPG Textovka
Projekt obsahuje třídy hráče, nepřátel, předmětů. Dědičnost se nabízí hlavně u nepřátel (např. speciální útok, zbroj). Stavy mohou být počet životů, peníze, předměty, které má hráč u sebe.
6. UI aplikace
Třídy představují dědičnou strukturu UI prvků (textbox, picture, label, button...). Mohou mít společného abstraktního předka Renderable a potomci mohou mít implementovány rozdílné metody.
8. Laboratoř
Do laboratoře přicházejí vzorky pacientů, které jsou vyšetřeny na přítomnost koronaviru. Pokud je pacient pozitivní, pak se provede dodatečné vyšetření přítomnosti mutace viru. Výsledky je možné exportovat v podobě výsledkového listu s údaji o pacientovi a výsledkem vyšetření. Lze vytvořit statistiku vyšetřených pacientů s počty pozitivních a počty mutací za daný den. Dědičnost se nabízí u pacientů (indikovaný od lékaře, samoplátce) či výsledků vyšetření (pozitivní, pozitivní s mutací).
Upozorňuji, že pro dodání neposlaných domácích úkolů platí stejný deadline. Pokud je něco nejasného nebo máte dotazy, pište, nebo se domluvíme na cvičení.
