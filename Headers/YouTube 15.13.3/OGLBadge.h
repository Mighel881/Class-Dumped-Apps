//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/OGLBadgeContent-Protocol.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface OGLBadge : UIView <OGLBadgeContent>
{
    NSString *_accessibilityLabel;
    long long _badgeSize;
    UIImageView *_imageView;
    UILabel *_textLabel;
    NSString *_rawText;
    UIView *_outerCircle;
    UIView *_innerCircle;
    struct CGSize _contentSize;
    struct CGSize _originalContentSize;
}

@property(nonatomic) struct CGSize originalContentSize; // @synthesize originalContentSize=_originalContentSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(retain, nonatomic) UIView *outerCircle; // @synthesize outerCircle=_outerCircle;
@property(retain, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long badgeSize; // @synthesize badgeSize=_badgeSize;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void).cxx_destruct;
- (void)updateTextLabel;
- (void)applyTheme;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) NSString *text;
- (void)updateWithBadgeContent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
