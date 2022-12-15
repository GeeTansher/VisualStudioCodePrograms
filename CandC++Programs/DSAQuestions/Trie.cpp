#include<iostream>
using namespace std;
struct node
{
    struct node *letters[26];
    int isWord;
    node(){
        isWord = 0;
        for(int i=0;i<26;i++){
            letters[i] = NULL;
        }
    }
};

class Trie{
    node* root;
    public:
    Trie(){
        root = new node();
        // cout<<root->isWord<<endl;
        // for(int i=0;i<26;i++){
        //     if(root->letters[i] == NULL)
        //         cout<<root->letters[i]<<" ";
        // }
    }

    void insertWord(string word){
        node* temp = root;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(temp->letters[word[i] - 'a'] == NULL)
                temp->letters[word[i]-'a'] = new node();
            temp = temp->letters[word[i]-'a'];
        }
        temp->isWord = 1;
    }

    bool search(string word){
        node* temp = root;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(!temp->letters[word[i]-'a'])
                return false;
            temp=temp->letters[word[i]-'a'];
        }
        return temp !=NULL && temp->isWord;
    }

    void simpleDeleteWord(string word){
        node* temp = root;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(!temp->letters[word[i]-'a'])
                return;
            temp=temp->letters[word[i]-'a'];
        }
        temp->isWord=false;
    }
};

int main(){
    Trie trie;
    trie.insertWord("amaze");
    trie.insertWord("amazon");
    if(trie.search("amazon"))    cout<<"Present";
    else    cout<<"Not present";
    return 0;
}