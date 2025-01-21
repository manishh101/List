#include<iostream>

using namespace std;
struct queue{
  int size = 10;
  int rear;
  int front;
  int* Q;
};

void create(struct queue* q){
   q->front = q->rear = -1;
   q->Q =  new int[q->size];

}

void Insert(struct queue* q,int key){
  if(q->rear  == q->size -1) cout<<"queue is full";
  else{
    q->rear++;
    q->Q[q->rear] = key;
  }
 
  
}

int Delete(struct queue* q){
  int t = -1;
  if(q->front == q->rear) cout<<"Please insert";
  else{
    q->front++;
    t = q->Q[q->front];

    
  }

  return t;
}

void Display(struct queue q){
  for(int i = q.front+1 ; i<=q.rear;i++){
    cout<<q.Q[i]<<" ";
  }
}

int main(){

;  struct queue q;
  create(&q);
  Insert(&q,1);
  Insert(&q,2);
  Insert(&q,3);
  Delete(&q);

  Display(q);


  return 0;
}