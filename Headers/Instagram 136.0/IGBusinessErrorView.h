//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>

@class IGBusinessErrorViewModel, IGCoreTextView, IGImageView, NSString, UIButton, UILabel;
@protocol IGBusinessErrorViewDelegate;

@interface IGBusinessErrorView : UIView <IGCoreTextLinkHandler>
{
    IGBusinessErrorViewModel *_viewModel;
    UILabel *_titleLabel;
    IGCoreTextView *_subtitleView;
    UIButton *_button;
    IGImageView *_imageView;
    id <IGBusinessErrorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBusinessErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_onButtonTapped;
- (id)_createButtonWithTitle:(id)arg1;
- (id)_createStyledLableWithString:(id)arg1 textFont:(double)arg2 textColor:(id)arg3 weight:(double)arg4;
- (id)_createLableWithString:(id)arg1 textFont:(double)arg2 textColor:(id)arg3 weight:(double)arg4;
- (void)_setUpRemoteImageView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

