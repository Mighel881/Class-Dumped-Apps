//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray;
@protocol YTEditStickerDataProvider;

@protocol YTEditStickerDataProviderDelegate <NSObject>
- (void)sitckerDataProviderDidFinishLoading:(id <YTEditStickerDataProvider>)arg1;
- (void)stickerDataProvider:(id <YTEditStickerDataProvider>)arg1 didRemoveStickersForIndexPaths:(NSArray *)arg2;
- (void)stickerDataProvider:(id <YTEditStickerDataProvider>)arg1 didUpdateStickersForIndexPaths:(NSArray *)arg2;
@end
