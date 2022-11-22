#include<stdio.h>
#include<stdlib.h>
void search(char *snt,int size);
void reverseSearch(char *snt,int size);

int main(int argc, char const *argv[]){
    char sentence[100];
    int i=0,size=0;
    printf("Enter sentence : ");
    fgets(sentence,100,stdin);
    printf("%s",sentence);
    while(sentence[i]!=0){
        size++;i++;}
    search(sentence,size);
    puts("");
    reverseSearch(sentence,size);
return 0;
}
void search(char *snt,int size){
    int counter=0;
    for(int i=0 ; i<size ; i++){
        if(snt[i]==0) break;
        snt[i] = (int)snt[i] + 10;
    }for(int i=0 ; i<size ; i++){
        if(snt[i]>=97 && snt[i]<=122){
            counter++;
        }
    }printf("%s%d%d",snt,size-1,counter);
}void reverseSearch(char *snt,int size){
    for(int i=0 ; i<size ; i++){
        if(snt[i]==0) break;
        snt[i] = (int)snt[i] - 10;
    }printf("%s",snt);
}
