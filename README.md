
#####  ๐ง made by CUBE KIOSK
<div align="center">
<p align="center"><img src="https://user-images.githubusercontent.com/98035984/168477541-e8376706-6827-4f61-aa55-2b0f2a247ae2.png" height="300px" width="300px"></p>

 ### ๐ง Welcome to Ice CUBE KIOSK ๐ง
 <img src="https://img.shields.io/badge/HTML-E34F26?style=flat-square&logo=HTML5&logoColor=white"/>
 <img src="https://img.shields.io/badge/C-00CCFF?style=flat-square&logo=C&logoColor="white"/>
 <img src="https://img.shields.io/badge/VisualStudioCode-0000FF?style=flat-square&logo=VisualStudioCode&logoColor="black"/>
 <img src="https://img.shields.io/badge/KakaoTalk-FFFF00?style=flat-square&logo=KakaoTalk&logoColor="white"/>
 <img src="https://img.shields.io/badge/Markdown-000000?style=flat-square&logo=Markdown&logoColor="white"/>
                                                                                                            

</div>
    

# ๐ง miniProject

<div align="center"> 

<img src="https://user-images.githubusercontent.com/98035984/167238404-7c0a4810-d7f4-4899-9d73-b195c32b7c1d.png" height="300px" width="300px">
 
  ## *Dessert_KIOSK*  
</div>
  
## ๐ CUBE KIOSK ์ฃผ์ 
 - ์นดํ ๋ฉ๋ด ์ฃผ๋ฌธ์ ๊ด๋ฆฌํ๋ ํ๋ก๊ทธ๋จ 

<br/>

## ๐ CUBE KIOSK์ ๋ํ ์๊ฐ
  - ๋ฐ์ ์ฃผ๋ฌธ์ ๊ฐํธํ๊ฒ ๋ง๋ค์ด์ฃผ๋ CUBE KIOSK ์๋๋ค.
  - ๊ฐ๋จํ ๋ฒํธ ์๋ ฅ์ ํตํ์ฌ ์ฃผ๋ฌธ์๋ฅผ ์๋์ผ๋ก ์ ๋ฆฌํด์ค๋๋ค
  - ๊ด๋ฆฌ์๊ฐ ์ง์  ๊ด๋ฆฌํ์ง ์์๋ ์ค๋์ ์ถ์ฒ ๋ฉ๋ด๋ฅผ ์๋์ผ๋ก ์ ํด์ฃผ๋ ํค์ค์คํฌ ์๋๋ค.

<br/>
  
##  ๐ CUBE KIOSK๊ฐ ๊ฐ์ง๊ณ  ์๋ ๋๋ต์ ์ธ ๊ธฐ๋ฅ ์ค๋ช
  - ์ฃผ๋ฌธ์์ ๋ฉ๋ด ์ถ๊ฐ ๊ธฐ๋ฅ
  - ์ฃผ๋ฌธ๋ด์ญ ์์  ๊ธฐ๋ฅ 
  - ์ถ๊ฐ ๊ตฌ๋งค ์ฌ๋ถ๋ฅผ ๋ฌป๊ณ  ์ํ๋ค๋ฉด ์ถ๊ฐ ๊ตฌ๋งค ์งํ
  - ์ฃผ๋ฌธ๋ด์ญ ์์  
  - ์ค๋์ ์ถ์ฒ ๋ฉ๋ด๋ฅผ ๋ ๋ง๋ค ๋๋ค์ผ๋ก ์ค์ 
  - ๐ ***๋๋ค์ผ๋ก ๋ฉ๋ด๋ฅผ ์ค๋์ ๋ฉ๋ด๋ฅผ ์ถ์ฒ*** ๐

<br/>

## ๐ CUBE KIOSK CRUD
> ์ฝ๋ ๋ฐ ๊ธฐ๋ฅ
```c
typedef struct {
    int contents; // 1: ์๋ฃ 2: ๋์ ํธ
    char name[100];
    int price;
    int sugar;
    }Product;
    // ๊ตฌ์กฐ์ฒด 
    
int createProduct(Product *p); // ์ ํ์ ์ถ๊ฐํ๋ ํจ์ => ๋ฉ๋ด ์ ํ
void readProduct(Product *p); // ํ๋์ ์ ํ ์ถ๋ ฅ ํจ์ => ๊ตฌ๋งค ๋ชฉ๋ก ๋ณด๊ธฐ
int updateProduct(Product *p); // ์ ํ์ ์์ ํ๋ ํจ์ => ๊ตฌ๋งค ๋ชฉ๋ก ์์  
int deleteProduct(Product *p); // ์ ํ์ ์ญ์ ํ๋ ํจ์ => ๊ตฌ๋งค ์ทจ์ [ํ๋ถ]

void saveProduct(Product *p, int count); //๋ฐ์ดํฐ๋ฅผ ํ์ผ์ ์ ์ฅ ํ๋ ํจ์
int loadProduct(Product *p);// ์ ์ฅ๋ ๋ฐ์ดํฐ๋ฅผ ๋ถ๋ฌ์ค๋ ํจ์

int selectMenu(); // ๋ฐ์ดํฐ๋ฅผ ๋ค๋ฃฐ ๋, ์ํ๋ ๋ฉ๋ด๋ฅผ ์ ํํ๋ ํจ์
int selectDataNo(Product *p, int count); // ์ ํ ๋ฒํธ๋ฅผ ๋ถ๋ฌ์ค๋ 
int listProduct(Product *p, int count); // ์ ์ฒด ๋ฑ๋ก๋ ์ ํ ๋ฆฌ์คํธ ์ถ๋ ฅ
//๊ฒ์๊ธฐ๋ฅ ์ด๋ฆ/๊ฐ๊ฒฉ/๋ฐฐ์ก๋ฐฉ๋ฒ

void searchProductName(Product *p, int count); // ๋ฉ๋ด์ด๋ฆ ๊ฒ์
void searchProductPrice(Product *p, int count); // ๋ฉ๋ด๊ฐ๊ฒฉ ๊ฒ์ 
void searchProductSugar(Product *p, int count); // ๋ฉ๋ด ์คํ ์ถ๊ฐ ์ฌ๋ถ๋ก ๊ฒ์

void todayMenu(Product *p); // ๋๋ค์ผ๋ก ์ค๋์ ์ถ์ฒ ๋ฉ๋ด ์๋ ค์ฃผ๋ ๊ธฐ๋ฅ

```

<br/>

## ๐ ๊ฐ๋ฐํ๊ฒฝ ๋ฐ ์ธ์ด
  - git 
  - vs code

<br/>

## ๐ ํ์๊ฐ ๋ฐ ํ์์ด ๋งก์ ์ญํ 
### ํ์
 #### ๊น์์ [isaccKim GITHUB LINK](https://github.com/isaccKim)
  - Repo Owner
  - ๋ถ๊ฐ๊ธฐ๋ฅ ๊ตฌํ
  - WIKI ๊ด๋ฆฌ
  - ์ฝ๋ ๊ด๋ฆฌ (์ค๋ฅ์์ ) 
  - ๋ก๊ณ ์ ์

<br/>

#### ๊น์์ฑ [Y-eseong GITHUB LINK](https://github.com/Y-eseong)
 - Contributer
 - CRUD ๊ตฌํ

<p align="center"><img src="https://user-images.githubusercontent.com/98035984/167239410-4cd9722d-1464-49e7-b82f-509ce0736362.jpeg" height="150px" width="300px"></p>
