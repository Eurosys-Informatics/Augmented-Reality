﻿$(document).ready(function () {
    console.log("Document ready...");
    $('#modal1').modal({
        dismissible: false,
        opacity: 1
    }).modal('open');
    $(".button-collapse").sideNav();
});

function authenticationdone() {
    console.log('Authdone:main_specific');
    startSignalling();
}
