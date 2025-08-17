#include <queue>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>




using namespace std;

class bt
{
public:
    int data;
    bt *left;
    bt *right;

    bt(int value)
    {
        this->data = value;
        this->left = this->right = NULL;
    }
};

/*bt* insertintree(bt *root,int value){
    bt *new1 = new bt(value);
    if(root == NULL){
        root = new1;

    }
    else{
        if(root->left == NULL){
            root->left = new1;
        }
        else if(root->left != NULL){
            root->left = insertintree(root->left,value);
        }
        else if(root->right == NULL){
            root->right = new1;
        }
        else{
            root->right = insertintree(root->right,value);
        }
    }
    return root;

}
*/
void preorder(bt *root)
{
    if (!root)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(bt *root)
{
    if (!root)
        return;

    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}

// Find maximum element in tree
int maxpvalue(bt *root)
{

    if (root == NULL)
        return INT_MIN;

    int rootval = root->data;
    int left = maxpvalue(root->left);
    int right = maxpvalue(root->right);
    if (left > rootval)
    {
        rootval = left;
    }
    if (right > rootval)
    {
        rootval = right;
    }
    return rootval;
}

// Find the maximum element without recursion
// Queue
void deleteq(queue<bt *> &q)
{
    queue<bt *> empty;
    swap(q, empty);
}

int findmaxwithoutrecursion(bt *root)
{
    queue<bt *> q;
    bt *tmp = NULL;
    int max = INT_MIN;

    if (root == NULL)
        return INT_MIN;
    q.push(root);
    while (!q.empty())
    {
        tmp = q.front();
        // cout<<tmp->data<<endl;
        q.pop();
        if (max < tmp->data)
        {
            max = tmp->data;
        }
        if (tmp->left)
        {
            q.push(tmp->left);
        }
        if (tmp->right)
        {
            q.push(tmp->right);
        }
    }
    deleteq(q);
    return max;
}

// Searching in binary tree

int findelementinbinarytree(bt *root, int value)
{
    int tmp;
    if (root == NULL)
        return 0;

    else
    {
        if (root->data == value)
            return 1;

        else
        {
            tmp = findelementinbinarytree(root->left, value);
            if (tmp != 0)
                return tmp;

            return findelementinbinarytree(root->right, value);
        }
    }

    return 0;
}

int findelementwithoutrecursion(bt *root, int value)
{
    queue<bt *> q;
    bt *tmp = NULL;
    q.push(root);
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();
        if (tmp->data == value)
        {
            deleteq(q);
            return 1;
        }
        if (tmp->left)
        {
            q.push(tmp->left);
        }
        if (tmp->right)
        {
            q.push(tmp->right);
        }
    }

    deleteq(q);
    return 0;
}

// Find the size of binary tree

int sizeofbinarytree(bt *root)
{
    if (root == NULL)
        return 0;

    return (sizeofbinarytree(root->left) + 1 + sizeofbinarytree(root->right));
}

// Implement size of binary tree without using recursion

int sizeofbinarytreewithoutrecursion(bt *root)
{
    queue<bt *> q;
    bt *tmp;
    int count = 0;
    if (root == NULL)
        return 0;

    q.push(root);
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();
        count++;
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }

    deleteq(q);
    return count;
}

void reverselevelordertraversal(bt *root)
{

    if (!root)
        return;

    stack<bt *> s;
    queue<bt *> q;
    bt *tmp;
    q.push(root);
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();
        if (tmp->right)
        {
            q.push(tmp->right);
        }
        if (tmp->left)
        {
            q.push(tmp->left);
        }

        s.push(tmp);
    }

    while (!s.empty())
    {
        tmp = s.top();
        s.pop();
        cout << tmp->data << endl;
    }
}

// Deleting a binary tree

int deletebinarytree(bt *root)
{
    if (root == NULL)
        return 0;

    deletebinarytree(root->left);
    deletebinarytree(root->right);

    // Current item
    free(root);
    return 1;
}

// height of binary tree
// T.C = O(n) and S.C = O(n)

