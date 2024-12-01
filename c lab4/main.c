#include<sql.h>
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"
#include<stdio.h>

int main(){
    MYSQL *conn;
    conn = mysql_init(NULL);

    if (!mysql_real_connect(conn, "127.0.0.1", "m", "QTJKLas4321", "restaurant", 3306, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }   
}
