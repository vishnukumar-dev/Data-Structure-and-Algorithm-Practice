#include<bits/stdc++.h>
# include "TrieNode.h"
using namespace std;

class Trie{
    TrieNode * root;
     public:
        Trie(){
            root = new TrieNode('\0');
        }

        void insertWord(TrieNode * root ,string word){
            // Base Case
            if(word.size() == 0){
                root->isTerminal = true;
                return;
            }

            //small calculation
            int index = word[0]-'a';
            TrieNode * child;
            if(root->children[index] != nullptr){
                child = root->children[index];
            }
            else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }

            // recursive call
            insertWord(child, word.substr(1));
        }

        void insertWord(string word,)
};