
## cmd下建立新的windows用户以及提权
注意win7、win8下需要你的CMD有管理员去权限不然无法使用net use命令

Tips：一定要有管理员权限

```cmd

//1、添加新用户，名称：who，密码：123
PS C:\WINDOWS\system32> net user who 123 /add
命令成功完成。

//2、将用户who从“本地用户组”加入“管理员组”去
PS C:\WINDOWS\system32> net localgroup Administrators who /add
命令成功完成。

//以上说明了这个账号已经有管理权限了，可是还别高兴。因为这个账号还没有激活，所以还是无法使用的。

//激活新建的账号who
PS C:\WINDOWS\system32> net user who /active:yes
命令成功完成。

重启电脑后，可以用刚才添加的账号登陆系统了
```


## 管理员权限打开的方法

```cmd
Ctrl+X 然后用A
```

