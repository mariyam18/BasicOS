#! /bin/bash

echo "---------- Displaying System Information & Load ----------"
echo "1) Top 10 Process In Descending Order =>"
ps -A|sort -r | head -n 10
echo " "
echo "2) Top 10 Processes With Highest Memory Usage"
ps -aux|head -n 10
echo " "
echo "3) Current Login"
who
echo " "
echo "4) "
echo "Current Shell
=> $SHELL"
echo "Home Directory
=> $HOME"
echo "OS Type
=> $OSTYPE"
echo "Current Path Setting
=> $PATH"
echo "Current Working Diretory => $PWD"
echo " "
echo "5) "
echo "OS Verision =>"
cat /proc/sys/kernel/ostype
echo "OS Release =>"
cat /proc/sys/kernel/osrelease
echo "OS Version =>"
cat /proc/sys/kernel/version




"""---------- Displaying System Information & Load ----------
1) Top 10 Process In Descending Order =>
  PID TTY          TIME CMD
 9886 ?        00:00:00 kworker/0:1
 9875 ?        00:00:00 kworker/2:2
  987 ?        00:00:01 irqbalance
  985 ?        00:00:00 avahi-daemon
  983 ?        00:00:00 lightdm
   98 ?        00:00:00 acpi_thermal_pm
 9761 ?        00:02:53 Web Content
   97 ?        00:00:00 kthrotld
 9487 ?        00:00:00 kworker/2:4
 
2) Top 10 Processes With Highest Memory Usage
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root         1  0.0  0.1 185588  6168 ?        Ss   09:36   0:02 /sbin/init splash
root         2  0.0  0.0      0     0 ?        S    09:36   0:00 [kthreadd]
root         4  0.0  0.0      0     0 ?        S<   09:36   0:00 [kworker/0:0H]
root         6  0.0  0.0      0     0 ?        S<   09:36   0:00 [mm_percpu_wq]
root         7  0.0  0.0      0     0 ?        S    09:36   0:00 [ksoftirqd/0]
root         8  0.0  0.0      0     0 ?        S    09:36   0:04 [rcu_sched]
root         9  0.0  0.0      0     0 ?        S    09:36   0:00 [rcu_bh]
root        10  0.0  0.0      0     0 ?        S    09:36   0:00 [migration/0]
root        11  0.0  0.0      0     0 ?        S    09:36   0:00 [watchdog/0]
 
3) Current Login
mariyam  tty7         2018-04-25 09:37 (:0)
 
4) 
Current Shell
=> /bin/bash
Home Directory
=> /home/mariyam
OS Type
=> linux-gnu
Current Path Setting
=> /home/mariyam/bin:/home/mariyam/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
Current Working Diretory => /home/mariyam/Desktop
 
5) 
OS Verision =>
Linux
OS Release =>
4.13.0-38-generic
OS Version =>
#43~16.04.1-Ubuntu SMP Wed Mar 14 17:48:43 UTC 2018
#
"""
