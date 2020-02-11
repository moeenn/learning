import pandas
import matplotlib.pyplot as plot

raw_data = pandas.ExcelFile('data.xlsx')
incident_data = raw_data.parse(u'Table 3', skiprows=11, skipfooter=12)

incident_data.drop(["Unnamed: 1", "ICD-10 Code3", "Unnamed: 3", "All persons"], axis=1, inplace=True)
incident_data.rename(columns={u"ICD-10 Description": u"Description"}, inplace=True)
incident_data.dropna(inplace=True)
print(incident_data)

incident_data.set_index('Description', inplace=True)

incident_data.plot.bar(rot=90)
plot.show()
