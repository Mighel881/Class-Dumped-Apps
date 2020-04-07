//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGridCell.h"

#import "YTDismissableCellProtocol-Protocol.h"
#import "YTOfflinePlaylistItem-Protocol.h"
#import "YTOfflineVideoItem-Protocol.h"
#import "YTRejectedVideoActionProtocol-Protocol.h"

@class NSString, UIView;

@interface YTGridVideoCell : YTGridCell <YTDismissableCellProtocol, YTOfflinePlaylistItem, YTOfflineVideoItem, YTRejectedVideoActionProtocol>
{
    UIView *_dismissedCellOverlayView;
}

+ (Class)viewClass;
@property(retain, nonatomic) UIView *dismissedCellOverlayView; // @synthesize dismissedCellOverlayView=_dismissedCellOverlayView;
- (void).cxx_destruct;
- (void)setRejectedButtonActionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissalPrepareForReuse;
- (void)updateVideoThumbnailClientStatus:(unsigned long long)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1;
- (void)setInlineDownloadedIndicatorVisible:(_Bool)arg1;
- (void)updateWithOfflineStatus:(int)arg1 downloadProgress:(double)arg2 videoThumbnailStatus:(unsigned long long)arg3 transferButtonDelegate:(id)arg4;
- (void)setSpaceUsageString:(id)arg1;
- (void)setOfflineStateLabelFormattedString:(id)arg1 useBlueTypeVariant:(_Bool)arg2;
- (void)setMetadataLabelsAlpha:(double)arg1;
- (struct CGRect)dismissableCellThumbnailFrame;
- (id)dismissableView;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
