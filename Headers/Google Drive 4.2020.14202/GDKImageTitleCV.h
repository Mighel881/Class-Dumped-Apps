//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

@class UIImageView, UILabel;

@interface GDKImageTitleCV : GOOBaseContentView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
}

+ (double)textHeight;
+ (id)textFont;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

