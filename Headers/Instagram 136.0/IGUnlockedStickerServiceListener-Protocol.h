//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStickerBundleView, IGUnlockedStickerNuxModel, IGUnlockedStickerService, UIView;

@protocol IGUnlockedStickerServiceListener <NSObject>
- (void)unlockedStickerService:(IGUnlockedStickerService *)arg1 didReceiveStickerView:(UIView *)arg2 actionSourceType:(long long)arg3;

@optional
- (void)unlockedStickerService:(IGUnlockedStickerService *)arg1 didReceiveNuxModel:(IGUnlockedStickerNuxModel *)arg2 withStickerView:(IGStickerBundleView *)arg3;
@end

