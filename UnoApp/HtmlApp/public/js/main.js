//  Copyright (c) 2017 Perinno Labs. All Rights Reserved.

window.addEventListener('load', function () {
    initApp()
});

initApp = function () {
    firebase.auth().onAuthStateChanged(function (user) {
        if (user) {
            // User is signed in.
            var displayName = user.displayName;
            var email = user.email;
            var emailVerified = user.emailVerified;
            var photoURL = user.photoURL;
            var uid = user.uid;
            var providerData = user.providerData;
            user.getToken().then(function (accessToken) {
                document.getElementById("personalImage").src = photoURL;
            });
        } else {
            // User is signed out.
            
        }
    }, function (error) {
        console.log(error);
    });
};

$(document).ready(function () {
    console.log("Document ready...");
    $(".button-collapse").sideNav();
});