#include <iostream>

using namespace std;

string format =""; 
struct node
{
    node* left;
    node* right;
    node* parents;
    int   key;
    /* data */

    node() {}
    node(int key, node* parents): key(key), parents(parents), left(NULL), right(NULL) {}
};

node* find(node* no, int key){
    if(no == NULL){
        return NULL;
    }else{
        if(no->key == key){
            return no;
        }else if(no->key > key){
            return find (no->left, key);
        }else{
            return find (no->right, key);
        }
    }

}

node* insert(node* no, node* noPai, int key){
    if(no == NULL){
        return new node(key, noPai);
    }else{
        if(no->key > key){
            no->left = insert (no->left,no, key);
        }else if(no->key < key){ 

            no->right = insert (no->right,no, key);
        }
        return no;
    }
}
node* getSuccesssor(node* deletar){
   
    node * atual = deletar;
    while(atual->left != NULL)
    {
        atual = atual->left;
    }
    return atual;
}
node* getAntecesssor(node* deletar){
   
    node * atual = deletar;
    while(atual->right != NULL)
    {
        atual = atual->right;
    }
    return atual;
}

node* deletar(node* no, int key){
    if(no == NULL)
        return no;
    if(no->key > key)
        no->left =  deletar (no->left, key);
    else if(no->key < key)
            no->right = deletar (no->right, key);
    else{
        if(no->left == NULL && no->right == NULL)
            return NULL;
        else if(no->left == NULL){
            node* aux = no->right;
            delete no;
            return aux;
        } else if(no->right == NULL){
            node* aux = no->left;
            delete no;
            return aux;
        }else{
            node * aux = getAntecesssor(no->left);
            no->key = aux->key;
            no->left = deletar(no->left, aux->key);
        }                
    }
    return no;
}

void inorder(node* no){
    if(no != NULL){
        if(no->left!= NULL)
            inorder(no->left);

        format+=to_string(no->key)+" ";

        if(no->right!= NULL)
            inorder(no->right);
    }
}

void preOrder(node* no){
    if(no != NULL){
        
        format+=to_string(no->key)+" ";

        if(no->left!= NULL)
            preOrder(no->left);
        if(no->right!= NULL)
            preOrder(no->right);
    }
}

void posOrder(node* no){
    if(no != NULL){

        if(no->left!= NULL)
            posOrder(no->left);
          
        if(no->right!= NULL) 
            posOrder(no->right);

        format+=to_string(no->key)+" ";

    }
}

int main(){

    node* root =  NULL;
    int key;
    string letra;

    while(cin>>letra){
        if(letra == "I"){
            getchar();
            cin>>key;
            if(root == NULL){
                root = new node();
                root->left=NULL;
                root->right=NULL;
                root->key = key;
            }
                root = insert(root, root->parents, key);
            
        }else{
            if(letra == "P"){
                cin>>key;
                node* aux = find(root, key);
                if(aux == NULL){
                    cout<<key<<" nao existe"<<endl;
                }else{
                    cout<<key<<" existe"<<endl;
                }
            }else
            {
                if(letra =="R")
                {
                    getchar();
                    cin>>key;
                    root = deletar(root, key);
                }
                else{
                    if(letra == "INFIXA"){
                        format="";
                        inorder(root);
                        cout<<format[0];
                        for (size_t i = 1; i < format.length(); i++)
                        {
                                if(format[i] != ' ')
                                    cout<<format[i];
                                else
                                    if(i+1 != format.length())
                                       cout<<" ";
                        }
                        cout<<endl;
                    }else{
                        if(letra == "PREFIXA"){
                            format="";

                            preOrder(root);
                            cout<<format[0];
                            for (size_t i = 1; i < format.length(); i++)
                            {
                                if(format[i] != ' ')
                                    cout<<format[i];
                                else
                                    if(i+1 != format.length())
                                       cout<<" ";
                            }
                            cout<<endl;
                        }else{
                            format="";
                            posOrder(root);
                            cout<<format[0];
                            for (size_t i = 1; i < format.length(); i++)
                            {
                                if(format[i] != ' ')
                                    cout<<format[i];
                                else
                                    if(i+1 != format.length())
                                       cout<<" ";
                            }
                            cout<<endl;
                        }
                    }
                }
            }
            
        }
    }
}
