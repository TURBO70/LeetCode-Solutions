#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class TrieNode {
public:
    array<TrieNode*, 26> children;
    string word;

    TrieNode() : word("") { children.fill(nullptr); }
};

class Trie {
public:
    TrieNode* root;

    Trie() : root(new TrieNode()) {}

    void addWord(const string& word) {
        TrieNode* cur = root;
        for (char c : word) {
            int index = c - 'a';
            if (!cur->children[index]) {
                cur->children[index] = new TrieNode();
            }
            cur = cur->children[index];
        }
        cur->word = word;
    }

    void getWords(TrieNode* node, vector<string>& result) {
        if (!node)
            return;
        if (!node->word.empty())
            result.push_back(node->word);
        for (auto child : node->children) {
            if (child)
                getWords(child, result);
        }
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> frequencyMap;
        vector<Trie*> buckets(words.size() + 1, nullptr);
        vector<string> topK;

        // Count word frequencies
        for (const string& word : words) {
            frequencyMap[word]++;
        }

        // Add words to buckets based on frequency
        for (const auto& [word, freq] : frequencyMap) {
            if (!buckets[freq]) {
                buckets[freq] = new Trie();
            }
            buckets[freq]->addWord(word);
        }

        // Retrieve top k words from buckets
        for (int i = buckets.size() - 1; i >= 0 && topK.size() < k; i--) {
            if (buckets[i]) {
                vector<string> wordsInBucket;
                buckets[i]->getWords(buckets[i]->root, wordsInBucket);

                // Sort words in lexicographical order
                sort(wordsInBucket.begin(), wordsInBucket.end());

                // Add words from the bucket to the result until top k is filled
                for (const string& word : wordsInBucket) {
                    if (topK.size() < k) {
                        topK.push_back(word);
                    } else {
                        break;
                    }
                }
            }
        }

        // Clean up dynamically allocated memory
        for (auto bucket : buckets) {
            delete bucket;
        }

        return topK;
    }
};