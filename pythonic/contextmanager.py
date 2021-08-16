def stop_database():
    print("systemctl stop pgsql")


def start_database():
    print("systemctl start pgsql")


class DBHandler:
    def __enter__(self):
        stop_database()
        return self

    def __exit__(self, exec_type, ex_value, ex_traceback):
        start_database()


def db_backup():
    print("pgdump database")


def main():
    with DBHandler():
        db_backup()

if __name__ == "__main__":
    main()
