# 点积

算法：如果$`x, y \in \mathbb{R}^n`$，此算法计算点积$`c = x^T y`$.

```matlab
c = 0
for i = 1:n
    c = c + x(i)y(i)
end
```

时间复杂度：$`T = (1 + 1)\times n = 2n = O(n)`$

空间复杂度：$`S = sizeof(double) = O(1)`$

---
[父目录:矩阵乘法](../ReadME.md)
