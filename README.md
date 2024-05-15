# Arduino_KVIZ

### Naloga:
**Kviz**: Imamo 3 tipke A, B in C. Krmiljenje naj ugotavlja, katera tipka je bila pritisnjena prva, katera druga in katera tretja. Zelena LED pomeni, da ni nihče še pritisnil na tipko (začetek kviza), rumena LED pomeni, da je vsaj en igralec pritisnil na tipko. Ko so vsi trije igralci pritisnili svoje tipke, utripa rdeča LED. S tipko za reset R ugasnemo rdečo LED diodo in resetiramo kviz. Za prikaz vrstnega reda uporabite LCD zaslon.

### Kosovnica:
* 1x Arduino UNO,
* 2x Vezalna plošča,
* 1x LCD zaslon,
* 8x 220Ω upor,
* 3x LED dioda,
* 1x Potenciometer,
* 4x Tipke,
* 29x Žic.

### Priredbeni seznam:
| Oznaka v načrtu | Naslov operanda | Vrsta kontakta | Pomen |
| --------------- | --------------- | -------------- | ----- |
| KEY 1 | Tipka | N.C. | Tipka | Tipka, ki jo pritisnejo na kvizih za zaporedno odgovarjanje na uprašanja |
| KEY 2 | Tipka | N.C. | Tipka | Tipka, ki jo pritisnejo na kvizih za zaporedno odgovarjanje na uprašanja |
| KEY 3 | Tipka | N.C. | Tipka | Tipka, ki jo pritisnejo na kvizih za zaporedno odgovarjanje na uprašanja |
| KEY 4 | Tipka | N.C. | Tipka | Tipka, za resetiranje kviza |
| RP1 | Potenciometer | Analgno | Za nastavljanje kontrasta na LCD zaslonu |

| Oznaka v načrtu | Naslov operanda | Aktiven pin | Pomen |
| --------------- | --------------- | ------ | ----- |
| LED1 | LED | 7 | Je prižgana, ko je kviz v začetnem stanju |
| LED2 | LED | 8 | Je prižgana, ko je vsaj en prtisnil tipko |
| LED3 | LED | 9 | Je prižgana, ko so vsi pritisnili na tipke ter je kviz končan |
| U2 | LCD zaslon | 13,12,11,10,1,2 | Izpisuje, vrstni red pritiskov na tipke |


### Shema:
![Posnetek zaslona 2024-05-15 074815](https://github.com/JakaVesena/Arduino_KVIZ/assets/169873277/7227128b-3e6e-40a8-af63-0942e5e672a2)

### Slike:
![20240515_071508](https://github.com/JakaVesena/Arduino_KVIZ/assets/169873277/b96fea9c-afad-448d-8d80-03f01fe759c9)
![20240515_071438](https://github.com/JakaVesena/Arduino_KVIZ/assets/169873277/edf0e6e7-2d0c-4fe0-a12e-291734dd072c)

### Posnetek:
https://github.com/JakaVesena/Arduino_KVIZ/assets/169873277/f85b5b3d-a03d-4754-a84b-3d353eb75bde



### Komentar:
#### Delovanje:
Projekt deluje dobro, vmes pa sva imela težave s programiranjem LCD zaslona. Pozabila sva tudi na utripajočo LED diodo - spomnila sva se šele, ko sva ponovno prebrala navodila za projektno nalogo, prej pa sva že vse razstavila.
#### Izboljšave:
Morebitne izboljšave za sam projekt, bi bilo recimo: dodajanje izpisa časa kviza, da se LED dioda prižge nad tisto tipko, ki je bila pritisnjena in morebnto še izbira števila igralcev (na začetku  programa uporabnik izbere število tipk, ki jih bo bilo možno pritisniti, npr. v našem primeru 2 ali 3 igralci).
