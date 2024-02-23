//Chracter based string
#include<stdio.h>
int main(){

//scanf()

    char a[1000];
scanf("%s",&a); // this is right   //ONLY FEASIBLE to scan till a space or newline.
//scanf("%s",a);  // this is also right.
    printf("%s",a);

//scanf("%[^USER_DEF]s",&a); // scans untill mentioned value is encountered : USER_DEF replaced with required stopping value
    scanf("%[^\n]s",&a); // will scan till new line.
    printf("%s",a);

    scanf("%[^.]s",&a); // will scan till "." is encountered
    printf("%s",a);

    scanf("%[^A-Z]s",&a);  // will scan untill an Uppercase character b/w A and Z is encountered.scanf("%[^\n]s",&a); // will scan till new line.
    printf("%s",a);

//scanf("%[val1,val2,val3]s",&a); // scans only metioned values : val1, val2, val3 ; stop scanning when another value is encountered
    scanf("%[a-z,A-Z,0-9]s",&a);scanf("%[^\n]s",&a); // will accept only values A-Z, a-z, 0-9 , will stop when any other char is encountered.
    printf("%s",a);

//gets()  
    gets(a); // will scan untill newline
    printf("%s",a);

// fgets() -- predecessor of scanf
    fgets(a,14,stdin);  // scans untill newline
    // fgets(char-array-name , size_of_input_limit+1,file stream)

}