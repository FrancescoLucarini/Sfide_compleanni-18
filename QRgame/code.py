import qrcode
import image
import random
def flaggnt():

    counter = 0
    
    while counter < 99:
        qr = qrcode.QRCode(
            version = random.randint(5, 20),
            box_size = random.randint(5, 25),
            border = random.randint(2, 18),
        )

        link1 = "QcXgW9w4wQd=v?hctaw/moc.ebutuoy.www//:sptth"

        qr.add_data(link1[::-1])
        qr.make(fit=True)
        name = str(counter)+".png"
        img = qr.make_image(fill="black", back_color="white")
        img.save(name)
        counter = counter + 1


def getdaflag():
    link2 = '}!3d0C_rq_l1__"0t4v0rt"_14H__PuY!{81'
    qr = qrcode.QRCode(
        version = random.randint(5, 20),
        box_size = random.randint(5, 25),
        border = random.randint(2, 18),
    )


    qr.add_data(link2[::-1])
    qr.make(fit=True)
    name = "24.png"
    img = qr.make_image(fill="black", back_color="white")
    img.save(name)



def mainn():
    flaggnt()
    getdaflag()


if __name__ == "__main__":

    mainn()