int heightbinarytree(bt *root)
{
    int right, left;
    if (root == NULL)
        return 0;

    else
    {
        left = heightbinarytree(root->left);
        right = heightbinarytree(root->right);

        if (left > right)
            return (left + 1);

        else
        {
            return (right + 1);
        }
    }
}

// height of binary tree without recursion

// T.C  = O(n) and S.C = O(n)
int heightofbinarytreewithoutrecursion(bt *root)
{

    if (!root)
        return 0;
    int level = 0;
    queue<bt *> q;
    q.push(NULL);
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        if (root == NULL)
        {
            if (!q.empty())
                q.push(NULL);
            level++;
        }
        else
        {
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
        }
    }
    return level;
}

// Finding the deepest node in binary tree
int deepestnode(bt *root)
{
    if (!root)
        return 0;

    bt *tmp;

    queue<bt *> q;
    q.push(root);
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    deleteq(q);
    return tmp->data;
}

void swapintree(bt *tmp,bt *ptr){
    int olt = tmp->data;
    tmp->data = ptr->data;
    ptr->data = olt;
}

bt *findnode(bt *root, int value)
{
     bt *ptr;

    if (!root)
        return NULL;


    else
    {
        if (root->data == value)
            return root;
        else
        {
            ptr = findnode(root->left, value);
            if (!ptr)
                return ptr;

            findnode(root->right, value);
        }
    }
    return ptr;
}


void deletedeepestnode(bt* root,bt* dnode){

    queue<bt*>q;
    q.push(root);
    bt *tmp;
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        if(tmp == dnode){
            tmp = NULL;
            delete(dnode);
            return;
        }
        if(tmp->left){
            if(tmp->left == dnode){
                tmp->left = NULL;
                delete(dnode);
                return;
            }
            else{
                q.push(tmp->left);
            }
        }

         if(tmp->right){
            if(tmp->right == dnode){
                tmp->right = NULL;
                delete(dnode);
                return;
            }
            else{
                q.push(tmp->right);
            }
        }
    }
}

bt* deletionofnode(bt *root,int key){
    if(root == NULL) return NULL;

    if(root->left == NULL && root->right == NULL){
        if(root->data == key) return NULL;
        else return root;

    }

    queue<bt*>q;
    q.push(root);

    bt* tmp;
    bt* keynode = NULL; //node to be deleted

    while(!q.empty()){
        tmp = q.front();
        q.pop();

        if(tmp->data == key) keynode = tmp;

        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);

    }

    if(keynode != NULL){
        int d = tmp->data;
        deletedeepestnode(root,tmp);
        keynode->data = d;
    }

    return root;
}

