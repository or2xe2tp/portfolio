#requirements
#pip install pypng
#pip install PyQRCode
# This code is to convert text into QR code with a GUI interface using python and tkinter
#Author = or2xe2tp


import pyqrcode
import png
from tkinter import *

#main function
def qrtxt():
    data_var = data.get()
    qr = pyqrcode.create(str(data_var))
    qr.png('result.png', scale=6)
    
#tinker window
box = Tk()
box.geometry("350x200")
box.title("Paste your txt")

#QR var
data = StringVar()

#data text entry
databox = Entry(textvariable = data, width="30")
databox.place(x=80,y=50)

#returns to fuction qrt() after the button is pressed 
button = Button(box,text="Press Here",command=qrtxt,width="30",height="2",bg="green")
button.place(x=80,y=100)
box.mainloop()
