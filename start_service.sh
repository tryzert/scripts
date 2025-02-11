#!/bin/bash
# 自启动脚本

echo -e " 通过添加 -stop 参数，以关闭所有运行的服务...\n";


# 定义要创建的tmux会话及其对应的程序命令
sessions=(
    "netspeed:net_speed_test.py"
    "fs:~/test/others/fs"
)

# 循环创建会话并在其中运行程序
for session_cmd in "${sessions[@]}"; do
    session_name=$(echo "$session_cmd" | cut -d':' -f1)
    program_cmd=$(echo "$session_cmd" | cut -d':' -f2)

	if [ "$1" = "-stop" ]; then
		tmux kill-session -t "$session_name" > /dev/null 2>&1
		echo " 已停止运行： ${session_name}"
	else
		# 创建新的tmux会话并在其中运行程序
		tmux new -d -s "$session_name" "$program_cmd" > /dev/null 2>&1
		echo " 正在运行： ${session_name}"
	fi
done
