#RPi3 DALI Controller Application Interface
#DALI Interface Module to C DALI application
import tkinter as tk
from tkinter import *
from tkinter import ttk
import ctypes
_C_DALI_func = ctypes.CDLL('/home/ga/dalipi3/moduleRPiDALI/libdali.so')
#_C_DALI_func.C_DALI_write.argtypes(ctypes.c_int)

class Application(tk.Frame):
    def __init__(self, master=None):
        super().__init__(master)
        self.master = master
        self.master.title("RPi3 DALI Controller Application Interface")
        self.pack()

        def DALI_write():
            address=self.address_entry.get()
            data=self.data_entry.get()
            adddat= int(address + data) #print (adddat)
            ret = _C_DALI_func.C_DALI_write(adddat)
            print (ret)

        def DALI_read():
            ret = _C_DALI_func.C_DALI_read()
            print (ret)
            v.set(ret)
            #self.datainfo_entry=ret
            
        self.address_label=Message( self, text = "Address", width = 60,
                               command = None)
        self.address_label.grid( row = 0, column = 1, columnspan = 1)
        self.data_label=Message( self, text = "Data", width = 60,
                               command = None)
        self.data_label.grid( row = 0, column = 2, columnspan = 1) 

        self.send_button = Button( self, text = "Send command", width = 25, command = DALI_write)
        self.send_button.grid( row = 1, column = 0, columnspan = 1)
        self.address_entry=Entry( self, text = None, width = 25,
                               command = None)
        self.address_entry.grid( row = 1, column = 1, columnspan = 1)
        self.address_entry.insert(0, "254")
        self.data_entry=Entry( self, text = None, width = 25,
                               command = None)
        self.data_entry.grid( row = 1, column = 2, columnspan = 1)
        self.data_entry.insert(0, "240")
        self.datainfo_label=Message( self, text = "Data/Info", width = 60,
                               command = None)
        self.datainfo_label.grid( row = 2, column = 2, columnspan = 1) 
        self.receive_response = Button( self, text = "Receive response", width = 25,
                               command = DALI_read)
        self.receive_response.grid( row = 3, column = 0, columnspan = 1)
        
        v = StringVar()
        self.datainfo_entry=Entry( self, text = None, width = 25, textvariable=v,
                               command = None)
        self.datainfo_entry.grid( row = 3, column = 2, columnspan = 1)
        self.datainfo_entry.insert(0, "00")
            
root = tk.Tk()
app = Application(master=root)
app.mainloop()
