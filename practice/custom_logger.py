import sys
from datetime import datetime



class Logger:
    def __init__(
        self,
        out_stream,
        time_formatter
    ) -> None:
        self.out_stream = out_stream
        self.time_formatter = time_formatter


    def log(self, text: str):
        time = datetime.now().strftime(self.time_formatter)
        self.out_stream.write(f"[{time}] {text}\n")
