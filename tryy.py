from picamzero import Camera
import os
home_dir=os.environ['HOME']
cam=Camera()
cam.annotate("Hello world")
cam.start_preview()
cam.take_photo(f"{home_dir} /Desktop/textOnPhoto.jpg")
cam.stop_preview()