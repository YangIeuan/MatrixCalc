# SAXPY
**解释**：标量乘以向量再加上向量

算法：给定$`x,y \in \mathbb{R}^n`$和$`a \in \mathbb{R}`$，此算法用$`ax + y`$覆盖$`y`$
```matlab
for i = 1:n
    y(i) = ax(i) + y(i)
end
```

时间复杂度：$`T = (1 + 1 + 1) \times n = O(n)`$

空间复杂度：$`S = 0`$

---
[父目录:矩阵乘法](../ReadME.md)