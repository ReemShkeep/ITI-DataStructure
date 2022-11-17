#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct Node Node;

struct Node
{
        int Data,
            Node *Prev, *Next;
};

Node *head = Null, *tail = Null;

void add(int data)
{
        /*Node newNode = malloc (Sizeof (Node));
        newNode.Data = data;

        manf3sh da 3shan m7tag a5leh yt7gz fl heap 3shan ma3rfsh
        ana m7tag kam node 3shan da 3la 7asb l user
        */
        // create new node
        Node *newNode = malloc(Sizeof(Node));
        newNode->Data = data;
        newNode->prev = newNode->Next = NULL; // intialization 3shan m3rfsh l7d dlw2tyy l node de fen

        // linking withh the linked list

        if (head == NULL)
        {
                head = tail = newNode
        }
        else
        {
                tail->Next = newNode;
                newNode->Prev = tail;
                tail = newNode;
                // lazm tb2aa a5r 5atwaa lw knt 3mltahaa fl awl knt hatdy3 aw ha8ir makan l tail fa kol eli eli gay kan hayb2a 8lt
        }
};
// after creating and adding to LL need to display it
void display()
{
        // bedytu
        Node *current = head;
        while (current != NULL)
        {
                // e3rdly l data eli byshwer 3leha l current dlw2ty
                printf('%d', current->Data); // 3    //5
                current = current->Next;

                // l current eli byshawer 3l next yb2a hwa l crnt bta3y dlw2ty
                // lazm a7dedlu l crnt bta3 anhy node
                printf('%d', current->Data); // 5   //9
                // l crnt lma y5tlf aked hayshawer 3la data mo5tlfa

                /* code */
        }
};

// tdeha data trg3lk l pointer eli byshwer 3l node eli feeh l data de
void GetNodeByData(int data)
{
        // bedytu
        Node *current = head;

        while (current != NULL)
        {
                if (data == current->Data)
                        // lw ahh hya l data eli btdwr 3leha
                        return current;
                // lw la2
                current = current->Next;
        }
        // kda wslt le nehyt l LL w mal2tsh eli ana bdwr 3leeh
        return NULL;
}

// btshel l data mn gwa l ll
void Remove(int data)
{
        // hast8l l fun bta3t l getbynode
        Node *node = GetNodeByData(data);
                //adding node was create then link so removing will be disconecct with other nodes then deallocated from memory 

        //lw hya null hwa asln edany data msh mwguda fl ll bt3ty 
        if ( node == Null )
                return;

                //3nd 3 e7tmalat wana bshel l node head/ tail/flnos
        if (node == head ){
        //2 senerio    3aiz tshelha w mfesh 8erha fl ll y3ni l ola wl a5era 
        // 3aiz tshelhah w waraha nas tania 
                if (head == tail)
                {
                        head = tail = NULL;
                }
                else{

                        // l head l gded hwa l current next w a5le l head l adem = null
                        // w fl single list h3ml awl 5atwa l tania msh far2a 3shan kdakda hya mabt7tfz.sh b makan l prev

                        head = head->Next;
                        head->prev = Null; // bt3ml deallocated
                };
        }
                }
                
        else if (node == tail ){
                // 2 senerio    3aiz tshelha w mfesh 8erha fl ll y3ni l ola wl a5era
                // 3aiz tshelhah w ablha nodes tania
        
                if (head == tail)
                // {
                //         head = tail = NULL;
                // }
                // else
                {
                        //l tail l adem hwa l current prev w a5le l tail l adem byshawe 3la null (=null)
                        //w fl single list h3ml awl 5atwa l tania msh far2a 3shan kdakda hya mabt7tfz.sh b makan l prev

                        tail = tail->Prev;
        }
                        tail->prev = Null; //bt3mlha deallocated 
        else {
        }
                };

/*

void GetNodeByIndex(int Data){
        Node *current = head;
        while (current != NULL)
        {
        if (data == current->Data)
                //lw ahh
                return current;
                //lw la2
        current = current->Next;

        }

}
*/
#endif // LINKEDLIST_H
