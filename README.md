# CPE-practice

## 已完成

| 題號 | 題目 | 題型 | 難度 | 狀態 |
|------|------|------|:----:|:----:|
| UVA100 | The 3n + 1 Problem | 模擬 | ★☆☆☆☆ |  AC |
| UVA007 | TeX Quotes | 字串處理 | ★☆☆☆☆ |  AC |



# Git 常用指令

## 每次刷題流程

1. 建立 `UVAxxxx` 資料夾。
2. 撰寫 `main.cpp`。
3. 更新 `README.md`（刷題進度）。
4. 更新該題 `README.md`（題目筆記）。
5. 執行：

```bash
git add .
git commit -m "Solve UVAxxxx"
git push
```

## 第一次下載 Repository（只需要一次）

```bash
git clone https://github.com/你的帳號/CPE-practice.git
cd CPE-practice
```

## 每次開始寫題目前
查看目前狀態：

```bash
git status
```

## 寫完一題後

### 1. 加入所有變更

```bash
git add .
```
### 2. 建立 Commit

    ```bash
git commit -m "Solve UVA100"
```

> 將 `UVA100` 改成目前完成的題號。

例如：

```bash
git commit -m "Solve UVA118"
git commit -m "Solve UVA10055"
```
### 3. 上傳到 GitHub

```bash
git push
```

---


## 查看歷史紀錄

```bash
git log --oneline
```


## 查看目前有哪些變更

```bash
git status
```




