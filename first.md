 # <font face="仿宋" font color=orange >视觉算法组考核</font>
 ## <center>23211121-陈冠宇</center>
 ### P1Git

 ### P2Linux
1. **task1命令行**
    1. echo返回后面内容的返回值，$SHELL是个变量名，内容为SHELL编译器的地址
    2. mkdir产生文件夹under
    3. 
    4. touch产生文件in
    5. echo回环，>是覆盖输入，>>是追加，且自带换行[![pASPqnP.png](https://s21.ax1x.com/2024/08/09/pASPqnP.png)](https://imgse.com/i/pASPqnP)
    6. ./直接执行，执行失败，反馈不允许
    7. 用sh ./执行成功[![pASicCQ.png](https://s21.ax1x.com/2024/08/09/pASicCQ.png)](https://imgse.com/i/pASicCQ)
    8. chmod +x增加文件执行权限后可执行。
    9. 用以上方式就不需要键入了。同时，./就可以运行而不用sh显示运行是因为在执行文件首行有标注编译器的位置。[![pASi4bV.png](https://s21.ax1x.com/2024/08/09/pASi4bV.png)](https://imgse.com/i/pASi4bV)
    10. 显示最后一次编辑的日期
    11. 显示温度，没成功[![pASip1s.png](https://s21.ax1x.com/2024/08/09/pASip1s.png)](https://imgse.com/i/pASip1s)
2. **task2markdown**


3. **task3cmake**
    配置+构建后运行项目[![pASFVqP.png](https://s21.ax1x.com/2024/08/09/pASFVqP.png)](https://imgse.com/i/pASFVqP)
4. **opencv**    
用可执行文件显示图片，源码在另一个文件
[![pAAcS1g.png](https://s21.ax1x.com/2024/08/29/pAAcS1g.png)](https://imgse.com/i/pAAcS1g)

### P3ROS
发布者代码：
1. 用msg实现自定义的结构体，并封装在自定义的cordinate.h中。
2. 用NodeHandle变量定义句柄，并写入两变量。其中"transport"为本次通信的名称
3. 循环发布
[![pAAce9U.png](https://s21.ax1x.com/2024/08/29/pAAce9U.png)](https://imgse.com/i/pAAce9U)

订阅者代码：
1. 定义接收的回调函数，并在主函数把这个函数传入结构体
2. ros::spin()使不断循环接收，并调用1中定义的回调函数
[![pAAcm3F.png](https://s21.ax1x.com/2024/08/29/pAAcm3F.png)](https://imgse.com/i/pAAcm3F)

launch文件及实现接收的效果：
[![pAAcujJ.png](https://s21.ax1x.com/2024/08/29/pAAcujJ.png)](https://imgse.com/i/pAAcujJ)