int leafnodesofbinarytree(bt *root){
    if(!root)return 0;
    int count;
    bt* tmp;
    queue<bt*>q;
    q.push(root);
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        if(!tmp->left && !tmp->right) count++;

        else{
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
    deleteq(q);
    return count;
}

//NUmber of full nodes in binary tree

int numberoffullnodesinbinarytree(bt *root){
    if(!root)return 0;
    int count =0;
    int tmp =0;
    if(root->left && root->right) count++;
    //condition for half nodes
    //Nodes which have either right child or left not both

    if(!root->left&&root->right || root->left && !root->right) tmp++;

    if(root->left) numberoffullnodesinbinarytree(root->left);
    if(root->right)numberoffullnodesinbinarytree(root->right);

    // cout<<"Number of Full nodes "<<count<<" And number of half nodes "<<tmp<<endl;
    return tmp;
}

int number_of_halfnodes(bt* root){
     if(!root)return 0;
    int count=0;
    bt* tmp;
    queue<bt*>q;
    q.push(root);
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        if(!tmp->left&&tmp->right || tmp->left && !tmp->right) count++;

        else{
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
    deleteq(q);
    return count;
}


//Given binary trees structural identical or not

int Both_trees_are_identical(bt* root1,bt *root2){
    if(root1==NULL && root2 == NULL)return 1; //if both trees are null
    if(root1==NULL || root2==NULL)return 0;

    return (root1->data==root2->data && Both_trees_are_identical(root1->left,root2->left)&&Both_trees_are_identical(root1->right , root2->right));

}


//Algorithm to find diameter of binary tree

int height(bt *root){
    if(root==NULL)return 0;

    return 1+ max(height(root->left),height(root->right));
}

int diameter(bt *root){
    if(root ==NULL) return 0;

    int lheight = height(root->left);
    int rheight = height(root->right);
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);

    return max(lheight+rheight+1,max(ldiameter,rdiameter));
}

//Find the maximum sum in the binary tree

int findlevelwithmaxsum(bt *root){
    if(!root) return 0;

    bt *tmp;
    queue<bt*>q;
    q.push(root);
    q.push(NULL);
    int maxsum =0,cursum =0,curlevel =0,maxlevel =0;

    while(q.empty()){
        tmp = q.front();
        q.pop();

        if(tmp==NULL){
            if(cursum>maxsum){
                maxsum = cursum;
                maxlevel = curlevel;
            }
            cursum = 0;
            if(!q.empty()){
                q.push(NULL);
            }
            curlevel++;
        }
        else{
            cursum += tmp->data;
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
    return maxlevel;
}
void print(int *path,int pathlen){
    for(int i=0;i<pathlen;i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
void printpathrecur(bt *root,int *path,int pathlen){
    if(root==NULL)return;
    path[pathlen] = root->data;
    pathlen++;
    if(root->left ==NULL && root->right ==NULL){
        print(path,pathlen);
    }
    else{
        printpathrecur(root->left,path,pathlen);
        printpathrecur(root->right,path,pathlen);
    }
}

bt* LCA(bt *root,int a,int b){
    if(root == NULL)return NULL;
    if(root->data == a || root->data == b)return root;

    bt *llca = LCA(root->left,a,b);
    bt *rlca = LCA(root->right,a,b);

    if(llca && rlca) return root;

    return llca!=NULL?llca:rlca;

}
int main()
{
    bt *root = new bt(55);
    root->left = new bt(16);
    root->right = new bt(15);
    root->right->left = new bt(78);
    root->left->left = new bt(22);
    root->left->right = new bt(92);

    // insertintree(root,16);
    // insertintree(root,15);
    // insertintree(root,22);
    // insertintree(root,92);

    // cout << maxpvalue(root) << endl;
    // cout<<"Find maximum value without using recursion "<<findmaxwithoutrecursion(root)<<endl;

    // preorder(root);
    // cout << endl;
    postorder(root);

    // int n;
    // cout<<"\nEnter the value that you want to search in tree"<<endl;
    // cin>>n;

    // cout<<"\nfind "<<22<<" element in binary tree "<<findelementinbinarytree(root,22)<<endl;
    // cout<<"\nfind without using recursion "<<22<<" element in binary tree "<<findelementwithoutrecursion(root,22)<<endl;

    // cout<<"size of the binary tree "<<sizeofbinarytree(root)<<endl;

    // cout<<"size of the binary tree without using recursion "<<sizeofbinarytreewithoutrecursion(root)<<endl;

    // cout << "\n";
    // reverselevelordertraversal(root);

    // cout<<"Root is successfully deleted "<<deletebinarytree(root);

    // cout << "\nHeight of binary tree " << heightbinarytree(root) << endl;
    // cout << "Deepest node is " << deepestnode(root) << endl;

    // bt *ptr = findnode(root,16);
    // cout<<ptr->data;
    cout<<endl;
    
    // root = deletionofnode(root,16);
    // postorder(root);

    // cout<<"\nLeafnodes of following tree "<<leafnodesofbinarytree(root)<<endl;

    // cout<<numberoffullnodesinbinarytree(root)<<endl;
    // cout<<"NUmber of half nodes "<<number_of_halfnodes(root)<<endl;
    // cout<<"Diameter of tree "<<diameter(root)<<endl;
    // cout<<findlevelwithmaxsum(root)<<endl;

    int p[100];
    printpathrecur(root,p,0);
    cout<<LCA(root,22,92)->data<<endl;
    return 0;
}
