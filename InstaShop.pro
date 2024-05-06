QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bakeriesandcakes.cpp \
    butcheryandseafood.cpp \
    checkout.cpp \
    dairy.cpp \
    deleteitem_seller.cpp \
    fillcreditinfo.cpp \
    fillinfo_seller.cpp \
    fruitsandvegetables.cpp \
    login_register_seller.cpp \
    login_register_window.cpp \
    main.cpp \
    mainwindow.cpp \
    product.cpp \
    products1.cpp \
    products2.cpp \
    register.cpp \
    register2.cpp \
    shoppingcart.cpp \
    thankyou.cpp \
    user.cpp

HEADERS += \
    ShoppingCart_Stack.h \
    ShoppingCart_Vector.h \
    UsersData.h \
    bakeriesandcakes.h \
    butcheryandseafood.h \
    checkout.h \
    dairy.h \
    deleteitem_seller.h \
    fillcreditinfo.h \
    fillinfo_seller.h \
    fruitsandvegetables.h \
    login_register_seller.h \
    login_register_window.h \
    mainwindow.h \
    product.h \
    products1.h \
    products2.h \
    register.h \
    register2.h \
    shoppingcart.h \
    thankyou.h \
    user.h \
    vector_products.h

FORMS += \
    bakeriesandcakes.ui \
    butcheryandseafood.ui \
    checkout.ui \
    dairy.ui \
    deleteitem_seller.ui \
    fillcreditinfo.ui \
    fillinfo_seller.ui \
    fruitsandvegetables.ui \
    login_register_seller.ui \
    login_register_window.ui \
    mainwindow.ui \
    products1.ui \
    products2.ui \
    register.ui \
    register2.ui \
    shoppingcart.ui \
    thankyou.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Products.qrc \
    Users_Buyer.qrc \
    Users_Seller.qrc
