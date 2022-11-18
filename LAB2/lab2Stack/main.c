#include <stdio.h>
#include <stdlib.h>
#include stack.h

int main()
{
   //creating variables from this stack
   //fun stack hat5ud meny l stack bta3y w l data eli 3aiza a pushha 3l stack bta3y
   //w func pop 3shan a pop l func bta3yy
   // 3aiz tare2aa a keep om track with the top of the stack variable ana wa2f feen fl stack aw l index dlw2ty

   //l qyma top dlw2ty b garpage fa l mafrud a3ml intialization


   //intialize b 0 (lw l top blnsbalk awl makan fadyy ) or -1  (lw l top blnsbalk a5r makan malyan )
   Stack stk{.top = -1 };
   push(&stk,10);
   push(&stk,20);
   push(&stk,30);
   //int num = pop (&stk);


   //zi ma hab3t ll pop 3nwan l stack hab3tlu kman 3nwan l variable bta3yyy
    int num ;
     if (Pop (&stk, &num))
     {
        //lw da5lt gwa l pop hatrg3lyy
     }
     else
     {

     }


        ;

    return 0;
}
