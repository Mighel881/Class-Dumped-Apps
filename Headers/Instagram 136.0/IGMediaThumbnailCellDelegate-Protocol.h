//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGImageRequestSummary, IGMediaThumbnailCell, NSError, NSString, UIImage;

@protocol IGMediaThumbnailCellDelegate <NSObject>
- (void)mediaThumbnailCellDidSingleTap:(IGMediaThumbnailCell *)arg1;
- (void)mediaThumbnailCell:(IGMediaThumbnailCell *)arg1 didFailLoadWithError:(NSError *)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
- (void)mediaThumbnailCell:(IGMediaThumbnailCell *)arg1 didLoadImage:(UIImage *)arg2 source:(NSString *)arg3 networkRequestSummary:(IGImageRequestSummary *)arg4;
@end

