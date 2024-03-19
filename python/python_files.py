# with open('python/newfile.txt', 'w') as file:
#     # file.write("This is a new file created.")
#     file.writelines(["this is a file.", "\n this is a another file."])
with open('python/newfile.txt', 'a') as file:
    file.writelines(["this is first line2", " \n this is second line"])