# EC
open-source EC project from a cool guy ekknod with my own tweaks

## tweaks:
```
- aim lock on f9
```

# installing and running:
```
1. download zip from releases tab
2. unzip it somewhere
3. run cmd from admin and type "bcdedit set /testsigning on" and reboot pc
4. run cmd from admin again and type following:
 - sc create anyname binPath="pathto_km.sys" type=kernel (start=boot optional, to make driver run on windows boot without needing to start service)
 - sc start anyname
```