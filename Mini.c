/*        PROJECT IS BASED ON MONEY TOTALLY.(In Rupees/Dollars).
 YOU WILL BE ALLOTED WITH A BANK ACCOUNT AND INTIALLY IT HAS '0' Bank Balance.(you can constantly check your status in your profile).
           Main things can be done.
          1. Earn Money.
          2. Spend Money.
1)Earn Money:- 
              In my project money can be earned by:-
              1.Answering the Quiz (like in KBC).
2)Spend Money:-
               In my project money can be spent for:-
               1. Like amazon(you will have some list of things to buy).
Topics: I used:
1. Structures
2. File handling
3. loops
4. Basic functions
5. switch case/ if-else
6. **history (dap)**
7. string 
8. array
*/
float DTR(float);
float RTD(float);
//Converters;
float DTR(float n){
    return n*83.38;
}
float RTD(float n){
    return n/83.38;
}
// Money for each question.
int mny(int n){
    if(n==1){
        return 1000;
    }else if(n==2){
        return 2000;
    }else if(n==3){
        return 3000;
    }else if(n==4){
        return 5000;
    }else if(n==5){
        return 10000;
    }else if(n==6){
        return 20000;
    }else if(n==7){
        return 40000;
    }else if(n==8){
        return 80000;
    }else if(n==9){
        return 160000;
    }else if(n==10){
        return 320000;
    }else if(n==11){
        return 640000;
    }else if(n==12){
        return 1280000;
    }else if(n==13){
        return 2500000;
    }else if(n==14){
        return 5000000;
    }else{
        return 10000000;
    }  
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int cnt=0;
    float wallet_amount;
struct MyProfile {
float Balance;
int Highest_Quiz_No;
float wallet;
int lastTransaction;
int No_Quiz_games;
}player;
player.Balance=0;
player.Highest_Quiz_No=0;
player.lastTransaction=0;
player.No_Quiz_games=0;
player.wallet=0;
int *ptr;
int n=16,count=0;
ptr =(int *)malloc(n*sizeof(int));
char BankName[]="State Bank of India";
char Accno[]="1234 3212 4321 XXXX";
char Name[]="N V SAI RAGHAVA";
char Cursor[20],choice;
while(1){
// Profile
printf("\n\n");
printf("The Cursor works as main function:\n1.profile\n2.quiz\n3.Wallet\n4.spend\n5.transactions\n6.exit\n");
scanf("%s",Cursor);
if(strcmp(Cursor,"profile") == 0 || strcmp(Cursor,"1") == 0){
printf("The Account Holder: %s\n", Name);
printf("Bank Name: %s\n", BankName);
printf("The Account No: %s\n",Accno);
printf("Balance: %f\n",player.Balance);
printf("Wallet Balance: %f\n",player.wallet);
printf("Quiz Highest streak: %d\n",player.Highest_Quiz_No);
printf("Number of Games Played: %d\n",player.No_Quiz_games);
printf("Latest Transaction is: %d\n",player.lastTransaction);
printf("Do you want a Bank Receipt?(Y/N)");
scanf(" %c",&choice);
// file handling
if(choice =='Y' || choice == 'y'){
    FILE *fptr;
    fptr =  fopen("Profile.txt","w+");
    if(fptr==NULL){
        printf("System fail");
        return 1;
    }else{
         fprintf(fptr,"\t\t\t\t\tBANK RECEIPT:-\t\t\t\t\t\n");
    fprintf(fptr,"The Account Holder: %s\n", Name);
    fprintf(fptr,"Bank Name: %s\n", BankName);
    fprintf(fptr,"The Account No: %s\n",Accno);
    fprintf(fptr,"Balance: %f\n",player.Balance);
    fprintf(fptr,"Wallet Balance: %f\n",player.wallet);
    fprintf(fptr,"Quiz Highest streak: %d\n",player.Highest_Quiz_No);
    fprintf(fptr,"Number of Games Played: %d\n",player.No_Quiz_games);
    fprintf(fptr,"Latest Transaction is: %d\n",player.lastTransaction);
    }
    fclose(fptr);
}
}
// Quiz  
int que=1;
char ans,inp;
char status='S';
if(strcmp(Cursor,"quiz") == 0 || strcmp(Cursor,"2") == 0){
    cnt++;
    player.No_Quiz_games=cnt;
while(status != 'Q'){
    printf("Question %d of 1,000/- (or) %.2f$:\n",que,RTD(1000));
printf("Who is the author of The Great Gatsby?\n");
printf("(a) F. Scott Fitzgerald\n");
printf("(b) Ernest Hemingway\n");
printf("(c) Harper Lee\n");
printf("(d) William Faulkner\n");
ans='a';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=1000;
count++;
printf("Correct Answer You Have Won 1,000/-\n");
player.Balance +=1000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question2:
printf("Question %d of 2,000/- (or) %.2f$:\n",que,RTD(2000));
printf("Which planet is known as the Red Planet?\n");
printf("(a) Venus\n");
printf("(b) Mars\n");
printf("(c) Jupiter\n");
printf("(d) Saturn\n");
ans='b';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=2000;
count++;
printf("Correct Answer You Have Won 2,000/-\n");
player.Balance = player.Balance+2000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}


// Question 3
printf("Question %d of 3,000/- (or) %.2f$:\n",que,RTD(3000));
printf("Who painted the Mona Lisa?\n");
printf("(a) Leonardo da Vinci\n");
printf("(b) Michelangelo\n");
printf("(c) Vincent van Gogh\n");
printf("(d) Pablo Picasso\n");
ans='a';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice\n");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=3000;
count++;
printf("Correct Answer You Have Won 3,000/-\n");
player.Balance = player.Balance+3000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}


//Question4
printf("Question %d of 5,000/- (or) %.2f$:\n",que,RTD(5000));
printf("What is the capital city of France?\n");
printf("(a) London\n");
printf("(b) Berlin\n");
printf("(c) Paris\n");
printf("(d) Rome\n");
ans='c';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=5000;
count++;
printf("Correct Answer You Have Won 5,000/-\n");
player.Balance = player.Balance+5000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}
//Question5
printf("Question %d of 10,000/- (or) %.2f$:\n",que,RTD(10000));
printf("What is the tallest mountain in the world?\n");
printf("(a) Mount Kilimanjaro\n");
printf("(b) Mount Everest\n");
printf("(c) K2\n");
printf("(d) Mount Fuji\n");
ans='b';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=10000;
count++;
printf("Correct Answer You Have Won 10,000/-\n");
player.Balance = player.Balance+10000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}


