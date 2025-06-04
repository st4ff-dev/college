import sys
from datetime import datetime



def log(text: str):
    time = f"{datetime.now().strftime('%Y-%m-%d %H:%M:%S')}"
    sys.stderr.write(f"[{time}] {text}\n")
