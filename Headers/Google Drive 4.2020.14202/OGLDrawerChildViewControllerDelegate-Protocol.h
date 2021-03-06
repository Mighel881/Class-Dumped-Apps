//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;
@protocol OGLDrawerChildViewController;

@protocol OGLDrawerChildViewControllerDelegate <NSObject>
- (void)drawerChildViewController:(id <OGLDrawerChildViewController>)arg1 setHeaderDividerHidden:(_Bool)arg2;
- (void)drawerChildViewController:(id <OGLDrawerChildViewController>)arg1 makeMainContentTopVisibleAnimated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (unsigned long long)drawerChildViewControllerDrawerType;
- (void)drawerChildViewControllerHideDrawerWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)drawerChildViewControllerCanHideDrawer;

@optional
- (void)drawerChildViewControllerDidUpdatePreferredContentSize:(id <OGLDrawerChildViewController>)arg1;
- (void)drawerChildViewControllerWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@end

