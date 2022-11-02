#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1306200028 M.Enes Ateş 2.11.2022

typedef struct n{
    int x;
   struct n  * next;
}n;
typedef  struct n  node;

void bastir(node *r){
    while(r!=NULL){
        printf("%d-", r -> x);
        r = r->next;
    }
}
void ekle(node *r,int rand){
    while(r->next != NULL){
        r = r->next;
    }
    r->next=(node *)malloc(sizeof(node));
    r->next->x=rand;
    r->next->next=NULL;
}
void ara(node *r,int aranacakSayi){
    int i=0;
    while(r !=NULL){
        if(r->x == aranacakSayi){
            printf("%d sayisi bulundu %d.eleman ",aranacakSayi,i+1);
            break;
        }
        i++;
        r=r->next;
    }
    if(r->x != aranacakSayi){
           printf("Sayi Bulunamadi");  
        }
}
int main(){
    node *root;
    root= (node *)malloc(sizeof(node));
    root->next=NULL;
    node *iter;
    iter = root;
    int max=100;
    while (max--) {
    int random = rand() % 1000 + 1;
    if(max==99){
        iter -> x=random;
    }
    else{
        ekle(iter,random);
    } 
  }
  ara(root,930);
  printf("\n");
  bastir(root);
}