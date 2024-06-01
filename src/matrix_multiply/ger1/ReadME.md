# GER1：秩1修正

算法：对矩阵$`A\in \mathbb{R}^{m\times n}`$进行秩1修正（增加一个秩1矩阵，秩1矩阵都可分解为列向量$`x\in \mathbb{R}^m`$与行向量$`y\in \mathbb{R}^n`$的乘积）。具体步骤如下：

行型：
```matlab
for i = 1 : m
    for j = 1 : n
        A(i, j) = A(i, j) + x(i)y(j)
    end
end
```

从行向量的角度来看
```matlab
for i = 1 : m
    A(i,:) = A(i,:) + x(i)y
end
```

列型：
```matlab
for j = 1 : n
    for i = 1 : m
        A(i, j) = A(i, j) + x(i)y(j)
    end
end
```

从列向量的角度来看
```matlab
for j = 1 : n
    A(:,j) = A(:,j) + y(j)x
end
```

从上面的算法可以看出，无论是行型还是列型算法，每一个内层循环都可以看成是saxpy运算。