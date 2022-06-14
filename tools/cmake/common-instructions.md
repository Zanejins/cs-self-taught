## cmake变量引用的方式
	前面我们已经提到了，使用了${}进行变量的引用。在IF等语句中，是直接使用变量名而不通过${}取值。

## cmake自定义变量的方式
	主要有隐式定义和显式定义两种，前面举了一个隐式定义的例子，就算PROJECT指令，他会隐式的定义<projectname>_BINARY_DIR和<projectname>_SOURCE_DIR两个变量。
	显式定义的例子我们之前也提到了，使用SET指令，就可以构建一个自定义变量了。

## cmake常用变量
 1. CMAKE_BINARY_DIR
	PROJECT_BINARY_DIR
	<projectname>_BINARY_DIR
	这3个变量指代的内容是一致，如果是in source编译，指得就算工程顶层的目录，如果是out-of-source编译，指得是工程编译发生的目录。PROJECT——BINARY——DIR跟其他指令稍有区别，现在，你可以理解他们是一致的。

 2. CMAKE_SOURCE_DIR
    PROJECT_SOURCE_DIR
	<projectname>_SOURCE_DIR
	这3个变量指代的内容是一致的，无论采用那种编译方式，都是工程顶层的目录。

 3. CMAKE_CURRENT_SOURCE_DIR
    指得是当前处理了的CMakeLists.txt所在的路径，比如上面我们提到的src子目录

 4. CMAKE_CURRENT_BINARY_DIR
    指得是
