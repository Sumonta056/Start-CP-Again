class Solution {
  public:
      string mergeAlternately(string word1, string word2) {
  
          string merged = "";
  
          int word1Length = word1.size();
          int word2Length = word2.size();
  
          int minimunSizeBetween = min(word1Length, word2Length);
          int indexWord1 = 0, indexWord2 = 0;
  
          for (int i = 0; i < minimunSizeBetween; i++) {
              merged += word1[indexWord1];
              indexWord1++;
  
              merged += word2[indexWord2];
              indexWord2++;
          }
  
          while (indexWord1 < word1Length) {
              merged += word1[indexWord1];
              indexWord1++;
          }
  
          while (indexWord2 < word2Length) {
              merged += word2[indexWord2];
              indexWord2++;
          }
  
          return merged;
      }
  };