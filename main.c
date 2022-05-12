#include <stdio.h>
#include "manager.h"

int main(){
    Product p[30];
    Product rp[3];
    int count = 0, menu;
    int index = 0;
    count = loadProduct(p);
    index = count;

    while (1){
        menu = selectMenu();
        if (menu == 0)
            break;
       if (menu == 1 && count != 0)listProduct(p,index);//메뉴조회
        
        else if (menu == 2){
            count += createProduct(&p[index++]);
        } //메뉴추가

        else if (menu == 3 && count >= 1){
            int no = selectDataNo(p, count);
            if (no == 0){
                printf("=> 취소함\n");
                continue;
            }
            updateProduct(&p[no-1]);
        } //수정

        else if (menu == 4 && count >= 1){
            int deleteOk; //삭제
            int no = selectDataNo(p, index);
            
            if (no == 0){
                printf("=> 취소됨\n");
                continue;
            }
            printf("정말로 삭제하시겠습니까(삭제 :1)");
            scanf("%d", &deleteOk);
            if (deleteOk == 1)count -= deleteProduct(&p[no-1]);
        }
        else if(menu == 5){
           saveProduct(p,index);
           }

        else if(menu == 6){
            searchProductName(p,index);
        }

        else if(menu == 7){
            searchProductPrice(p,index);
        }

        else if(menu == 8){
            searchProductSugar(p,index);
        }
        else if(menu == 9){
            setRandomMenu(rp);
            todayMenu(rp);
        }
            continue;
    }
    printf("종료됨!\n");
    return 0;
}
