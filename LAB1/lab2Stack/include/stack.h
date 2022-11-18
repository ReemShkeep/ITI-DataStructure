#ifndef STACK_H
#define STACK_H
#define MaxStackSize 5


typedef struct Stack{

int Items[MaxStackSize];
int top;


}Stack;


void Push(Stack *s, int data)
 {
     if (s->top == MaxStackSize - 1)
        return;
     //azwed 3nd top eli bad2 b sfr
     s->top++
     //7atet 3nd l top l data eli gayaly mn bara
     s->Items[s->top] =data;
//Items list of array [s->top] da l item eli mtshawer 3leh dlw2ty fl top
     //yala nndah tani l7d ma awsl le nhayt l stack maynf3sh a7ut push tani 3shan l array fixed size
      //fat hatl3 fu2 a7ut condition if lw wa2f f a5r makan fl array w  ma2drsh a3ml push gdeda  if (s->top == MaxStackSize - 1)
 }





 /*
awl 5atwa a3mlha fl pop ageb l data mn gwa l stack eli l mafrud hatrg3
*/
int Pop (Stack *s , int *data  ){

    if(s->top == -1)
        return 0 ;
            //fl  return de 3aiza arg3 m3lomten hal 3mlyt l pop nag7t wla la2 w lw ng7t feen l data
             //a3ml flag return  0 yb2a 3mlyt l pop fashlet lw rag3t 1 t7t yb2a 3mlyt l pop nag7t w lw nag7t feen l data b2a



             //lw mafshletsh ru7 ll variable eli btshwer 3leh eli hwa data w 7ut qyma eli hay7salha pop mn l stack w rg3 true
        int *data =s->Items[s->top]
        //m7tag an2s l top w b3dha arg3 l data
        s->top-- ;
        //physically mwguda bs logically msh mwguda
        //hanfdl n3ml pop l7d maywsl l -1  wl pop maynf3sh fa hatl3 a3ml if fuuu2
        // lw rag3t 1 t7t yb2a 3mlyt l pop nag7t w lw nag7t feen l data b2a

            return 1;
}

#endif // STACK_H
