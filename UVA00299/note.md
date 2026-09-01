# UVA299 - Train Swapping


## 題目簡述
- 給定一列火車車廂的排序，每次只能交換相鄰車廂，求將車廂排序成遞增順序需的最少交換次數。
- (給你一串亂掉的數字，每次只能交換相鄰的兩個數字，換成遞增的順序，求最少的交換次數)

## 用到的觀念
- `Array`(陣列)：儲存車廂順序
- `Bubble Sort`

## 題型
- `Simulation`(模擬)
- `Sorting`(排序)

## 解題思路
1. 讀入測資
2. 進行`Bubble Sort`
3. 計算次數(`count++`)

## 易錯
- `i`是第幾輪，`j`是目前比較到哪一組相鄰元素。

## 結果
- Status：Accepted (AC)

## 完成日期
- 2026/08/08

## 測資範例
### Input
```
3
3
1 3 2
4
4 3 2 1
2
2 1
```
### Output
```
Optimal train swapping takes 1 swaps.
Optimal train swapping takes 6 swaps.
Optimal train swapping takes 1 swaps.
```