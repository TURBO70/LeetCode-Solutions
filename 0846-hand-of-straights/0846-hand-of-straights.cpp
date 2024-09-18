class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> m;
        for (int i = 0; i < hand.size(); i++) {
            m[hand[i]]++;
        }
        if (hand.size() % groupSize != 0||hand.size() / groupSize!=groupSize) {
            return false;
        }
        for (auto y : m) {
            if (y.second > groupSize)
                return false;
        }
        return true;
    }
};