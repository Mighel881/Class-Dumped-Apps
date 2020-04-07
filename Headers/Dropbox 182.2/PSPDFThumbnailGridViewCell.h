//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFPageCell.h>

@class PSPDFDocument, PSPDFThumbnailFlowLayoutAttributes, UIColor, UIImageView;

@interface PSPDFThumbnailGridViewCell : PSPDFPageCell
{
    UIImageView *_bookmarkImageView;
    PSPDFDocument *_document;
    UIColor *_bookmarkImageColor;
    PSPDFThumbnailFlowLayoutAttributes *_attributes;
    unsigned long long _maskStyle;
}

@property(nonatomic) unsigned long long maskStyle; // @synthesize maskStyle=_maskStyle;
@property(retain, nonatomic) PSPDFThumbnailFlowLayoutAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UIColor *bookmarkImageColor; // @synthesize bookmarkImageColor=_bookmarkImageColor;
@property(retain, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)updateMaskForShadowLayer:(id)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)pageLabelString;
- (void)updateMaskStyle;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)updateAccessibilityLabelWithBookmarkedInfo:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateBookmarkImage;
@property(readonly, nonatomic) UIImageView *bookmarkImageView;

@end
