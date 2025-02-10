#!/bin/bash 

usersss=$(getent passwd | awk -F: '$3 >= 1000 {print $1}' | grep -v "nobody")
echo $usersss
for user in $usersss; do
    mail -s "new mail" "$user" < "$MAIL_TEMPLATE"
done

