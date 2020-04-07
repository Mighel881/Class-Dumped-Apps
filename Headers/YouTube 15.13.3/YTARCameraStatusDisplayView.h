//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QTMActivityIndicator, UILabel, YTButton, YTColorPalette, YTFormattedStringLabel, YTIArCameraWelcomeRenderer, YTImageService, YTImageView;
@protocol YTARCameraStatusViewDelegate;

@interface YTARCameraStatusDisplayView : UIView
{
    YTButton *_actionButton;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    YTFormattedStringLabel *_actionLabel;
    YTImageView *_displayImageView;
    QTMActivityIndicator *_activityView;
    YTIArCameraWelcomeRenderer *_renderer;
    id <YTARCameraStatusViewDelegate> _delegate;
    id _parentResponder;
    YTImageService *_imageService;
    YTColorPalette *_colorPalette;
}

@property(retain, nonatomic) YTColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak YTImageService *imageService; // @synthesize imageService=_imageService;
@property(nonatomic) __weak id parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTARCameraStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTIArCameraWelcomeRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) QTMActivityIndicator *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) YTImageView *displayImageView; // @synthesize displayImageView=_displayImageView;
@property(retain, nonatomic) YTFormattedStringLabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (struct CGSize)displayImageSize;
- (struct CGSize)actionButtonSize;
- (double)actionLabelTopPadding;
- (double)actionButtonTopPadding;
- (double)descriptionLabelTopPadding;
- (double)titleLabelTopPadding;
- (struct CGSize)actionLabelSize;
- (struct CGSize)descriptionLabelSize;
- (struct CGSize)titleLabelSize;
- (void)updateColors;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)actionLabelTapped:(id)arg1;
- (void)actionButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
