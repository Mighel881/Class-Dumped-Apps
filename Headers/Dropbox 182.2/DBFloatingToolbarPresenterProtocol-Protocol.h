//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;

@protocol DBFloatingToolbarPresenterProtocol <NSObject>
@property(nonatomic, readonly) unsigned long long toolbarType;
@property(nonatomic, readonly) UIView *floatingToolbar;
@property(nonatomic) _Bool useDarkToolbarStyle;
@property(nonatomic) _Bool forceHidden;
- (void)reloadData;
- (void)setVisible:(_Bool)arg1 autohide:(_Bool)arg2;
- (void)dismissToolbar;
- (void)presentInViewController:(UIViewController *)arg1 containInView:(UIView *)arg2;
@end
