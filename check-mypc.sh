ps -aux
free -h 
df -h

ps -aux > check.mypc.txt
echo "==========================" >> check.mypc.txt
free -h >> check.mypc.txt
echo "==========================" >> check.mypc.txt
df -h >> check.mypc.txt
