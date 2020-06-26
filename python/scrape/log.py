from datetime import datetime

class Log:
	def __init__(self, file="log.txt"):
		self.file = file

	def __currentTime(self):
		now = datetime.now()
		now = now.strftime("%Y:%m:%d - %H:%M:%S")
		return now

	def write(self, message, obj):
		with open(self.file, "at") as file:
			msg = f"{self.__currentTime()}\t{message}{obj}\n"
			print(msg, end="")
			file.write(msg)