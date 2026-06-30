# include <stdio.h>
int main(){
    int choice;
    float balance = 5000,amount;
    printf("1.deposit\n2withdraw\n3.balance\n");
    scanf("%d",&choice);
    switch(choice){
        case1:
        scanf("%f",&amount );
        balance+=amount;
        printf("balance =%.2f",balance);
        break;
        case 2:
        scanf("%f",&amount );
        if(amount <=balance){
            balance = amount ;
        printf("balance =%.2f",balance);

        }
        elseprintf("insufficient balance");
        break;
        case 3:
        printf("balance=%.2f",balance);
        break;
        default;
        printf("invalid chaice");

    }
    return 0;
}