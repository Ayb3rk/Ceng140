#include <stdio.h>

int main() {
    int task_num;
    scanf("%d",&task_num);
    if (task_num == 1) {
        double long acc, amount;
        float dollar_rate, euro_rate;
        int trans_number;
        char task, currency;
        scanf("%Lf %f %f", &acc, &euro_rate, &dollar_rate);
        scanf("%d", &trans_number);
        while (trans_number > 0) {
            scanf(" %c %c %Lf", &task, &currency, &amount);
            if (task == 'D') {
                if (currency == 'D') {
                    acc += amount * dollar_rate;

                } else if (currency == 'E') {
                    acc += amount * euro_rate;

                }
            } else if (task == 'W') {
                if (currency == 'D') {

                    acc -= amount * dollar_rate;
                } else if (currency == 'E') {
                    acc -= amount * euro_rate;
                }
            }
            trans_number -= 1;
        }
        printf("Final balance: %.2Lf TL.", acc);
    }
    else if (task_num == 2){
        char exam_type,sub_type;
        float penalty,total,score1,score2,score3,score4;
        int correct_answ1,correct_answ2,correct_answ3,correct_answ4;

        scanf(" %c",&exam_type);
        if (exam_type == 'A'){
            scanf(" %c",&sub_type);
            if (sub_type == 'C'){
                scanf("%f",&penalty);
                scanf("%d %f %d %f",&correct_answ1,&score1,&correct_answ2,&score2);
                total = (correct_answ1*score1) + (correct_answ2*score2)-((((30-correct_answ1)*score1)+((30-correct_answ2)*score2))*penalty);
                printf("A-C result: %.2f points.",total);
            }
            else if (sub_type == 'O'){
                scanf("%f",&penalty);
                scanf("%d %f %d %f",&correct_answ1,&score1,&correct_answ2,&score2);
                total = (correct_answ1*score1) + (correct_answ2*score2)-((((30-correct_answ1)*score1)+((30-correct_answ2)*score2))*penalty);
                printf("A-O result: %.2f points.",total);
            }
            else if (sub_type == 'E'){
                scanf("%f",&penalty);
                scanf("%d %f",&correct_answ1,&score1);
                scanf("%d %f",&correct_answ2,&score2);
                scanf("%d %f",&correct_answ3,&score3);
                scanf("%d %f",&correct_answ4,&score4);
                total = (correct_answ1*score1) +(correct_answ2*score2)+(correct_answ3*score3)+ (correct_answ4*score4)-((((30-correct_answ1)*score1) +((30-correct_answ2)*score2)+((30-correct_answ3)*score3)+ ((30-correct_answ4)*score4))*penalty);
                printf("A-%c result: %.2f points.",sub_type,total);
            }
        }
        else if (exam_type == 'T'){
            scanf("%f",&penalty);
            scanf("%d %f",&correct_answ1,&score1);
            scanf("%d %f",&correct_answ2,&score2);
            scanf("%d %f",&correct_answ3,&score3);
            scanf("%d %f",&correct_answ4,&score4);
            total = (correct_answ1*score1) +(correct_answ2*score2)+(correct_answ3*score3)+ (correct_answ4*score4)-((((40-correct_answ1)*score1) +((40-correct_answ2)*score2)+((40-correct_answ3)*score3)+ ((40-correct_answ4)*score4))*penalty);
            printf("T result: %.2f points.",total);
        }
    }
    return 0;
}