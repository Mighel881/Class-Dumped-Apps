//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGAttachmentAssetCell.h>

#import <TelegramUI/TGModernGalleryTransitionView-Protocol.h>

@class NSString, SMetaDisposable, UILabel;

@interface TGAttachmentVideoCell : TGAttachmentAssetCell <TGModernGalleryTransitionView>
{
    UILabel *_durationLabel;
    SMetaDisposable *_adjustmentsDisposable;
}

- (void).cxx_destruct;
- (id)transitionImage;
- (id)transitionImageSquared;
- (void)layoutSubviews;
- (void)_layoutImageWithoutAdjustments;
- (void)_layoutImageForOriginalSize:(struct CGSize)arg1 cropRect:(struct CGRect)arg2 cropOrientation:(long long)arg3;
- (struct CGPoint)fittedCropCenterRect:(struct CGRect)arg1 scale:(double)arg2;
- (void)_transformLayoutForOrientation:(long long)arg1 originalSize:(struct CGSize *)arg2 cropRect:(struct CGRect *)arg3;
- (void)setAsset:(id)arg1 signal:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
