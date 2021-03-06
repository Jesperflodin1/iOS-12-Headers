//
//  ASWebAuthenticationSession.h
//  AuthenticationServices Framework
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <AuthenticationServices/ASFoundation.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

AS_EXTERN API_AVAILABLE(ios(12.0))
NSErrorDomain const ASWebAuthenticationSessionErrorDomain;

/*! @enum ASWebAuthenticationSessionErrorCode
 @abstract Error code of the NSError object passed in by ASWebAuthenticationSessionCompletionHandler.
 @constant ASWebAuthenticationSessionErrorCodeCanceledLogin The user has canceled login by cancelling the
 alert asking for permission to log in to this app, or by dismissing the view controller for loading the
 authentication webpage.
 */
typedef NS_ERROR_ENUM(ASWebAuthenticationSessionErrorDomain, ASWebAuthenticationSessionErrorCode) {
    ASWebAuthenticationSessionErrorCodeCanceledLogin = 1,
} API_AVAILABLE(ios(12.0));

typedef void (^ASWebAuthenticationSessionCompletionHandler)(NSURL *_Nullable callbackURL, NSError *_Nullable error) NS_SWIFT_NAME(ASWebAuthenticationSession.CompletionHandler);

/*!
 @class ASWebAuthenticationSession
 An ASWebAuthenticationSession object can be used to authenticate a user with a web service, even if the web service is run
 by a third party. ASWebAuthenticationSession puts the user in control of whether they want to use their existing logged-in
 session from Safari. The app provides a URL that points to the authentication webpage. The page will be loaded in a secure
 view controller. From the webpage, the user can authenticate herself and grant access to the app.
 On completion, the service will send a callback URL with an authentication token, and this URL will be passed to the app by
 ASWebAuthenticationSessionCompletionHandler.

 The callback URL usually has a custom URL scheme. For the app to receive the callback URL, it needs to either register the
 custom URL scheme in its Info.plist, or set the scheme to callbackURLScheme argument in the initializer.

 If the user has already logged into the web service in Safari or other apps via ASWebAuthenticationSession, it is possible to
 share the existing login information. An alert will be presented to get the user's consent for sharing their existing login
 information. If the user cancels the alert, the session will be canceled, and the completion handler will be called with
 the error code ASWebAuthenticationSessionErrorCodeCanceledLogin.

 If the user taps Cancel when showing the login webpage for the web service, the session will be canceled, and the completion
 handler will be called with the error code ASWebAuthenticationSessionErrorCodeCanceledLogin.

 The app can cancel the session by calling -[ASWebAuthenticationSession cancel]. This will also dismiss the view controller that
 is showing the web service's login page.
 */
AS_EXTERN API_AVAILABLE(ios(12.0))
@interface ASWebAuthenticationSession : NSObject

- (instancetype)init NS_UNAVAILABLE;

/*! @abstract Returns an ASWebAuthenticationSession object.
 @param URL the initial URL pointing to the authentication webpage. Only supports URLs with http:// or https:// schemes.
 @param callbackURLScheme the custom URL scheme that the app expects in the callback URL.
 @param completionHandler the completion handler which is called when the session is completed successfully or canceled by user.
 */
- (instancetype)initWithURL:(NSURL *)URL callbackURLScheme:(nullable NSString *)callbackURLScheme completionHandler:(ASWebAuthenticationSessionCompletionHandler)completionHandler;

/*! @abstract Starts the ASWebAuthenticationSession instance after it is instantiated.
 @discussion start can only be called once for an ASWebAuthenticationSession instance. This also means calling start on a
 canceled session will fail.
 @result Returns YES if the session starts successfully.
 */
- (BOOL)start;

/*! @abstract Cancel an ASWebAuthenticationSession. If the view controller is already presented to load the webpage for
 authentication, it will be dismissed. Calling cancel on an already canceled session will have no effect.
 */
- (void)cancel;

@end

NS_ASSUME_NONNULL_END
