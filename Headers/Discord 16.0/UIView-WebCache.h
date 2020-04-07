//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSProgress, NSURL, SDWebImageTransition;
@protocol SDWebImageIndicator;

@interface UIView (WebCache)
- (void)sd_stopImageIndicator;
- (void)sd_startImageIndicator;
@property(retain, nonatomic) id <SDWebImageIndicator> sd_imageIndicator;
@property(retain, nonatomic) SDWebImageTransition *sd_imageTransition;
- (void)sd_setNeedsLayout;
- (void)sd_setImage:(id)arg1 imageData:(id)arg2 basedOnClassOrViaCustomSetImageBlock:(CDUnknownBlockType)arg3 transition:(id)arg4 cacheType:(long long)arg5 imageURL:(id)arg6;
- (void)sd_setImage:(id)arg1 imageData:(id)arg2 basedOnClassOrViaCustomSetImageBlock:(CDUnknownBlockType)arg3 cacheType:(long long)arg4 imageURL:(id)arg5;
- (void)sd_cancelCurrentImageLoad;
- (void)sd_internalSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(struct NSDictionary *)arg4 setImageBlock:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6 completed:(CDUnknownBlockType)arg7;
@property(retain, nonatomic) NSProgress *sd_imageProgress;
- (void)setSd_latestOperationKey:(id)arg1;
- (id)sd_latestOperationKey;
- (void)setSd_imageURL:(id)arg1;
@property(readonly, nonatomic) NSURL *sd_imageURL;
@end
