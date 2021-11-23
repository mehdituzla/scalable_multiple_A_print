#include <stdio.h>

void printerA(int height, int row);

int main() {

    //Enter the height parameter (this number should be odd)
    int height = 7;

    //Enter how many letter you want to show
    int letterCount = 3;

    //In this code I formulated writing the letter A.
    //The function works with two parameter; height and row.
    //Every time it writes just 1 line.
    //So in here, this loop starts with the first row and finishes with the last row.
    for(int row = 1; row <= height; row++){

        //To write more than one letter, there is another loop.
        for (int j = letterCount; j > 0 ; j--) {
            printerA(height, row);
        }

        //Next row
        printf("\n");
    }

    return 0;
}


// This is the function that print the letter A
// This function writes just one row every time, so it process row by row.
// Every output will be just one line of the letter A with given parameters.
// For example if the parameters are height: 5 and row: 3 then, this function's
// output will be the just 3th row of the letter A which has total height of 5 rows.
void printerA(int height, int row){

    //In every row, there is a need to place empty spaces.
    // In this code the "spacer" variable used for this purpose.
    //Every rows' space count is equal to "height - row"
    int spacer = height-row;

    //Loop for placing empty spaces to the beginning of the line
    for (int j = spacer; j > 0; j--) {
        printf(" ");
    }


    //Middle row's formula is "(height + 1) / 2".
    //If the current row is the middle row then this code works
    if(row==(height+1)/2){

        //Middle row width is equal to the height parameter every time.
        //For example; if the height is 5 then, middle row contains 3 "*"
        // and 2 empty space, if the height is 7 then, middle row contains
        // 4 "*" and 3 empty space.
        //So this loop works depending on the height variable.
        for (int j = height; j > 0; j--) {

            if(j%2==1){
                printf("*");
            } else{
                printf(" ");
            }
        }
    }

    //If the current row is not equal to middle row then, this code works
    //This code's purpose is to place "*" first and last field
    //of the middle area of the row.
    //The remaining space after removing the required
    // spaces from the beginning and end of the line
    else{
        for (int j = row*2-1; j > 0; j--) {
            if(j == row * 2 - 1){
                printf("*");
            }else if(j==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
    }

    //Loop for placing empty spaces to the end of the line
    for (int j = spacer; j > 0; j--) {
        printf(" ");
    }

    //Extra empty space
    //printf(" ");

}
