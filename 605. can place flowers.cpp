class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int l= flowerbed.size();
         if (n==0)
         return true;


         for(int i=0; i<l; i++){
             if(flowerbed[i]== 0){
                 bool left_khali= (i==0) || (flowerbed [i-1]==0);
                 bool right_khali = (i== l-1)|| (flowerbed [i+1]==0);


                 //flowerbed [i]
                 if (left_khali && right_khali){
                     flowerbed [i] =1;
                     n--;
                     if (n==0)
                     return true;
                 }
             }
         }
         return false;
    }
};
