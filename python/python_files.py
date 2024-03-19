with open('python/newfile.txt', 'w') as file:
    # file.write("This is a new file created.")
    file.writelines(["this is a file.", "\n this is a another file."])