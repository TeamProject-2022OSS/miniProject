
#####  🧊 made by CUBE KIOSK
<div align="center">
<p align="center"><img src="https://user-images.githubusercontent.com/98035984/168477541-e8376706-6827-4f61-aa55-2b0f2a247ae2.png" height="300px" width="300px"></p>

 ### 🧊 Welcome to Ice CUBE KIOSK 🧊
 <img src="https://img.shields.io/badge/HTML-E34F26?style=flat-square&logo=HTML5&logoColor=white"/>
 <img src="https://img.shields.io/badge/C-00CCFF?style=flat-square&logo=C&logoColor="white"/>
 <img src="https://img.shields.io/badge/VisualStudioCode-0000FF?style=flat-square&logo=VisualStudioCode&logoColor="black"/>
 <img src="https://img.shields.io/badge/KakaoTalk-FFFF00?style=flat-square&logo=KakaoTalk&logoColor="white"/>
 <img src="https://img.shields.io/badge/Markdown-000000?style=flat-square&logo=Markdown&logoColor="white"/>
                                                                                                            

</div>
    

# 🧊 miniProject

<div align="center"> 

<img src="https://user-images.githubusercontent.com/98035984/167238404-7c0a4810-d7f4-4899-9d73-b195c32b7c1d.png" height="300px" width="300px">
 
  ## *Dessert_KIOSK*  
</div>
  
## 📟 CUBE KIOSK 주제
 - 카페 메뉴 주문을 관리하는 프로그램 

<br/>

## 📟 CUBE KIOSK에 대한 소개
  - 바쁜 주문을 간편하게 만들어주는 CUBE KIOSK 입니다.
  - 간단한 번호 입력을 통하여 주문서를 자동으로 정리해줍니다
  - 관리자가 직접 관리하지 않아도 오늘의 추천 메뉴를 자동으로 정해주는 키오스크 입니다.

<br/>
  
##  📟 CUBE KIOSK가 가지고 있는 대략적인 기능 설명
  - 주문서에 메뉴 추가 기능
  - 주문내역 수정 기능 
  - 추가 구매 여부를 묻고 원한다면 추가 구매 진행
  - 주문내역 수정 
  - 오늘의 추천 메뉴를 날마다 랜덤으로 설정
  - 🎉 ***랜덤으로 메뉴를 오늘의 메뉴를 추천*** 🎉

<br/>

## 📟 CUBE KIOSK CRUD
> 코드 및 기능
```c
typedef struct {
    int contents; // 1: 음료 2: 디저트
    char name[100];
    int price;
    int sugar;
    }Product;
    // 구조체 
    
int createProduct(Product *p); // 제품을 추가하는 함수 => 메뉴 선택
void readProduct(Product *p); // 하나의 제품 출력 함수 => 구매 목록 보기
int updateProduct(Product *p); // 제품을 수정하는 함수 => 구매 목록 수정 
int deleteProduct(Product *p); // 제품을 삭제하는 함수 => 구매 취소 [환불]

void saveProduct(Product *p, int count); //데이터를 파일에 저장 하는 함수
int loadProduct(Product *p);// 저장된 데이터를 불러오는 함수

int selectMenu(); // 데이터를 다룰 때, 원하는 메뉴를 선택하는 함수
int selectDataNo(Product *p, int count); // 제품 번호를 불러오는 
int listProduct(Product *p, int count); // 전체 등록된 제품 리스트 출력
//검색기능 이름/가격/배송방법

void searchProductName(Product *p, int count); // 메뉴이름 검색
void searchProductPrice(Product *p, int count); // 메뉴가격 검색 
void searchProductSugar(Product *p, int count); // 메뉴 설탕 추가 여부로 검색

void todayMenu(Product *p); // 랜덤으로 오늘의 추천 메뉴 알려주는 기능

```

<br/>

## 📟 개발환경 및 언어
  - git 
  - vs code

<br/>

## 📟 팀소개 및 팀원이 맡은 역할
### 팀원
 #### 김석원 [isaccKim GITHUB LINK](https://github.com/isaccKim)
  - Repo Owner
  - 부가기능 구현
  - WIKI 관리
  - 코드 관리 (오류수정) 
  - 로고제작

<br/>

#### 김예성 [Y-eseong GITHUB LINK](https://github.com/Y-eseong)
 - Contributer
 - CRUD 구현

<p align="center"><img src="https://user-images.githubusercontent.com/98035984/167239410-4cd9722d-1464-49e7-b82f-509ce0736362.jpeg" height="150px" width="300px"></p>
