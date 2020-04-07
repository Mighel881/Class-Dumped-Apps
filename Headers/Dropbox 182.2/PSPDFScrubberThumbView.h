//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;
@protocol PSPDFThumbnailImageViewProvider;

@interface PSPDFScrubberThumbView : UIView
{
    _Bool _isCurrentPage;
    id <PSPDFThumbnailImageViewProvider> _imageProvider;
    unsigned long long _thumbType;
    long long _pageBinding;
    NSArray *_thumbnailViews;
    UIColor *_placeholderBackgroundColor;
    struct CGSize _maximumThumbnailSize;
}

@property(retain, nonatomic) UIColor *placeholderBackgroundColor; // @synthesize placeholderBackgroundColor=_placeholderBackgroundColor;
@property(copy, nonatomic) NSArray *thumbnailViews; // @synthesize thumbnailViews=_thumbnailViews;
@property(readonly, nonatomic) long long pageBinding; // @synthesize pageBinding=_pageBinding;
@property(nonatomic) _Bool isCurrentPage; // @synthesize isCurrentPage=_isCurrentPage;
@property(nonatomic) unsigned long long thumbType; // @synthesize thumbType=_thumbType;
@property(nonatomic) struct CGSize maximumThumbnailSize; // @synthesize maximumThumbnailSize=_maximumThumbnailSize;
@property(readonly, nonatomic) id <PSPDFThumbnailImageViewProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reuseWithImageProvider:(id)arg1;
- (void)recycle;
- (void)setImage:(id)arg1 forPageAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)newInsertedImageView;
- (void)setThumbType:(unsigned long long)arg1 forced:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 imageProvider:(id)arg2 pageBinding:(long long)arg3;

@end
