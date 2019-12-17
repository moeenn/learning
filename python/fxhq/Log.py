class Log:
	def __init__(self, filename):
		self.filename = f'./logs/{filename}'

	def write(self, message):
		if isinstance(message, list):
			with open(self.filename, 'at') as log:
				for line in message:
					log.write(f'{line}\n')

		else:
			with open(self.filename, 'at') as log:
				log.write(f'{message}\n')