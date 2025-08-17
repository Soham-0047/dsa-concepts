#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class bt{
    public:
    int data;
    bt *left;
    bt *right;
    // bt *next;
    // bt();
    //Parametarized constructor
    bt(int value){
       this->data = value;
       this->left = this->right = NULL;

    }
    
};

void insert2(bt *root1,int data){
    queue<bt*>q1;
    //!root
    q1.push(root1);
    bt *tmp = new bt(data);

    while(!q1.empty()){
        bt *ptr = q1.front(); //store the front element of the queue
        q1.pop(); //Popped out the element

        //check whether any left child element of ptr is present
        //If present then push into the queue
        if(ptr->left!= NULL){
            q1.push(ptr->left);
        }
        //otherwise set ptr->left to new element
        else{
            ptr->left = tmp;
            return;
        }
         //check whether any right child element of ptr is present
        //If present then push into the queue
        if(ptr->right != NULL){
            q1.push(ptr->right);
        }
        else{
            ptr->right = tmp;
            return;
        }


    }
     q1 = queue<bt*>(); //delete the queue using assignment
}

void deletequ(queue<bt*>&q){
    queue<bt*>empty;
    swap(q,empty);

}
//searching element in binarytree


//level order traversal

void levelorder(bt *root){
    bt *tmp;
    queue<bt*>q;
    if(!root)return;
    q.push(root);
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        cout<<tmp->data<<" ";
        if(tmp->left)
        q.push(tmp->left);
        if(tmp->right)
        q.push(tmp->right);




    }

    deletequ(q);
 }


int searchelementtree(bt *root,int value){
    int ptr;
    int count =0;
    if(!root){
        return 0;
    }
    else{
        if(value == root->data){
            return 1;
        }
        else{
            ptr = searchelementtree(root->left,value);
            if(ptr != 0)
                count++;
                return count;
            ptr = searchelementtree(root->right,value);
        }
    }
    return 0;
}





void preorder(bt *root){
    if(root){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    cout<<"hi"<<endl;
    bt *root = new bt(23);
     insert2(root,12);
     insert2(root,78);
     insert2(root,312);
     insert2(root,748);
    
   
     preorder(root);
     cout<<endl;
     cout<<searchelementtree(root,32)<<endl;
     levelorder(root);
    
    

}




