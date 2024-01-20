#include<stdio.h>
typedef struct BookShelf{
    char bookTitle[20];
    char bookAuthor[20];
    int bookPrice;
} BookShelf ;

void inputBook(BookShelf *book){
    printf("Enter book name: ");
    scanf("%s",book -> bookTitle);

    printf("Enter book's Author: ");
    scanf("%s",&book -> bookAuthor);

    printf("Enter Book Price: ");
    scanf("%d",&book -> bookPrice);
}

void displayBook(BookShelf *book){
    printf("\nBook Description:\n");
    printf("title: %s\n",book -> bookTitle);
    printf("Author: %s\n",book -> bookAuthor);
    printf("Price: %d\n",book -> bookPrice);
}

void highestPrice(BookShelf book[],int numBook){
    float maxPrice = book[0].bookPrice;
     int index = 0;

    for(int i=0;i<numBook;++i){
        if( book[i].bookPrice > maxPrice ){
            maxPrice = book[i].bookPrice;
            index = i;
        }
    }

    printf("\nBook with the highest Price: \n");
    displayBook(&book[index]);
}
int main(){
    BookShelf bookList[5];
    
    for(int i=0;i<5;++i){
        printf("\nEnter the Descriptions for Book #%d : \n",i+1);
        inputBook(&bookList[i]);
    }

    for(int i=0;i<5;++i){
        displayBook(&bookList[i]);
    }

    highestPrice(bookList,5);
    return 0;
}