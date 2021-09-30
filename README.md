# Hashing
---
Sukurkite Jūsų maišos funkciją (hash kodų generatorių), kuris pasižymėtų šiais hash funkcijoms keliamais reikalavimais:

1. Maišos funkcijos įėjimas (angl. input) gali būti bet kokio dydžio simbolių eilutė (angl. string).
2. Maišos funkcijos išėjimas (angl. output) visuomet yra to paties, fiksuoto, dydžio rezultatas (pageidautina 256 bit'ų ilgio, t.y., 64 simbolių hex'as).
3. Maišos funkcija yra deterministinė, t. y., tam pačiam įvedimui (input'ui) išvedimas (output'as) visuomet yra tas pats.
4. Maišos funkcijos reikšmė/kodas (hash‘as) bet kokiai input'o reikšmei yra apskaičiuojamas greitai - efektyviai.
5. Iš hash funkcijos rezultato (output'o) praktiškai neįmanoma atgaminti pradinio įvedimo (input'o).
6. Maišos funkcija yra atspari "kolizijai" (angl. collision resistance).
7. Bent minimaliai pakeitus įvedimą, pvz.vietoj "Lietuva" pateikus "lietuva", maišos funkcijos rezultatas-kodas turi skirtis iš esmės.
---
## Instructions

Run terminal in directory of project file
Terminal command for compiling:
- On Windows ``` mingw32-make main ```
- On Linux, Mac OS ``` make main ```

Terminal command for running:
- On windows ``` ./main ```
- On Linux, Mac OS ``` ./main ```
---
## Possible actions

0. Manual input 
1. Comparison of 2 files w/ 1 different character 
2. Comparison of 2 files with > 1000 randomly generated characters
3. Comparison of 2 identical files different by 1 character
4. Hashing of empty file
5. Hashing of each line of konstitucija.txt and comparison w/ other algorithms
6. Generation and hashing of various pairs of strings
7. (To be implemented) Bit and hex comparison
---
## Documentation
---
### Length of output is the same(64 bytes) regardless of input
### 0. Manual input
```
input: 
banana 
5e2a0b8552d0e005c3d496ea43459a9028c50b94deaa8b05d25060854354166a
```
```
input: 
banaynay
f7c419fede9bac355e7273c895f25a9f2839da76ffcc11f6d693a43d567a7bc0
```
---
### 1. Comparison of 2 files w/ 1 different character (file1.txt contains text "1", file2.txt contains text "2")
```
hash of file1.txt: 479e6d5e61fca978cf38c3d60b52211225b06d3c83fc879acf16e5d6e97421f0
hash of file2.txt: 58af7f70831fdcabf37c071b50a777788b17d4a3fb740f1358af7f70831fdcab
```
---
### 2. Comparison of 2 files with > 1000 randomly generated characters
```
hash of generatedFile1.txt: a273e53b9b687d23bd5162bba5735ba03d6b7d9922f365bb1be8fda33dd1e23b
hash of generatedFile2.txt: 5ad0906da30fc9cdde58f8f63e83412567e37c7e961cdca9ef4b05091a943432
```
---
### 3. Comparison of 2 identical files different by 1 character
```
hash of loremA.txt: 2c5b60f862f366bf8b390eb54252445d48196d93e01f24bc26b72a734ffdc279
hash of loremB.txt: 2462e7d74eb739f226d18e4441b9a89993d480b3e826ab9b027bfdb6ea954208
```
---
### 4. Hashing of empty file
```
hash of empty.txt: 68a0b1710a425313ace4f5b54e869757e02839f982cadb9b246c7d3dc60e1fdf
```
---
### 5. Hashing of each line of konstitucija.txt and comparison w/ other algorithms
```
time took to hash each line of konstitucija.txt: 0.007999 s.
SHA1: 0.003003 s.
SHA256: 0.004011 s.
MD5: 0.001001 s.
```
### 6. Generation and hashing of various pairs of strings
```
number of identical hashes: 0
check pairHashes.txt
```
### 7. WIP

