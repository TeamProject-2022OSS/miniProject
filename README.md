# miniProject

# 디저트 자
![premium-icon-vending-machine-2514680](https://user-images.githubusercontent.com/98035984/165918810-62f800eb-ca40-43db-8236-f95f280207fe.png)

## mini project 주제
- 카페 메뉴를 불러주는 자판기 구현

## mini project 에 대한 소개
  - 누구 이런 협업 어떤 수업 
  
  
## mini project 가 가지고 있는 대략적인 기능 설명



## 기능 CRUD
> 코드 및 기능
```c
typedef struct {
    char name[100];
    char contents[100];
    char weight[100];
    int price;
    int shipping;
    int coin; // 자판기에 넣은 돈
    }menu;
    // 구조체 
    
int ceateProduct(Product *p); // 제품을 추가하는 함수 => 메뉴 선택
void readProduct(Product *p); // 하나의 제품 출력 함수 => 구매 목록 보기
int updateProduct(Product *p); // 제품을 수정하는 함수 => 구매 목록 수정 
int deleteProduct(Product *p); // 제품을 삭제하는 함수 => 구매 취소 [환불]

void saveProduct(Product *p, int count); //데이터를 파일에 저장 하는 함수
int loadProduct(Product *p);// 저장된 데이터를 불러오는 함수

int selectMenu(); // 데이터를 다룰 때, 원하는 메뉴를 선택하는 함수
int selectDataNo(Product *p, int count); // 제품 번호를 불러오는 
int listProduct(Product *p, int count); // 전체 등록된 제품 리스트 출력
//검색기능 이름/가격/배송방법

void searchProductName(Product *p, int count); // 제품이름 검색
void searchProductPrice(Product *p, int count); // 제품가격 검색 
void searchProductShipping(Product *p, int count); // 배송방법 검색

void todayMenu(Product *p); // 랜덤으로 오늘의 추천 메뉴 알려주는 기능
//void inputCoin(Product *p); // 자판기 동전을 받는 기능
//int viewChange(); // 거스름돈 내역을 알려주는 기능

```
![premium-icon-vending-machine-1985826](https://user-images.githubusercontent.com/98035984/165920199-24430d88-7bdc-4ac3-a41b-579566b9015c.png)
  - 특별한 기능: 오늘의 메뉴를 추천 
  - 랜덤으로 메뉴를 추천해 준다.
  - 동전을 받고 거스름돈 계산 || 거스름돈을 다 사용할 경우 종료 || 중간에 종료 가능 
  
## 개발환경 및 언어
  - git 
  - vs code

##  팀소개 및 팀원이 맡은 역할
>팀원
 >> 김석원 [isaccKim GITHUB LINK](https://github.com/isaccKim)
  >>> Repo Owner
   >>>> 코드 관리

>> 김예성 
 >>> Contributer
  >>>> 서비스 관리



