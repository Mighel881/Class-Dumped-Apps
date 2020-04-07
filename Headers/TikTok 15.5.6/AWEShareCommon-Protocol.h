//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareConfiguration, AWEShareContext, AWEShareCustomTask, AWEShareTask, NSString, UIViewController;

@protocol AWEShareCommon <NSObject>
- (void)showCommonPanelWithConfiguration:(AWEShareConfiguration *)arg1 onViewController:(UIViewController *)arg2;
- (void)showCommonPanelWithTask:(AWEShareTask *)arg1 configurationHandler:(void (^)(AWEShareConfiguration *))arg2 onViewController:(UIViewController *)arg3;
- (void)showCommonPanelWithTask:(AWEShareTask *)arg1 onViewController:(UIViewController *)arg2;
- (_Bool)commonShareWithTask:(AWEShareTask *)arg1 toPlatform:(long long)arg2;
- (_Bool)commonShareWithTask:(AWEShareTask *)arg1 forType:(NSString *)arg2;
- (AWEShareConfiguration *)commonConfigurationWithTask:(AWEShareTask *)arg1;
- (AWEShareCustomTask *)commonTaskWithContext:(AWEShareContext *)arg1;
@end
