class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        n = ((n >> 1) & 0x55555555u) | ((n & 0x55555555u) << 1);
        n = ((n >> 2) & 0x33333333u) | ((n & 0x33333333u) << 2);
        n = ((n >> 4) & 0x0f0f0f0fu) | ((n & 0x0f0f0f0fu) << 4);
        n = ((n >> 8) & 0x00ff00ffu) | ((n & 0x00ff00ffu) << 8);
        n = ((n >> 16) & 0xffffu) | ((n & 0xffffu) << 16);
        return n;
    }
};