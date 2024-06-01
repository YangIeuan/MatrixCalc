# GAXPY

解释：矩阵与向量相乘和

算法：假定$`A \in \mathbb{R}^{m\times n}`$，$`x \in \mathbb{R}^{n}`$和$`y \in \mathbb{R}^{m}`$，我们需要计算$`y = Ax + y`$。这是广义的SAXPY运算，此计算的常规方式是每次修正一个分量：$`y_i = \sum_{j=1}^na_{ij}x_j + y_i`$，$`i = 1:m`$。

行型：
```matlab
for i = 1 : m
    for j = 1 : n
        y(i) = A(i, j)x(j) + y(i)
    end
end
```

列型：
```matlab
for j = 1 : n
    for i = 1 : m
        y(i) = A(i, j)x(j) + y(i)
    end
end
```

时间复杂度：$`T = 2 * n * m = O(mn)`$
空间复杂度：$`S = 0`$

当语言以行存储向量时候，行型算法更高效；反之则是列型算法更高效。

行型GAXPY算法的每个内层循环都是一个点积运算，再加上标量；

列型GAXPY算法的每个内层循环都是一个SAXPY运算。

---
[父目录:矩阵乘法](../ReadME.md)
