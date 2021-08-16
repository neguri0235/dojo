import contextlib


def stop_database():
    print("systemctl stop pgsql")


def start_database():
    print("systemctl start pgsql")


def db_backup():
    print("pgdump database")


@contextlib.contextmanager
def db_handler():
    stop_database()
    yield
    start_database()


with db_handler():
    db_backup()