//  Question 6 Anime Genre
printf("Question %d of 20,000/- (or) %.2f$:\n",que,RTD(20000));
printf("Who is the main protagonist of Classroom of the Elite?\n");
printf("(a) Kiyotaka Ayanokouji\n");
printf("(b) Suzune Horikita\n");
printf("(c)  Kikyou Kushida\n");
printf("(d) Arisu Sakayanagi\n");
ans='a';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=20000;
count++;
printf("Correct Answer You Have Won 20,000/-\n");
player.Balance = player.Balance+20000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

//Question 7 
printf("Question %d of 40,000/- (or) %.2f$:\n",que,RTD(40000));
printf("Who is the leader of Class 1-D, the class where the protagonist is initially placed?\n");
printf("(a) Hanami Ichinose\n");
printf("(b) Suzune Horikita\n");
printf("(c) Kikyou Kushida\n");
printf("(d) Arisu Sakayanagi\n");
ans='b';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=40000;
count++;
printf("Correct Answer You Have Won 40,000/-\n");
player.Balance = player.Balance+40000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question 8
printf("Question %d of 80,000/- (or) %.2f$:\n",que,RTD(80000));
printf("Who is the leader of Class 1-C, the rival class to Class 1-D?\n");
printf("(a) Hanami Ichinose\n");
printf("(b) Suzune Horikita\n");
printf("(c) Kikyou Kushida\n");
printf("(d) Kakeru Ryuen\n");
ans='d';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=80000;
count++;
printf("Correct Answer You Have Won 80,000/-\n");
player.Balance = player.Balance+80000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question 9
printf("Question %d of 1,60,000/- (or) %.2f$:\n",que,RTD(160000));
printf("What is Sanji's dream in One Piece?\n");
printf("(a) To become the Pirate King\n");
printf("(b) To find the All Blue\n");
printf("(c) To become the greatest swordsman\n");
printf("(d) To discover the lost history of the world\n");
ans='b';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=160000;
count++;
printf("Correct Answer You Have Won 1,60,000/-\n");
player.Balance = player.Balance+160000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}
// Question 10
printf("Question %d of 3,20,000/- (or) %.2f$:\n",que,RTD(320000));
printf("What is the name of Sanji's biological family of assassins?\n");
printf("(a)  Straw Hat Pirates\n");
printf("(b) Donquixote Family\n");
printf("(c) Vinsmoke Family\n");
printf("(d) Whitebeard Pirates\n");
ans='c';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=320000;
count++;
printf("Correct Answer You Have Won 3,20,000/-\n");
player.Balance = player.Balance+320000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}
// Question 11
printf("Question %d of 6,40,000/- (or) %.2f$:\n",que,RTD(640000));
printf("In which arc does Sanji confront his family and undergo significant character development?\n");
printf("(a) Alabasta Arc\n");
printf("(b) Dressrosa Arc\n");
printf("(c) Whole Cake Island Arc\n");
printf("(d) Wano Country Arc\n");
ans='c';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=640000;
count++;
printf("Correct Answer You Have Won 6,40,000/-\n");
player.Balance = player.Balance+640000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question 12
printf("Question %d of 12,80,000/- (or) %.2f$:\n",que,RTD(1280000));
printf("Who wrote the famous play Romeo and Juliet?\n");
printf("(a) William Shakespeare\n");
printf("(b) Jane Austen\n");
printf("(c) Charles Dickens\n");
printf("(d) Mark Twain\n");
ans='a';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=1280000;
count++;
printf("Correct Answer You Have Won 12,80,000/-\n");
player.Balance = player.Balance+1280000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question 13
printf("Question %d of 25,00,000/- (or) %.2f$:\n",que,RTD(2500000));
printf("What is the capital city of Australia?\n");
printf("(a) Sydney\n");
printf("(b) Canberra\n");
printf("(c) Melbourne\n");
printf("(d) Brisbane\n");
ans='b';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=2500000;
count++;
printf("Correct Answer You Have Won 25,00,000/-\n");
player.Balance = player.Balance+2500000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question 14
printf("Question %d of 50,00,000/- (or) %.2f$:\n",que,RTD(5000000));
printf("What is the longest river in the world?\n");
printf("(a) Nile River\n");
printf("(b) Amazon River\n");
printf("(c) Yangtze River\n");
printf("(d) Mississippi River\n");
ans='a';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=5000000;
count++;
printf("Correct Answer You Have Won 50,00,000/-\n");
player.Balance = player.Balance+5000000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}

