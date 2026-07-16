# UVA100 - The 3n + 1 Problem


## 題目簡述
- 給定兩個整數 i 和 j ，計算區間內每個數字的 CycleLength(循環長度)，並找出最大的 CycleLength 。
- CycleLength 的規則
    - n = 1 時停止。
    - n % 2 == 1 時：n = 3n + 1。
    - n % 2 == 0 時：n = n / 2。
    - 每執行一次規則，CycleLength 加 1。
- 最後輸出原本輸入的 i , j ，及該區建最大的 CycleLength 。 

## 題型
- 模擬(simlation)
- 數學
- 迴圈

## 解題思路
1. cin兩個整數 i,j (範圍)
2. 找出 i,j 的 Max 當作 Start ; Min 當作 End
3. 對區間每一個數字計算 CycleLength 。
4. 比較出最大的 CycleLength 。
5. cout i,j 和 MaxCycleLength 。

## 易錯
- 先找出 Start (Min) 和 End (Max) 。
- CycleLength 從 1 開始算(含自己)。
- 使用 longlong 避免 3n+1 溢位。

## 結果
- Status：Accepted (AC)

## 完成日期
- 2026/07/07
