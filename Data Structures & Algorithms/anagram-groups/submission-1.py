class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mat = defaultdict(list)
        for word in strs:
            count = [0] * 26
            for c in word:
                count[ord(c) - ord('a')] += 1
            mat[tuple(count)].append(word)
        return list(mat.values())
        
        