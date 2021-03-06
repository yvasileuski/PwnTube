/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <Foundation/Foundation.h>

@class NSMutableArray;
@protocol YTAuthenticatorDelegate;

@interface YTAuthenticator : NSObject {
	id<YTAuthenticatorDelegate> _delegate;
	NSMutableArray *_deferredRequests;
	int _accountAuthState;
	int _deviceAuthState;
}
+ (id)authenticationDialogWithTarget:(id)target action:(SEL)action;
+ (id)sharedAuthenticator;
- (id)init;
- (void)_addAccountAuthenticationObserers;
- (void)_addDeferredRequest:(id)request accountAuthRequired:(BOOL)required;
- (void)_addDeviceAuthenticationObserers;
- (void)_completeAuthenticationForDeferredRequests;
- (void)_didAuthenticateAccount:(id)account;
- (void)_didAuthenticateDevice:(id)device;
- (void)_failedToAuthenticateAccount:(id)authenticateAccount;
- (void)_failedToAuthenticateDevice:(id)authenticateDevice;
- (void)_removeAccountAuthenticationObservers;
- (void)_removeDefferredRequests;
- (void)_removeDeviceAuthenticationObservers;
- (void)addAuthenticationHeadersToRequest:(id)request accountAuthRequired:(BOOL)required;
- (BOOL)cachedCredentialsValid;
- (void)clearAccountInfo;
- (void)dealloc;
- (void)invalidateToken;
- (BOOL)isAccountAuthenticated;
- (BOOL)isWaitingForAuthentication;
- (void)setAccount:(id)account password:(id)password;
- (void)setDelegate:(id)delegate;
- (void)userCancelledAccountAuthentication;
@end

