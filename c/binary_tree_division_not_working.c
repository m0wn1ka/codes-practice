#include <stdio.h>
#include <malloc.h>
struct node{
    int val;
    struct node *left;
    struct node *right;
}*parentnode,*temp,*tree,*temp2,*temp3;
struct node *create(){
      tree=(struct node *)malloc(sizeof(struct node));
    tree->val=0;
    tree->left=NULL;
    tree->right=NULL;
    return tree;
}
struct node *insert(struct node *tree,int val){
    if(tree==NULL){
        tree=(struct node *)malloc(sizeof(struct node));
        tree->val=val;
        tree->left=NULL;
        tree->right=NULL;
        return tree;
    }
    parentnode=tree;
    
        if(parentnode->val>val){
            parentnode->left=insert(parentnode->left,val);
            return tree;
        }
        else if(parentnode->val<val){
            parentnode->right=insert(parentnode->right,val);
            return tree;
        }
        else{
            return tree;
        }
    

}
void pre_order_traversal(struct node *tree){
    if(tree==NULL){
        return;
    }
    printf("%d\t",tree->val);
    pre_order_traversal(tree->left);
    pre_order_traversal(tree->right);
}
void in_order_traversal(struct node *tree){
    if(tree==NULL){
        return;
    }
    in_order_traversal(tree->left);
    printf("%d\t",tree->val);
    in_order_traversal(tree->right);
}
void post_order_traversal(struct node *tree){
    if(tree==NULL){
        return;
    }
    post_order_traversal(tree->left);
    post_order_traversal(tree->right);
    printf("%d\t",tree->val);
}
int smallest_element(struct node *tree){
    temp=tree;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->val;
}
int largest_element(struct node *tree){
    temp=tree;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->val;
}
void delete_node(struct node *tree,int val){
    temp=tree;
    if(temp==NULL){
        return ;
    }
    else if(val<temp->val){
        delete_node(temp->left,val);
    }
    else if(val>temp->val){
        delete_node(temp->right,val);
    }
    else if(temp->left==NULL && temp->right==NULL){
        temp=NULL;
        free(temp);
    }
    else if(temp->left==NULL ){
        temp->val=temp->right->val;
        temp->right=NULL;
        
        free(temp->right);
    }
    else if(temp->right==NULL){
        temp->val=temp->left->val;
        temp->left=NULL;
       
        free(temp->left);
    }
    else{
        temp3=temp->left;
    while(temp3->right!=NULL){
        temp3=temp3->right;
    }
    temp->val=temp3->val;
    delete_node(tree,temp3->val);
    
    }
    
}
int main(){
  
    
    
    printf("helo world");
    temp=create();
    tree=insert(tree,10);
    tree=insert(tree,5);
    tree=insert(tree,15);
    tree=insert(tree,19);
    tree=insert(tree,13);
    pre_order_traversal(tree);
    printf("\nin ordr \t");
    in_order_traversal(tree);
    printf("\n post order traversal\t");
    post_order_traversal(tree);
    printf("\n larget element is %d",largest_element(tree));
    printf("\n smallest elemtn is %d",smallest_element(tree));
    delete_node(tree,5);
    printf("after deleting in order traversal i s\n");
    in_order_traversal(tree);
    printf("done with code");
    return 0;
}