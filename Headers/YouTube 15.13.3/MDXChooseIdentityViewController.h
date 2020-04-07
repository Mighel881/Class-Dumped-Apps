//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/OGLExpressSignInViewControllerDelegate-Protocol.h>
#import <Module_Framework/SSOExpressSignInViewControllerDelegate-Protocol.h>
#import <Module_Framework/SSOInterfaceControllerDelegate-Protocol.h>

@class MDXSeamlessSignInRequest, NSString, SSOAccountInterfaceDataSource;
@protocol MDXChooseIdentityViewControllerDelegate;

@interface MDXChooseIdentityViewController : UIViewController <OGLExpressSignInViewControllerDelegate, SSOExpressSignInViewControllerDelegate, SSOInterfaceControllerDelegate>
{
    MDXSeamlessSignInRequest *_request;
    SSOAccountInterfaceDataSource *_accountDataSource;
    id <MDXChooseIdentityViewControllerDelegate> _delegate;
}

+ (id)configuredOGLSignInViewControllerWithSSOService:(id)arg1 theme:(id)arg2;
+ (id)configuredSSOSignInViewControllerWithSSOService:(id)arg1 theme:(id)arg2;
@property(nonatomic) __weak id <MDXChooseIdentityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)expressSignInViewController:(id)arg1 didSwitchSelectedAccount:(id)arg2;
- (void)expressSignInViewController:(id)arg1 didSignInAccount:(id)arg2 error:(id)arg3;
- (_Bool)interfaceControllerShouldRequireSignIn:(id)arg1;
- (id)presentingViewControllerForInterfaceController:(id)arg1;
- (long long)interfaceControllerAccountSelectorAppearance:(id)arg1;
- (void)expressSignInViewController:(id)arg1 didSignInIdentity:(id)arg2 error:(id)arg3;
- (void)completeStepWithAccount:(id)arg1 error:(id)arg2;
- (void)completeStepWithIdentity:(id)arg1 error:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
