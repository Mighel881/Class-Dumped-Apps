//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@class TGVideoMessageScrubber;

@protocol TGVideoMessageScrubberDelegate <NSObject>
- (void)videoScrubberDidCancelRequestingThumbnails:(TGVideoMessageScrubber *)arg1;
- (void)videoScrubberDidFinishRequestingThumbnails:(TGVideoMessageScrubber *)arg1;
- (void)videoScrubber:(TGVideoMessageScrubber *)arg1 editingEndValueDidChange:(double)arg2;
- (void)videoScrubber:(TGVideoMessageScrubber *)arg1 editingStartValueDidChange:(double)arg2;
- (void)videoScrubberDidEndEditing:(TGVideoMessageScrubber *)arg1 endValueChanged:(_Bool)arg2;
- (void)videoScrubberDidBeginEditing:(TGVideoMessageScrubber *)arg1;
- (void)videoScrubber:(TGVideoMessageScrubber *)arg1 valueDidChange:(double)arg2;
- (void)videoScrubberDidEndScrubbing:(TGVideoMessageScrubber *)arg1;
- (void)videoScrubberDidBeginScrubbing:(TGVideoMessageScrubber *)arg1;
@end