// Question 15
printf("Question %d of 1,00,00,000/- (or) %.2f$:\n",que,RTD(10000000));
printf("What is Mikasa Ackerman's iconic catchphrase in Attack on Titan?\n");
printf("(a) I will protect you, Eren\n");
printf("(b) Humanity's strongest soldier.\n");
printf("(c) Titans are our enemies.\n");
printf("(d) This world is cruel, but also beautiful\n");
ans='a';
printf("Enter Your Choice: ");
scanf(" %c",&inp);
if(inp != ans){
    printf("Oops! Wrong Choice");
    break;
}
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=10000000;
count++;
printf("Correct Answer You Have Won 1,00,00,000/-\n");
player.Balance = player.Balance+10000000;
printf("You can Continue(C)/Quit(Q): ");
scanf(" %c",&status);
que++;
if(status == 'Q'){
    break;
}
break;
}
player.Highest_Quiz_No=que-1;
player.lastTransaction= mny(que-1);
}
// Spend Money: 1. amazon 
if(strcmp(Cursor,"spend") == 0 || strcmp(Cursor,"4") == 0){
printf("a) Sanji Rare Key Chain(worth 1000/-)\n b) Zoro's Sword(worth 12000/-) \n c) Eren's KeyChain(worth 500/-)\n ");
printf("d) Naruto Limited Edition Headband (worth 750/-)\ne) Tokyo Ghoul Mask Replica (worth 650/-)\nf) Fullmetal Alchemist Pocket Watch (worth 500/-)\n");
printf("g)Exclusive Death Note Replica Notebook (worth 700/-)\nh. One Piece Mug (worth 300/-)\ni) My Hero Academia Deluxe Backpack (worth 550/-)");
printf("\n Enter your choice here:- ");
scanf(" %c",&choice);
switch (choice){
case 'a': 
printf("a) Sanji Rare Key Chain(worth 1000/-)\n confirm(y/n): ");
scanf( " %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=1000){
player.wallet -=1000;
player.lastTransaction=-1000;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-1000;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=1000){
     player.Balance-=1000;
     player.lastTransaction=-1000;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-1000;
count++;
     printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

case 'b': 
printf("b) Zoro's Sword(worth 12000/-)\n confirm(y/n): ");
scanf( " %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=12000){
player.wallet -=12000;
player.lastTransaction=-12000;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-12000;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=12000){
     player.Balance-=12000;
     player.lastTransaction=-12000;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-12000;
count++;
   printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

case 'c': 
printf("c) Eren's KeyChain(worth 500/-)\n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=500){
player.wallet -=500;
player.lastTransaction=-500;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-500;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n --Exiting--");
}
}else{
    if(player.Balance>=500){
     player.Balance-=500;
     player.lastTransaction=-500;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-500;
count++;
     printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

case 'd': 
printf("d) Naruto Limited Edition Headband (worth 750/-)\n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>750){
player.wallet -=750;
player.lastTransaction=-750;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-750;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=750){
     player.Balance-=750;
     player.lastTransaction=-750;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-750;
count++;
  printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

case 'e': 
printf("e) Tokyo Ghoul Mask Replica (worth 650/-)\n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=650){
player.wallet -=650;
player.lastTransaction=-650;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-650;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=650){
     player.Balance-=650;
     player.lastTransaction=-650;
  if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-650;
count++;
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;
printf("Succesfully purchased! (through UPI)");
case 'f': 
printf("f) Fullmetal Alchemist Pocket Watch (worth 500/-)\n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=500){
player.wallet -=500;
player.lastTransaction=-500;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-500;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=500){
     player.Balance-=500;
     player.lastTransaction=-500;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-500;
count++;
printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

case 'g': 
printf("g)Exclusive Death Note Replica Notebook (worth 700/-)\n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=700){
player.wallet -=700;
player.lastTransaction=-700;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-700;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=700){
     player.Balance-=700;
     player.lastTransaction=-700;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-700;
count++;
  printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

case 'h': 
printf("h. One Piece Mug (worth 300/-)\ni) My Hero Academia Deluxe Backpack \n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=300){
player.wallet -=300;
player.lastTransaction=-300;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-300;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=300){
     player.Balance-=300;
     player.lastTransaction=-300;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-300;
count++;
     printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;


case 'i': 
printf("i) My Hero Academia Deluxe Backpack (worth 550/-)\n confirm(y/n): ");
scanf(" %c",&choice);
if(choice != 'Y'&& choice != 'y'){
printf("--Exiting--");
break;
}
printf("Wanna Pay from wallet/UPI? (W/U)");
scanf(" %c",&choice);
if(choice == 'w' || choice == 'W'){
    if(player.wallet>=550){
player.wallet -=550;
player.lastTransaction=-550;
if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-550;
count++;
printf("Succesfully purchased! (through wallet)");
}else{
    printf("Earn Money playing quiz!\n--Exiting--");
}
}else{
    if(player.Balance>=550){
     player.Balance-=550;
     player.lastTransaction=-550;
     if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-550;
count++;
     printf("Succesfully purchased! (through UPI)");
    }else{
        printf("Insufficient Balance Earn more money through quiz\n--Exiting--");
    }
}
    break;

default:
printf("We'll try to bring new swags soon!..\n");
    break;
}
}
// Tranfer to UPI Lite / Wallet
if(strcmp(Cursor,"wallet")==0|| strcmp(Cursor,"3") == 0){
       printf("Your current balance is: %f\n",player.Balance);
       printf("Enter the Money to add into the wallet: ");
       scanf("%f",&wallet_amount);
       if(player.Balance-wallet_amount > 0){
        printf("Transfering...\n");
        player.wallet=wallet_amount;
        player.Balance -= wallet_amount;
        player.lastTransaction =- wallet_amount;
        if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-wallet_amount;
count++;
        printf("Current Balance: %f",player.Balance);
       }else if(player.Balance-wallet_amount < 0){
        printf("Insufficient Balance!\n");
        printf("You can Transfer upto: %f\n",player.Balance);
        printf("Do you wanna Transfer your Full Balance?(Y/N)");
        scanf(" %c",&choice);
        if(choice == 'Y'){
            printf("Transfering...\n");
        player.wallet=player.Balance;
        player.lastTransaction=-player.Balance;
        if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-player.Balance;
count++;
        player.Balance = 0;
         printf("Current Balance: %f\n",player.Balance);
        printf("Exiting Wallet...\n");
        }else{
            printf("Exiting Wallet...\n");
        }
       }else{
        printf("You will have '0' balance now!\n");
            printf("Confirm(Y/N)");
            scanf("%c",&choice);
            if(choice =='Y'){
                printf("Transfering...\n");
        player.wallet=wallet_amount;
        player.Balance -= wallet_amount;
        if(count>=n){
    n *= 2;
    ptr= realloc(ptr,n*sizeof(int));
}
ptr[count]=-wallet_amount;
count++;
        printf("Current Balance: %f",player.Balance);
            }else{
                printf("Exiting Wallet...");
            }
       }
}
//transactions
if(strcmp(Cursor,"transactions") == 0 || strcmp(Cursor,"5") == 0){
    for(int i=0;i<count;i++){
        if(ptr[i]>0){
            printf("%d.credit: %d\n",i+1,ptr[i]);
        }else{
            printf("%d.debit: %d\n",i+1,ptr[i]);
        }
    }
}
// Exit
if(strcmp(Cursor,"exit")==0 || strcmp(Cursor,"6") == 0){
     printf("Exiting the Program!");
     free(ptr);
    break;
 }
  }
  return 0;
}