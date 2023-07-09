#requirements
#pip install pypng
#pip install PyQRCode


import pyqrcode
import png
from tkinter import *


#main function
def get_code():
    data_var = data.get()
    qr = pyqrcode.create(str(data_var))
    qr.png('QR.png', scale=6)
    
#Window Size 
base = Tk()
base.geometry("350x200")
base.title("Text to QR Generator: ")

#QR var
data = StringVar()

#input 
dataEntry = Entry(textvariable=data, width="30")
dataEntry.place(x=80,y=50)

#button to funvtioon
button = Button(base,text="Press This",command=get_code,width="30",height="2",bg="grey")
button.place(x=80,y=100)

base.mainloop()