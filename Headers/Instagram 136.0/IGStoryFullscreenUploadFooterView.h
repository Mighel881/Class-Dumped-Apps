//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryUploadStatusView, IGTapButton;
@protocol IGStoryFullscreenUploadFooterViewDelegate;

@interface IGStoryFullscreenUploadFooterView : UIView
{
    IGStoryUploadStatusView *_uploadStatusView;
    UIView *_uploadFailedBackgroundView;
    IGTapButton *_moreOptionButton;
    id <IGStoryFullscreenUploadFooterViewDelegate> _delegate;
    unsigned long long _uploadStatus;
    unsigned long long _uploadFailedReason;
}

@property(nonatomic) unsigned long long uploadFailedReason; // @synthesize uploadFailedReason=_uploadFailedReason;
@property(nonatomic) unsigned long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(nonatomic) __weak id <IGStoryFullscreenUploadFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapMoreOptionButton;
- (void)_uploadActionTapped;
@property(nonatomic) double uploadProgress;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureUploadStatusViewWithConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

