//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEDelegateDistributeProxy, UIViewController;

@protocol AWEPOIDetailContentScrollViewControllerProtocol <NSObject>
@property(nonatomic) _Bool isNotFirstSelect;
- (void)selectController;
- (void)doRenderingContent;
- (void)setMinimumContentHeight:(double)arg1;
- (double)contentOffsetY;
- (void)setContentOffsetY:(double)arg1 breakScroll:(_Bool)arg2;
- (void)scrollToTop;
- (UIViewController *)headerContainerWithHeight:(double)arg1;
- (void)setDelegateProxy:(AWEDelegateDistributeProxy *)arg1;
@end
