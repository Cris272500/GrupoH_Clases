from PIL import Image, ImageFilter

antes = Image.open("mapache.jpg")
despues = antes.filter(ImageFilter.BoxBlur(10))
despues.save("MapacheBlur.jpg")
