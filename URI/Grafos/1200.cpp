#include <iostream>

using namespace std;

string format =""; 
struct node
{
    node* left;
    node* right;
    node* parents;
    string   key;
    /* data */

    node() {}
    node(string key, node* parents): key(key), parents(parents) {}
};

node* find(node* no, string key){
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

node* insert(node* no, node* noPai, string key){
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

node* deletar(node* no, string key){
    if(no == NULL){
        return NULL;
    }
    if(no->key > key){
        no->left =  deletar (no->left, key);
    }else{
        if(no->key < key){
            no->right = deletar (no->right, key);
        }else{
            if(no->left == NULL && no->right == NULL){
                return NULL;
            }
            else if(no->left == NULL){
                node* aux = no->right;
                delete no;
                return aux;
            } else if(no->right == NULL){
                node* aux = no->left;
                delete no;
                return aux;
            }
            node * aux = getSuccesssor(no->right);
            no->key = aux->key;
            aux = deletar(no->right, aux->key);
        }
        return no;
    }
}

void inorder(node* no){
    if(no != NULL){
        inorder(no->left);
        format+=no->key;
        inorder(no->right);
    }
}

void preOrder(node* no){
    if(no != NULL){
        
        format+=no->key;
        preOrder(no->left);
        preOrder(no->right);
    }
}

void posOrder(node* no){
    if(no != NULL){
        posOrder(no->left);
        posOrder(no->right);
        format+=no->key;

    }
}

int main(){

    node* root = new node();
    string key;
    string letra;

    while(cin>>letra){
            if(letra == "I"){
                cin>>key;
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
                }else{
                    if(letra == "INFIXA"){
                        format="";
                        inorder(root);
                        cout<<format[0];
                        for (size_t i = 1; i < format.length(); i++)
                        {
                            cout<<" "<<format[i];
                        }
                        cout<<endl;
                    }else{
                        if(letra == "PREFIXA"){
                            format="";

                            preOrder(root);
                            cout<<format[0];
                            for (size_t i = 1; i < format.length(); i++)
                            {
                                cout<<" "<<format[i];
                            }
                            cout<<endl;
                        }else{
                            format="";
                            posOrder(root);
                            cout<<format[0];
                            for (size_t i = 1; i < format.length(); i++)
                            {
                                cout<<" "<<format[i];
                            }
                            cout<<endl;
                        }
                    }
                }
            }
    }

   


}