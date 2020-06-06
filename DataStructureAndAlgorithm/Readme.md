# 编译命令

因为使用了makefile来做编译，但是vscode用的clangd插件需要compile_commands.json来指示编译步骤才能做提示，所以需要用intercept-build来生成compile_commands.json。

```
    intercept-build make debug
```

如果没有intercept-build的话，用以下命令安装：

```
    pip install scan-build
```