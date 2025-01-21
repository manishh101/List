
// 2. WAP TO REPRESENT QUEUE AS A LIST.

#include<iostream>
using namespace std;

int p[10]={1,2,3,4,5};

int Length(){
  int i=0;
  while(p[i]) i++;

  return i;
}

int Last(){
  
  return Length();
}

int Beginning(){
  return 1;
}


void Insert(int key,int pos){
  int t = key,i = 0;
  if(pos<=0 || pos>(Length()+1)) cout<<"enter correct position";
  else if(pos==1){
    for(int i = Length();i>pos-1;i--){
      p[i] = p[i-1];
    }
    p[0] = key;
   }
   else if(pos==Last()+1){
    p[pos-1] = key;
   }
   else{
    for(int i = Length();i>pos-1;i--){
      p[i] = p[i-1];
    }
    p[pos-1] = key;
   }
}

int Delete(int pos){
  int t=-1;

  if(pos<=0 || pos>Length()) cout<<"enter correct position";

  if(pos == 1){
    t = p[pos-1];

    for(int i = 0 ; i<Length();i++){
    p[i] = p[i+1];
  }
  }
  else if(pos==Last()){
   
    t = p[pos-1];
    p[pos-1] = 0;
  }
  else{
    t = p[pos-1];
    for(int i=pos-1;i<Length();i++){
      p[i] = p[i+1];
    }
  }

  
  

  return t;

}

void Display(){
  int i =0;
  while(p[i]){
    cout<<p[i]<<" ";
    i++;
  }
}



int main(){
 
  
  
  Insert(5,Last());
  // Delete(staticList,Last(staticList));
  // Delete(staticList,Beginning());

  Display();

}